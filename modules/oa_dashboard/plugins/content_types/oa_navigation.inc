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

  $block->content = theme('oa_navigation', array('menu_name' => $conf['menu_name']));

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
