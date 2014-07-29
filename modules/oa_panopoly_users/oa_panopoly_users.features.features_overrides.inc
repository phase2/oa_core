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

  // Exported overrides for: panelizer_defaults
  $overrides["panelizer_defaults.user:user:default.display|content|new-9def882d-91aa-4313-87b2-0ace29b4329c|style|settings"] = NULL;
  $overrides["panelizer_defaults.user:user:default.display|content|new-a617e554-6ad7-4d25-9d89-627d130d8be3|style|settings"] = NULL;
  $overrides["panelizer_defaults.user:user:default.display|panels|contentheader|0"] = 'new-d3a2a9fb-f88a-4730-bfab-c36f4e0af395';
  $overrides["panelizer_defaults.user:user:default.display|panels|contentheader|1"] = 'new-faf0ad46-b575-4f96-874d-9a4548cc8da3';
  $overrides["panelizer_defaults.user:user:default.display|panels|contentheader|2"] = 'new-a617e554-6ad7-4d25-9d89-627d130d8be3';
  $overrides["panelizer_defaults.user:user:default.display|panels|sidebar|0"] = 'new-9def882d-91aa-4313-87b2-0ace29b4329c';
  $overrides["panelizer_defaults.user:user:default.display|panels|sidebar|1"] = 'new-80a6a21b-20e6-4acf-9772-eb089cc6082b';

 return $overrides;
}
