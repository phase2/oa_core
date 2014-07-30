<?php
/**
 * @file
 * oa_panopoly_users.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function oa_panopoly_users_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: page_manager_handlers
  $overrides["page_manager_handlers.pm_existing_pages_user_login_panel_context.conf|body_classes_to_add"] = 'oa-login';
  $overrides["page_manager_handlers.pm_existing_pages_user_login_panel_context.conf|body_classes_to_remove"] = '';
  $overrides["page_manager_handlers.pm_existing_pages_user_login_panel_context.conf|display|hide_title"] = 1;
  $overrides["page_manager_handlers.pm_existing_pages_user_login_panel_context.conf|display|layout"] = 'boxton';

  // Exported overrides for: panelizer_defaults
  $overrides["panelizer_defaults.user:user:default.display|content|new-1f213df1-81a7-40b1-8432-6da8d232526a"] = (object) array(
      'pid' => 'new-1f213df1-81a7-40b1-8432-6da8d232526a',
      'panel' => 'contentheader',
      'type' => 'entity_field',
      'subtype' => 'user:field_user_about',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'label' => 'title',
        'formatter' => 'text_default',
        'delta_limit' => 0,
        'delta_offset' => 0,
        'delta_reversed' => FALSE,
        'formatter_settings' => array(),
        'context' => array(),
        'override_title' => 0,
        'override_title_text' => '',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 0,
      'locks' => array(),
      'uuid' => '1f213df1-81a7-40b1-8432-6da8d232526a',
    );
  $overrides["panelizer_defaults.user:user:default.display|content|new-23b1f4f1-cda8-42ca-880a-afc2ae92f3e9|panel"] = 'sidebar';
  $overrides["panelizer_defaults.user:user:default.display|content|new-80a6a21b-20e6-4acf-9772-eb089cc6082b"] = (object) array(
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
    );
  $overrides["panelizer_defaults.user:user:default.display|content|new-a617e554-6ad7-4d25-9d89-627d130d8be3"] = (object) array(
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
    );
  $overrides["panelizer_defaults.user:user:default.display|content|new-d76e85cd-4625-4a52-a17b-e5c65e1a0247"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.user:user:default.display|content|new-faf0ad46-b575-4f96-874d-9a4548cc8da3"] = (object) array(
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
    );
  $overrides["panelizer_defaults.user:user:default.display|layout"] = 'selby_flipped';
  $overrides["panelizer_defaults.user:user:default.display|panel_settings|style_settings|contentcolumn1"] = NULL;
  $overrides["panelizer_defaults.user:user:default.display|panel_settings|style_settings|contentcolumn2"] = NULL;
  $overrides["panelizer_defaults.user:user:default.display|panel_settings|style_settings|contentfooter"] = NULL;
  $overrides["panelizer_defaults.user:user:default.display|panel_settings|style_settings|contentheader"] = NULL;
  $overrides["panelizer_defaults.user:user:default.display|panels|column1"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.user:user:default.display|panels|column2"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.user:user:default.display|panels|contentheader"] = array(
    0 => 'new-1f213df1-81a7-40b1-8432-6da8d232526a',
    1 => 'new-a617e554-6ad7-4d25-9d89-627d130d8be3',
    2 => 'new-faf0ad46-b575-4f96-874d-9a4548cc8da3',
    3 => 'new-7e2787f8-3f6c-4b3b-a1bb-e11225e395d5',
  );
  $overrides["panelizer_defaults.user:user:default.display|panels|sidebar"] = array(
    0 => 'new-23b1f4f1-cda8-42ca-880a-afc2ae92f3e9',
    1 => 'new-80a6a21b-20e6-4acf-9772-eb089cc6082b',
  );

 return $overrides;
}
