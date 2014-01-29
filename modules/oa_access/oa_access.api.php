<?php

/**
 * @file
 * Contains documentation about the Open Atrium Access module's hooks.
 */

/**
 * @defgroup oa_access Open Atrium Access
 * @{
 * Hooks from the Open Atrium Access module.
 */

/**
 * Define an Open Atrium permission that can be assigned to a Group or Team.
 *
 * This hook can supply permissions that the module defines, so that they
 * can be selected on the admin page and used to grant or restrict access to
 * certain actions the module performs.
 *
 * @return array
 *   An associative array whose keys are permission names and values are
 *   associative arrays containing the following keys:
 *   - title: Human readable name of the permission.
 *   - description: (Optional) Human readable description of the permission.
 *   - type: (Optional) Flag specifying if it can be assigned to Groups or
 *     Teams or both. By default, it allows both.
 *     - OA_ACCESS_DEFAULT_PERMISSION: (default) Allows this permission on both
 *       Groups on Teams.
 *     - OA_ACCESS_GROUP_PERMISSION: Only allowed on Groups.
 *     - OA_ACCESS_TEAM_PERMISSION: Only allowed on Teams.
 *     The flags can be combined if you'd like to be explicit, for exampl:
 *     @code
 *       'type' => OA_ACCESS_GROUP_PERMISSION | OA_ACCESS_TEAM_PERMISSION,
 *     @endcode
 *
 * @see hook_oa_access_permission_alter()
 */
function hook_oa_access_permission() {
  return array(
    'do something awesome' => array(
      'title' => t('Do something awesome'),
      'description' => t('Be careful who give this permission to, because soon everyone might want it!'),
    ),
  );
}

/**
 * Alter the Open Atrium permissions.
 *
 * @param array $perms
 *   Associative array keyed with the permission name containing associative
 *   arrays with the following keys:
 *   - title: Human readable name of the permission.
 *   - description: Human readable description of the permission.
 *   - module: The machine name of the module which defines it.
 *
 * @see hook_oa_access_permission()
 */
function hook_oa_access_permission_alter(&$perms) {
  // Give this permission a more awesome title.
  if (isset($perms['do something awesome'])) {
    $perms['do something awesome']['title'] = t('Do something so completely and totally AWESOME!!!!');
  }
}

/**
 * @}
 */
