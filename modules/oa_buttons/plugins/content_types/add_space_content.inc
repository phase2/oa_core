<?php
/**
 * @file oa_notifications_pane.inc
 */

$plugin = array(
  'title' => t('Add Space Content'),
  'description' => t('Provides a dropdown menu for adding content within a space'),
  'single' => TRUE,
  'category' => array(t('Open Atrium'), -9),
  'edit form' => 'oa_buttons_add_space_content_settings_form',
  'render callback' => 'oa_buttons_add_space_content_render',
);


/**
 * Provides the form for the widget.
 */
function oa_buttons_add_space_content_settings_form($form, &$form_state) {
  return $form;
}


/**
 * Renders the widget.
 */
function oa_buttons_add_space_content_render($subtype, $conf, $args, $context) {
  global $user;
  $block = new stdClass();
  $context = og_context();
  $section = oa_core_get_section_context();
  $content = '';
  if (isset($context['gid'])) {
    $node = node_load($context['gid']);
  }
  else {
    return;
  }
  $cache_key = 'oa_section_buttons:' . $context['gid'] . ':' . $section . ':' . $user->uid;
  // Lets cache this, since it can be expensive.
  if ($cache = cache_get($cache_key, 'cache_oa_section_buttons')) {
    $content = $cache->data;
  }
  else {
    $buttons = oa_buttons_get_command_buttons($node);
    if (count($buttons)) {
      drupal_alter('oa_space_buttons', $buttons);
      $command_button_types = array();
      $command_buttons = array_keys($buttons);
      $node_types = array_flip(node_type_get_names());
      // Iterate over each of the buttons.
      foreach ($command_buttons as $value) {
        // The nid has been added to each command button type so they are unique.
        // We could have more than one of each type of section'.
        $parts = explode(':', $value);
        // We only need one of each of the node types to get the entities.
        if (in_array($parts[0], $node_types)) {
          if (!isset($command_button_types[$parts[0]])) {
            // The entities we need to load for the command buttons.
            $command_button_types[$parts[0]] = $parts[0];
          }
        }
      }
      $entities = command_buttons_machine_name_load(array_keys($command_button_types));
      $item_list = array();
      $classes = array(
        'use_dropdowns' => TRUE,
        'dropdown_label' => t('Create Content'),
        'item_class' => array(
          'oa-button',
        ),
        'wrapper_class' => array(
          'oa-buttons',
          'btn',
          'btn-inverse',
        ),
      );

      $content = command_buttons_render_buttons($entities, $classes, $buttons);

      // Cache for 1 hour.
      cache_set($cache_key, $content, 'cache_oa_section_buttons', time() + 6000);
    }
  }

  $block->content = $content;

  return $block;
}


