<?php
/**
 * @file
 * forumm.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function forumm_user_default_roles() {
  $roles = array();

  // Exported role: Forum User.
  $roles['Forum User'] = array(
    'name' => 'Forum User',
    'weight' => 3,
  );

  return $roles;
}
