<?php
/**
 * @file
 * oa_panopoly_users.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function oa_panopoly_users_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_page_manager_handlers_alter().
 */
function oa_panopoly_users_default_page_manager_handlers_alter(&$data) {
  if (isset($data['pm_existing_pages_user_login_panel_context'])) {
    $data['pm_existing_pages_user_login_panel_context']->conf['body_classes_to_add'] = 'oa-login'; /* WAS: '' */
    $data['pm_existing_pages_user_login_panel_context']->conf['body_classes_to_remove'] = ''; /* WAS: '' */
    $data['pm_existing_pages_user_login_panel_context']->conf['display']->hide_title = 1; /* WAS: 0 */
    $data['pm_existing_pages_user_login_panel_context']->conf['display']->layout = 'boxton'; /* WAS: 'burr_flipped' */
  }
}

/**
 * Implements hook_panelizer_defaults_override_alter().
 */
function oa_panopoly_users_panelizer_defaults_override_alter(&$data) {
  if (isset($data['user:user:default'])) {
    $data['user:user:default']->display->content['new-a617e554-6ad7-4d25-9d89-627d130d8be3'] = (object) array(
          'pid' => 'new-a617e554-6ad7-4d25-9d89-627d130d8be3',
          'panel' => 'contentheader',
          'type' => 'views_panes',
          'subtype' => 'open_atrium_discussions-discussion_user_reply',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'use_pager' => 1,
            'pager_id' => 0,
            'items_per_page' => 20,
            'exposed' => array(
              'type' => 'All',
            ),
            'context' => array(
              0 => 'empty',
            ),
            'view_settings' => 'fields',
            'header_type' => 'none',
            'view_mode' => 'teaser',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
            'style' => 'oa_styles_oa_pane',
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 1,
          'locks' => array(),
          'uuid' => 'a617e554-6ad7-4d25-9d89-627d130d8be3',
        ); /* WAS: '' */
    $data['user:user:default']->display->content['new-23b1f4f1-cda8-42ca-880a-afc2ae92f3e9']->panel = 'sidebar'; /* WAS: 'column2' */
    $data['user:user:default']->display->content['new-faf0ad46-b575-4f96-874d-9a4548cc8da3'] = (object) array(
          'pid' => 'new-faf0ad46-b575-4f96-874d-9a4548cc8da3',
          'panel' => 'contentheader',
          'type' => 'views_panes',
          'subtype' => 'open_atrium_discussions-discussion_user',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'use_pager' => 1,
            'pager_id' => 0,
            'items_per_page' => 20,
            'exposed' => array(
              'type' => 'oa_discussion_post',
            ),
            'context' => array(
              0 => 'empty',
            ),
            'view_settings' => 'fields',
            'header_type' => 'none',
            'view_mode' => 'teaser',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
            'style' => 'oa_styles_oa_pane',
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 2,
          'locks' => array(),
          'uuid' => 'faf0ad46-b575-4f96-874d-9a4548cc8da3',
        ); /* WAS: '' */
    $data['user:user:default']->display->content['new-d76e85cd-4625-4a52-a17b-e5c65e1a0247']->panel = 'contentheader'; /* WAS: 'column1' */
    $data['user:user:default']->display->content['new-80a6a21b-20e6-4acf-9772-eb089cc6082b'] = (object) array(
          'pid' => 'new-80a6a21b-20e6-4acf-9772-eb089cc6082b',
          'panel' => 'sidebar',
          'type' => 'oa_core_user_spaces',
          'subtype' => 'oa_core_user_spaces',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'tabs' => array(
              'Favorite' => 'Favorite',
              'Subscribed' => 'Subscribed',
              'Archived' => 0,
              'All' => 0,
            ),
            'image_size' => 'quarter',
            'show_description' => 0,
            'show_sections' => 0,
            'show_links' => 0,
            'link_class' => 'btn',
            'num_per_page' => 15,
            'types' => array(
              'oa_space' => 0,
              'oa_group' => 0,
            ),
            'context' => 'panelizer',
            'override_title' => 0,
            'override_title_text' => '',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 1,
          'locks' => array(),
          'uuid' => '80a6a21b-20e6-4acf-9772-eb089cc6082b',
        ); /* WAS: '' */
    $data['user:user:default']->display->layout = 'selby_flipped'; /* WAS: 'phelan' */
    $data['user:user:default']->display->panel_settings['style_settings']['contentcolumn1'] = NULL; /* WAS: '' */
    $data['user:user:default']->display->panel_settings['style_settings']['contentcolumn2'] = NULL; /* WAS: '' */
    $data['user:user:default']->display->panel_settings['style_settings']['contentfooter'] = NULL; /* WAS: '' */
    $data['user:user:default']->display->panel_settings['style_settings']['contentheader'] = NULL; /* WAS: '' */
    $data['user:user:default']->display->panels['contentheader'] = array(
      0 => 'new-d76e85cd-4625-4a52-a17b-e5c65e1a0247',
      1 => 'new-a617e554-6ad7-4d25-9d89-627d130d8be3',
      2 => 'new-faf0ad46-b575-4f96-874d-9a4548cc8da3',
    ); /* WAS: '' */
    $data['user:user:default']->display->panels['sidebar'] = array(
      0 => 'new-23b1f4f1-cda8-42ca-880a-afc2ae92f3e9',
      1 => 'new-80a6a21b-20e6-4acf-9772-eb089cc6082b',
    ); /* WAS: '' */
    unset($data['user:user:default']->display->panels['column1']);
    unset($data['user:user:default']->display->panels['column2']);
  }
}
