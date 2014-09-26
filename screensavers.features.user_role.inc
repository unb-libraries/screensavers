<?php
/**
 * @file
 * screensavers.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function screensavers_user_default_roles() {
  $roles = array();

  // Exported role: Screensavers ENG Admin.
  $roles['Screensavers ENG Admin'] = array(
    'name' => 'Screensavers ENG Admin',
    'weight' => 24,
  );

  // Exported role: Screensavers HIL Admin.
  $roles['Screensavers HIL Admin'] = array(
    'name' => 'Screensavers HIL Admin',
    'weight' => 22,
  );

  // Exported role: Screensavers SCI Admin.
  $roles['Screensavers SCI Admin'] = array(
    'name' => 'Screensavers SCI Admin',
    'weight' => 23,
  );

  return $roles;
}
