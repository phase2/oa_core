<?php
/**
 * @file
 * oa_panopoly_users.features.inc
 */

/**
 * Implements hook_default_page_manager_handlers_alter().
 */
function oa_panopoly_users_default_page_manager_handlers_alter(&$data) {
  if (isset($data['pm_existing_pages_user_login_panel_context'])) {
    $data['pm_existing_pages_user_login_panel_context']->conf['body_classes_to_add'] = 'oa-login'; /* WAS: '' */
    $data['pm_existing_pages_user_login_panel_context']->conf['body_classes_to_remove'] = ''; /* WAS: '' */
    $data['pm_existing_pages_user_login_panel_context']->conf['display']->content['new-8e25d1dd-6fed-4627-8513-c575cca1bffd']->configuration['override_title_text'] = 'Log In'; /* WAS: '' */
    $data['pm_existing_pages_user_login_panel_context']->conf['display']->hide_title = 1; /* WAS: 0 */
    $data['pm_existing_pages_user_login_panel_context']->conf['display']->layout = 'boxton'; /* WAS: 'burr_flipped' */
    $data['pm_existing_pages_user_login_panel_context']->conf['display']->panel_settings['contentmain'] = array(
      'style' => 'oa_styles_oa_pane',
    ); /* WAS: '' */
  }
}

/**
 * Implements hook_panelizer_defaults_override_alter().
 */
function oa_panopoly_users_panelizer_defaults_override_alter(&$data) {
  if (isset($data['user:user:default'])) {
    $data['user:user:default']->display->content['new-2735456f-0214-480c-a304-d20f45eb2757']->configuration['delta_limit'] = 0; /* WAS: '' */
    $data['user:user:default']->display->content['new-2735456f-0214-480c-a304-d20f45eb2757']->configuration['delta_offset'] = 0; /* WAS: '' */
    $data['user:user:default']->display->content['new-2735456f-0214-480c-a304-d20f45eb2757']->configuration['delta_reversed'] = FALSE; /* WAS: '' */
    $data['user:user:default']->display->content['new-2735456f-0214-480c-a304-d20f45eb2757']->configuration['exposed'] = array(
      'sort_by' => NULL,
      'sort_order' => NULL,
    ); /* WAS: '' */
    $data['user:user:default']->display->content['new-2735456f-0214-480c-a304-d20f45eb2757']->configuration['formatter'] = 'text_default'; /* WAS: '' */
    $data['user:user:default']->display->content['new-2735456f-0214-480c-a304-d20f45eb2757']->configuration['formatter_settings'] = array(); /* WAS: '' */
    $data['user:user:default']->display->content['new-2735456f-0214-480c-a304-d20f45eb2757']->configuration['items_per_page'] = NULL; /* WAS: '' */
    $data['user:user:default']->display->content['new-2735456f-0214-480c-a304-d20f45eb2757']->configuration['label'] = 'hidden'; /* WAS: '' */
    $data['user:user:default']->display->content['new-2735456f-0214-480c-a304-d20f45eb2757']->configuration['link_to_view'] = NULL; /* WAS: '' */
    $data['user:user:default']->display->content['new-2735456f-0214-480c-a304-d20f45eb2757']->configuration['more_link'] = NULL; /* WAS: '' */
    $data['user:user:default']->display->content['new-2735456f-0214-480c-a304-d20f45eb2757']->configuration['offset'] = NULL; /* WAS: '' */
    $data['user:user:default']->display->content['new-2735456f-0214-480c-a304-d20f45eb2757']->configuration['override_title'] = 0; /* WAS: 1 */
    $data['user:user:default']->display->content['new-2735456f-0214-480c-a304-d20f45eb2757']->configuration['pager_id'] = NULL; /* WAS: '' */
    $data['user:user:default']->display->content['new-2735456f-0214-480c-a304-d20f45eb2757']->configuration['path'] = NULL; /* WAS: '' */
    $data['user:user:default']->display->content['new-2735456f-0214-480c-a304-d20f45eb2757']->configuration['use_pager'] = NULL; /* WAS: '' */
    $data['user:user:default']->display->content['new-2735456f-0214-480c-a304-d20f45eb2757']->configuration['widget_title'] = NULL; /* WAS: '' */
    $data['user:user:default']->display->content['new-2735456f-0214-480c-a304-d20f45eb2757']->panel = 'contentheader'; /* WAS: 'column1' */
    $data['user:user:default']->display->content['new-2735456f-0214-480c-a304-d20f45eb2757']->subtype = 'user:field_user_about'; /* WAS: 'user_profile' */
    $data['user:user:default']->display->content['new-2735456f-0214-480c-a304-d20f45eb2757']->type = 'entity_field'; /* WAS: 'user_profile' */
    $data['user:user:default']->display->content['new-46a70b52-bdf3-45f9-becc-f39d146631be'] = (object) array(
          'pid' => 'new-46a70b52-bdf3-45f9-becc-f39d146631be',
          'panel' => 'contentheader',
          'type' => 'views_panes',
          'subtype' => 'open_atrium_discussions-discussion_user_reply',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'exposed' => array(
              'type' => 'oa_discussion_post',
              'sort_by' => NULL,
              'sort_order' => NULL,
            ),
            'view_mode' => 'teaser',
            'widget_title' => NULL,
            'items_per_page' => NULL,
            'use_pager' => NULL,
            'pager_id' => NULL,
            'offset' => NULL,
            'link_to_view' => NULL,
            'more_link' => NULL,
            'path' => NULL,
            'view_settings' => 'fields',
            'header_type' => 'none',
          ),
          'cache' => array(),
          'style' => '',
          'css' => array(),
          'extras' => array(),
          'position' => 2,
          'locks' => array(),
          'uuid' => '46a70b52-bdf3-45f9-becc-f39d146631be',
        ); /* WAS: '' */
    $data['user:user:default']->display->content['new-80a6a21b-20e6-4acf-9772-eb089cc6082b'] = (object) array(
          'pid' => 'new-80a6a21b-20e6-4acf-9772-eb089cc6082b',
          'panel' => 'sidebar',
          'type' => 'oa_core_user_spaces',
          'subtype' => 'oa_core_user_spaces',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'featured_spaces' => 1,
            'context' => 'panelizer',
            'override_title' => 0,
            'override_title_text' => '',
            'image_size' => 'none',
            'show_description' => 0,
            'show_sections' => 0,
            'tabs' => array(
              'Favorite' => 'Favorite',
              'Subscribed' => 'Subscribed',
              'All' => 0,
            ),
            'link_class' => 'btn',
            'show_links' => 0,
            'num_per_page' => 15,
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
          'uuid' => '80a6a21b-20e6-4acf-9772-eb089cc6082b',
        ); /* WAS: '' */
    $data['user:user:default']->display->content['new-9def882d-91aa-4313-87b2-0ace29b4329c'] = (object) array(
          'pid' => 'new-9def882d-91aa-4313-87b2-0ace29b4329c',
          'panel' => 'sidebar',
          'type' => 'entity_field',
          'subtype' => 'user:field_user_picture',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'label' => 'hidden',
            'formatter' => 'image',
            'delta_limit' => 0,
            'delta_offset' => 0,
            'delta_reversed' => FALSE,
            'formatter_settings' => array(
              'image_style' => 'panopoly_image_full',
              'image_link' => '',
            ),
            'context' => 'panelizer',
            'override_title' => 1,
            'override_title_text' => '',
            'view_mode' => NULL,
            'widget_title' => NULL,
            'items_per_page' => NULL,
            'use_pager' => NULL,
            'pager_id' => NULL,
            'offset' => NULL,
            'link_to_view' => NULL,
            'more_link' => NULL,
            'path' => NULL,
          ),
          'cache' => array(),
          'style' => '',
          'css' => array(),
          'extras' => array(),
          'position' => 0,
          'locks' => array(),
          'uuid' => '9def882d-91aa-4313-87b2-0ace29b4329c',
        ); /* WAS: '' */
    $data['user:user:default']->display->content['new-e858abd3-7976-4641-81f7-dbac739105bb']->configuration['exposed']['type'] = 'oa_discussion_post'; /* WAS: '' */
    $data['user:user:default']->display->content['new-e858abd3-7976-4641-81f7-dbac739105bb']->configuration['header_type'] = 'none'; /* WAS: '' */
    $data['user:user:default']->display->content['new-e858abd3-7976-4641-81f7-dbac739105bb']->configuration['items_per_page'] = ''; /* WAS: '' */
    $data['user:user:default']->display->content['new-e858abd3-7976-4641-81f7-dbac739105bb']->configuration['pager_id'] = ''; /* WAS: '' */
    $data['user:user:default']->display->content['new-e858abd3-7976-4641-81f7-dbac739105bb']->configuration['use_pager'] = 0; /* WAS: '' */
    $data['user:user:default']->display->content['new-e858abd3-7976-4641-81f7-dbac739105bb']->configuration['view_mode'] = 'teaser'; /* WAS: '' */
    $data['user:user:default']->display->content['new-e858abd3-7976-4641-81f7-dbac739105bb']->configuration['view_settings'] = 'fields'; /* WAS: '' */
    $data['user:user:default']->display->content['new-e858abd3-7976-4641-81f7-dbac739105bb']->panel = 'contentheader'; /* WAS: 'column2' */
    $data['user:user:default']->display->content['new-e858abd3-7976-4641-81f7-dbac739105bb']->position = 1; /* WAS: 0 */
    $data['user:user:default']->display->content['new-e858abd3-7976-4641-81f7-dbac739105bb']->subtype = 'open_atrium_discussions-discussion_user'; /* WAS: 'user:field_user_picture' */
    $data['user:user:default']->display->content['new-e858abd3-7976-4641-81f7-dbac739105bb']->type = 'views_panes'; /* WAS: 'entity_field' */
    $data['user:user:default']->display->layout = 'selby_flipped'; /* WAS: 'phelan' */
    $data['user:user:default']->display->panel_settings['style_settings']['contentcolumn1'] = NULL; /* WAS: '' */
    $data['user:user:default']->display->panel_settings['style_settings']['contentcolumn2'] = NULL; /* WAS: '' */
    $data['user:user:default']->display->panel_settings['style_settings']['contentfooter'] = NULL; /* WAS: '' */
    $data['user:user:default']->display->panel_settings['style_settings']['contentheader'] = NULL; /* WAS: '' */
    $data['user:user:default']->display->panels['contentheader'] = array(
      0 => 'new-2735456f-0214-480c-a304-d20f45eb2757',
      1 => 'new-e858abd3-7976-4641-81f7-dbac739105bb',
      2 => 'new-46a70b52-bdf3-45f9-becc-f39d146631be',
      3 => 'new-5bf7e9a8-4213-407b-a26d-63b8d2076a2b',
    ); /* WAS: '' */
    $data['user:user:default']->display->panels['sidebar'] = array(
      0 => 'new-80a6a21b-20e6-4acf-9772-eb089cc6082b',
      1 => 'new-9def882d-91aa-4313-87b2-0ace29b4329c',
    ); /* WAS: '' */
    unset($data['user:user:default']->display->content['new-e858abd3-7976-4641-81f7-dbac739105bb']->configuration['delta_limit']);
    unset($data['user:user:default']->display->content['new-e858abd3-7976-4641-81f7-dbac739105bb']->configuration['delta_offset']);
    unset($data['user:user:default']->display->content['new-e858abd3-7976-4641-81f7-dbac739105bb']->configuration['delta_reversed']);
    unset($data['user:user:default']->display->content['new-e858abd3-7976-4641-81f7-dbac739105bb']->configuration['exposed']['sort_by']);
    unset($data['user:user:default']->display->content['new-e858abd3-7976-4641-81f7-dbac739105bb']->configuration['exposed']['sort_order']);
    unset($data['user:user:default']->display->content['new-e858abd3-7976-4641-81f7-dbac739105bb']->configuration['formatter']);
    unset($data['user:user:default']->display->content['new-e858abd3-7976-4641-81f7-dbac739105bb']->configuration['formatter_settings']);
    unset($data['user:user:default']->display->content['new-e858abd3-7976-4641-81f7-dbac739105bb']->configuration['label']);
    unset($data['user:user:default']->display->content['new-e858abd3-7976-4641-81f7-dbac739105bb']->configuration['override_title']);
    unset($data['user:user:default']->display->content['new-e858abd3-7976-4641-81f7-dbac739105bb']->configuration['override_title_text']);
    unset($data['user:user:default']->display->panels['column1']);
    unset($data['user:user:default']->display->panels['column2']);
  }
}
