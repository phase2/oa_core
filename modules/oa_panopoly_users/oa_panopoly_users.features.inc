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
    $data['user:user:default']->display->content['new-0f96a399-81ef-4c4a-b381-41cd1fd63989'] = (object) array(
          'pid' => 'new-0f96a399-81ef-4c4a-b381-41cd1fd63989',
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
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 1,
          'locks' => array(),
          'uuid' => '0f96a399-81ef-4c4a-b381-41cd1fd63989',
        ); /* WAS: '' */
    $data['user:user:default']->display->content['new-23b1f4f1-cda8-42ca-880a-afc2ae92f3e9']->panel = 'sidebar'; /* WAS: 'column2' */
    $data['user:user:default']->display->content['new-30c49617-53b0-4971-9503-0c9f664cc581'] = (object) array(
          'pid' => 'new-30c49617-53b0-4971-9503-0c9f664cc581',
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
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 2,
          'locks' => array(),
          'uuid' => '30c49617-53b0-4971-9503-0c9f664cc581',
        ); /* WAS: '' */
    $data['user:user:default']->display->content['new-45c960da-44ee-418b-bd67-dcbf9e784859'] = (object) array(
          'pid' => 'new-45c960da-44ee-418b-bd67-dcbf9e784859',
          'panel' => 'contentheader',
          'type' => 'views_panes',
          'subtype' => 'oa_worktracker-user_tasks',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'show_exposed_form' => 1,
            'items_per_page' => 10,
            'fields_override' => array(
              'title' => 1,
              'timestamp' => 1,
              'realname_1' => 0,
              'realname' => 0,
              'title_1' => 1,
              'field_oa_worktracker_priority' => 1,
              'field_oa_worktracker_task_type' => 1,
              'field_oa_worktracker_task_status' => 1,
              'comment_count' => 1,
              'last_updated' => 1,
            ),
            'exposed' => array(
              'field_oa_worktracker_task_status_value' => array(),
              'field_oa_worktracker_priority_value' => array(),
              'field_oa_worktracker_task_type_value' => array(),
              'flagged' => 1,
            ),
            'context' => array(
              0 => 'panelizer',
            ),
            'override_title' => '',
            'override_title_text' => '',
            'view_settings' => 'fields',
            'header_type' => 'none',
            'view_mode' => 'teaser',
            'widget_title' => 'Your Tasks',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 3,
          'locks' => array(),
          'uuid' => '45c960da-44ee-418b-bd67-dcbf9e784859',
        ); /* WAS: '' */
    $data['user:user:default']->display->content['new-d76e85cd-4625-4a52-a17b-e5c65e1a0247']->panel = 'contentheader'; /* WAS: 'column1' */
    $data['user:user:default']->display->content['new-ffb8c273-e70c-4b34-9b1e-58527f71a2ae'] = (object) array(
          'pid' => 'new-ffb8c273-e70c-4b34-9b1e-58527f71a2ae',
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
          'uuid' => 'ffb8c273-e70c-4b34-9b1e-58527f71a2ae',
        ); /* WAS: '' */
    $data['user:user:default']->display->layout = 'selby_flipped'; /* WAS: 'phelan' */
    $data['user:user:default']->display->panel_settings['style_settings']['contentcolumn1'] = NULL; /* WAS: '' */
    $data['user:user:default']->display->panel_settings['style_settings']['contentcolumn2'] = NULL; /* WAS: '' */
    $data['user:user:default']->display->panel_settings['style_settings']['contentfooter'] = NULL; /* WAS: '' */
    $data['user:user:default']->display->panel_settings['style_settings']['contentheader'] = NULL; /* WAS: '' */
    $data['user:user:default']->display->panels['contentheader'] = array(
      0 => 'new-d76e85cd-4625-4a52-a17b-e5c65e1a0247',
      1 => 'new-0f96a399-81ef-4c4a-b381-41cd1fd63989',
      2 => 'new-30c49617-53b0-4971-9503-0c9f664cc581',
      3 => 'new-45c960da-44ee-418b-bd67-dcbf9e784859',
    ); /* WAS: '' */
    $data['user:user:default']->display->panels['sidebar'] = array(
      0 => 'new-23b1f4f1-cda8-42ca-880a-afc2ae92f3e9',
      1 => 'new-ffb8c273-e70c-4b34-9b1e-58527f71a2ae',
    ); /* WAS: '' */
    unset($data['user:user:default']->display->panels['column1']);
    unset($data['user:user:default']->display->panels['column2']);
  }
}
