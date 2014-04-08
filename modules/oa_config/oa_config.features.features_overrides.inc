<?php
/**
 * @file
 * oa_config.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function oa_config_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: wysiwyg
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|table"] = array(
    'tablecontrols' => 1,
  );

 return $overrides;
}
