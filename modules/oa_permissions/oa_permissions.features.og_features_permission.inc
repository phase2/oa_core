<?php
/**
 * @file
 * oa_permissions.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function oa_permissions_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:oa_group:subscribe'
  $permissions['node:oa_group:subscribe'] = array(
    'roles' => array(
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:oa_group:subscribe without approval'
  $permissions['node:oa_group:subscribe without approval'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:oa_group:unsubscribe'
  $permissions['node:oa_group:unsubscribe'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:oa_space:subscribe'
  $permissions['node:oa_space:subscribe'] = array(
    'roles' => array(
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:oa_space:subscribe without approval'
  $permissions['node:oa_space:subscribe without approval'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:oa_space:unsubscribe'
  $permissions['node:oa_space:unsubscribe'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  return $permissions;
}
