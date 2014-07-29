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
 * Implements hook_panelizer_defaults_override_alter().
 */
function oa_panopoly_users_panelizer_defaults_override_alter(&$data) {
  if (isset($data['user:user:default'])) {
    $data['user:user:default']->display->content['new-9def882d-91aa-4313-87b2-0ace29b4329c']->style['settings'] = NULL; /* WAS: '' */
    $data['user:user:default']->display->content['new-a617e554-6ad7-4d25-9d89-627d130d8be3']->style['settings'] = NULL; /* WAS: '' */
    $data['user:user:default']->display->panels['contentheader']['0'] = 'new-d3a2a9fb-f88a-4730-bfab-c36f4e0af395'; /* WAS: 'new-a617e554-6ad7-4d25-9d89-627d130d8be3' */
    $data['user:user:default']->display->panels['contentheader']['1'] = 'new-faf0ad46-b575-4f96-874d-9a4548cc8da3'; /* WAS: 'new-d3a2a9fb-f88a-4730-bfab-c36f4e0af395' */
    $data['user:user:default']->display->panels['contentheader']['2'] = 'new-a617e554-6ad7-4d25-9d89-627d130d8be3'; /* WAS: 'new-faf0ad46-b575-4f96-874d-9a4548cc8da3' */
    $data['user:user:default']->display->panels['sidebar']['0'] = 'new-9def882d-91aa-4313-87b2-0ace29b4329c'; /* WAS: 'new-80a6a21b-20e6-4acf-9772-eb089cc6082b' */
    $data['user:user:default']->display->panels['sidebar']['1'] = 'new-80a6a21b-20e6-4acf-9772-eb089cc6082b'; /* WAS: 'new-9def882d-91aa-4313-87b2-0ace29b4329c' */
  }
}
