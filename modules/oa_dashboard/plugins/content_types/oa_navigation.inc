<?php
/**
 * @file
 * Provides a panels pane that displayes the OA Navigation.
 */

$plugin = array(
  'title' => t('Open Atrium Navigation'),
  'description' => t('The Open Atrium navigation.'),
  'single' => TRUE,
  'category' => array(t('Open Atrium'), -9),
);

/**
 * Render callback.
 */
function oa_dashboard_oa_navigation_content_type_render($subtype, $conf, $anel_args) {
  $block = new stdClass();
  $block->module = 'oa_dashboard';

  $vars = array();
  $vars['menu_name'] = $conf['menu_name'];

  if (variable_get('oa_menu_banner', FALSE)) {
    $fid = variable_get('oa_site_banner', '');
    if ($fid && ($site_file = file_load($fid))) {
      $vars['height'] = (!empty($site_file->metadata['height'])) ? $site_file->metadata['height'] : 0;
      $vars['width'] = (!empty($site_file->metadata['width'])) ? $site_file->metadata['width'] : 0;
      $vars['banner'] = theme('image', array(
        'path' => $site_file->uri,
        'width' => $vars['width'],
        'height' => $vars['height'],
        'alt' => t('Site banner'),
        'attributes' => array(
          'class' => 'oa-site-banner-img',
        ),
      ));
      $vars['width'] = 0;
    }
  }

  $block->content = theme('oa_navigation', $vars);

  return $block;
}

/**
 * Edit form callback.
 */
function oa_dashboard_oa_navigation_content_type_edit_form($form, &$form_state) {
  $conf = $form_state['conf'];
  $menus = menu_get_menus();

  $form['menu_name'] = array(
    '#title' => t('Menu'),
    '#type' => 'select',
    '#description' => t('Menu to use for the OA Navigation.'),
    '#options' => $menus,
    '#required' => TRUE,
    '#default_value' => $conf['menu_name'],
  );

  return $form;
}

/**
 * Submit handler for the custom type settings form.
 */
function oa_dashboard_oa_navigation_content_type_edit_form_submit($form, &$form_state) {
  foreach (array_keys($form_state['values']) as $key) {
    if (isset($form_state['values'][$key])) {
      $form_state['conf'][$key] = $form_state['values'][$key];
    }
  }
}

/**
 * Returns the administrative title.
 */
function oa_dashboard_oa_navigation_content_type_admin_title($subtype, $conf, $context) {
  return t('Open Atrium Navigation');
}
