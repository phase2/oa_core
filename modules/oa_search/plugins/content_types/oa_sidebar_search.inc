<?php
/**
 * @file oa_notifications_pane.inc
 */

$plugin = array(
  'title' => t('Sidebar Search'),
  'description' => t('Provides a search bar for the sidebar, with the ability to preview results.'),
  'single' => TRUE,
  'category' => array(t('Search'), -9),
  'edit form' => 'oa_sidebar_search_settings_form',
  'render callback' => 'oa_sidebar_search_pane_render',
  'defaults' => array(
    'allowed_options' => array(),
    'taxonomy_terms' => array(),
  ),
);

/**
 * Renders the widget.
 */
function oa_sidebar_search_pane_render($subtype, $conf, $args, $context) {

  if (isset($conf['allowed_options']) && count(array_filter($conf['allowed_options'])) > 0) {
    $options = $conf['allowed_options'];
  }
  else {
    $options = array(
      'all_spaces' => t('All spaces'),
      'this_space' => t('This space'),
      'users' => t('Users'),
    );
  }

  $spaces = array();
  if (isset($conf['taxonomy_terms']) && count(array_filter($conf['taxonomy_terms'])) > 0) {
    $terms = $conf['taxonomy_terms'];
    $terms = array_filter($terms);
    // get a list of spaces with those terms
    $query = db_select('taxonomy_index', 't');
    $result = $query
      ->fields('t', array('nid'))
      ->condition('t.tid', $terms, 'IN')
      ->execute()
      ->fetchCol(0);
    $titles = oa_core_get_titles($result);
    $spaces[0] = 'Select a space';
    foreach ($titles['titles'] as $key => $name) {
      $spaces[$titles['ids'][$key]] = $name;
    }
    $element = array(
      '#name' => 'space_select',
      '#title' => t('Select Space to narrow search'),
      '#type' => 'select',
      '#options' => $spaces,
      '#default_value' => array(),
      '#multiple' => FALSE,
      '#required' => FALSE,
    );
    $element = form_process_select($element);
    $spaces = drupal_render($element);
  }
  $block = new stdClass();
  $block->title = t('Search');
  $block->content = array(
    '#theme' => 'oa_sidebar_search',
    '#options' => $options,
    '#spaces' => $spaces,
  );

  return $block;
}

/**
 * Provides the form for the widget.
 */
function oa_sidebar_search_settings_form($form, &$form_state) {
  $conf = $form_state['conf'];

  $options = array(
    'all_spaces' => t('All spaces'),
    'this_space' => t('This space'),
    'users' => t('Users'),
  );
  $form['allowed_options'] = array(
    '#title' => t('Allowed options'),
    '#type' => 'checkboxes',
    '#options' => $options,
    '#default_value' => (!empty($conf['allowed_options'])) ? $conf['allowed_options'] : $options,
    '#description' => t('Select which search options you would like to enable.'),
  );

  $vocabs = oa_core_get_entity_vocabs('node', OA_SPACE_TYPE);
  $options = oa_core_get_vocab_terms($vocabs);
  $form['taxonomy_terms'] = array(
    '#title' => t('Select from Spaces'),
    '#type' => 'checkboxes',
    '#options' => $options,
    '#default_value' => (!empty($conf['taxonomy_terms'])) ? $conf['taxonomy_terms'] : $options,
    '#description' => t('Select which taxonomy terms are used to provide a selection of spaces to search within.'),
  );

  return $form;
}

/**
 * Saves changes to the widget.
 */
function oa_sidebar_search_settings_form_submit($form, &$form_state) {
  foreach (array_keys($form_state['values']) as $key) {
    if (isset($form_state['values'][$key])) {
      $form_state['conf'][$key] = $form_state['values'][$key];
    }
  }
}
