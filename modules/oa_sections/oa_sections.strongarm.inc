<?php
/**
 * @file
 * oa_sections.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function oa_sections_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_oa_section';
  $strongarm->value = 'edit-panelizer';
  $export['additional_settings__active_tab_oa_section'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_oa_section';
  $strongarm->value = 0;
  $export['comment_anonymous_oa_section'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_oa_section';
  $strongarm->value = 1;
  $export['comment_default_mode_oa_section'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_oa_section';
  $strongarm->value = '50';
  $export['comment_default_per_page_oa_section'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_oa_section';
  $strongarm->value = 1;
  $export['comment_form_location_oa_section'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_oa_section';
  $strongarm->value = '0';
  $export['comment_oa_section'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_oa_section';
  $strongarm->value = '1';
  $export['comment_preview_oa_section'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_oa_section';
  $strongarm->value = 1;
  $export['comment_subject_field_oa_section'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_popup_authored_enabled_oa_section';
  $strongarm->value = 1;
  $export['date_popup_authored_enabled_oa_section'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_popup_authored_format_oa_section';
  $strongarm->value = 'm/d/Y - H:i';
  $export['date_popup_authored_format_oa_section'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_popup_authored_year_range_oa_section';
  $strongarm->value = '3';
  $export['date_popup_authored_year_range_oa_section'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_oa_section';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_oa_section'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_oa_section';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_oa_section'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_oa_section';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_oa_section'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__oa_section';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'featured' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '2',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__oa_section'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_oa_section';
  $strongarm->value = '0';
  $export['language_content_type_oa_section'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_oa_section';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_oa_section'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_oa_section';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_oa_section'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_oa_section';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_oa_section'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_oa_section';
  $strongarm->value = '1';
  $export['node_preview_oa_section'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_oa_section';
  $strongarm->value = 0;
  $export['node_submitted_oa_section'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_menu_enable_oa_section';
  $strongarm->value = 0;
  $export['og_menu_enable_oa_section'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:oa_section_allowed_layouts';
  $strongarm->value = 'O:22:"panels_allowed_layouts":4:{s:9:"allow_new";b:1;s:11:"module_name";s:25:"panelizer_node:oa_section";s:23:"allowed_layout_settings";a:71:{s:8:"flexible";b:1;s:25:"threecol_25_50_25_stacked";b:1;s:25:"threecol_33_34_33_stacked";b:1;s:6:"onecol";b:1;s:14:"twocol_stacked";b:1;s:13:"twocol_bricks";b:1;s:17:"threecol_25_50_25";b:1;s:17:"threecol_33_34_33";b:1;s:6:"twocol";b:1;s:15:"brenham_flipped";b:1;s:5:"geary";b:1;s:22:"bryant_flipped_flipped";b:1;s:15:"hewston_flipped";b:1;s:13:"selby_flipped";b:1;s:17:"sanderson_flipped";b:1;s:5:"brown";b:1;s:7:"brenham";b:1;s:6:"bryant";b:1;s:4:"burr";b:1;s:5:"sutro";b:1;s:6:"taylor";b:1;s:4:"pond";b:1;s:6:"boxton";b:1;s:5:"rolph";b:1;s:6:"phelan";b:1;s:12:"burr_flipped";b:1;s:5:"selby";b:1;s:6:"harris";b:1;s:7:"moscone";b:1;s:8:"mccoppin";b:1;s:14:"taylor_flipped";b:1;s:7:"hewston";b:1;s:6:"whelan";b:1;s:15:"moscone_flipped";b:1;s:12:"sutro_double";b:1;s:4:"webb";b:1;s:8:"bartlett";b:1;s:9:"sanderson";b:1;s:12:"webb_flipped";b:1;s:16:"bartlett_flipped";b:1;s:10:"radix_webb";b:1;s:11:"radix_brown";b:1;s:14:"radix_bartlett";b:1;s:12:"radix_whelan";b:1;s:10:"radix_burr";b:1;s:12:"radix_taylor";b:1;s:13:"radix_brenham";b:1;s:18:"radix_webb_flipped";b:1;s:23:"radix_sanderson_flipped";b:1;s:10:"radix_pond";b:1;s:22:"radix_bartlett_flipped";b:1;s:12:"radix_harris";b:1;s:21:"radix_brenham_flipped";b:1;s:21:"radix_moscone_flipped";b:1;s:12:"radix_boxton";b:1;s:13:"radix_moscone";b:1;s:20:"radix_taylor_flipped";b:1;s:18:"radix_sutro_double";b:1;s:20:"radix_bryant_flipped";b:1;s:21:"radix_hewston_flipped";b:1;s:18:"radix_burr_flipped";b:1;s:11:"radix_sutro";b:1;s:14:"radix_mccoppin";b:1;s:12:"radix_bryant";b:1;s:11:"radix_rolph";b:1;s:13:"radix_hewston";b:1;s:11:"radix_selby";b:1;s:19:"radix_selby_flipped";b:1;s:15:"radix_sanderson";b:1;s:12:"radix_phelan";b:1;s:11:"radix_geary";b:1;}s:10:"form_state";N;}';
  $export['panelizer_node:oa_section_allowed_layouts'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:oa_section_allowed_types_default';
  $strongarm->value = 0;
  $export['panelizer_node:oa_section_allowed_types_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:oa_section_default';
  $strongarm->value = array(
    'entity_field' => 'entity_field',
    'custom' => 'custom',
    'entity_form_field' => 'entity_form_field',
    'entity_field_extra' => 'entity_field_extra',
    'token' => 'token',
    'block' => 'block',
    'entity_view' => 'entity_view',
    'fieldable_panels_pane' => 'fieldable_panels_pane',
    'menu_tree' => 'menu_tree',
    'panels_mini' => 'panels_mini',
    'views_panes' => 'views_panes',
    'other' => 'other',
  );
  $export['panelizer_node:oa_section_default'] = $strongarm;

  return $export;
}
