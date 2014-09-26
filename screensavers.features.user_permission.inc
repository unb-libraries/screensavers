<?php
/**
 * @file
 * screensavers.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function screensavers_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'admin screensavers eng'.
  $permissions['admin screensavers eng'] = array(
    'name' => 'admin screensavers eng',
    'roles' => array(
      'Screensavers ENG Admin' => 'Screensavers ENG Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'screensavers',
  );

  // Exported permission: 'admin screensavers hil'.
  $permissions['admin screensavers hil'] = array(
    'name' => 'admin screensavers hil',
    'roles' => array(
      'Screensavers HIL Admin' => 'Screensavers HIL Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'screensavers',
  );

  // Exported permission: 'admin screensavers sci'.
  $permissions['admin screensavers sci'] = array(
    'name' => 'admin screensavers sci',
    'roles' => array(
      'Screensavers SCI Admin' => 'Screensavers SCI Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'screensavers',
  );

  // Exported permission: 'create screensaver_message content'.
  $permissions['create screensaver_message content'] = array(
    'name' => 'create screensaver_message content',
    'roles' => array(
      'Screensavers ENG Admin' => 'Screensavers ENG Admin',
      'Screensavers HIL Admin' => 'Screensavers HIL Admin',
      'Screensavers SCI Admin' => 'Screensavers SCI Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any screensaver_message content'.
  $permissions['delete any screensaver_message content'] = array(
    'name' => 'delete any screensaver_message content',
    'roles' => array(
      'Screensavers ENG Admin' => 'Screensavers ENG Admin',
      'Screensavers HIL Admin' => 'Screensavers HIL Admin',
      'Screensavers SCI Admin' => 'Screensavers SCI Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own screensaver_message content'.
  $permissions['delete own screensaver_message content'] = array(
    'name' => 'delete own screensaver_message content',
    'roles' => array(
      'Screensavers ENG Admin' => 'Screensavers ENG Admin',
      'Screensavers HIL Admin' => 'Screensavers HIL Admin',
      'Screensavers SCI Admin' => 'Screensavers SCI Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any screensaver_message content'.
  $permissions['edit any screensaver_message content'] = array(
    'name' => 'edit any screensaver_message content',
    'roles' => array(
      'Screensavers ENG Admin' => 'Screensavers ENG Admin',
      'Screensavers HIL Admin' => 'Screensavers HIL Admin',
      'Screensavers SCI Admin' => 'Screensavers SCI Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own screensaver_message content'.
  $permissions['edit own screensaver_message content'] = array(
    'name' => 'edit own screensaver_message content',
    'roles' => array(
      'Screensavers ENG Admin' => 'Screensavers ENG Admin',
      'Screensavers HIL Admin' => 'Screensavers HIL Admin',
      'Screensavers SCI Admin' => 'Screensavers SCI Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view screensavers rss'.
  $permissions['view screensavers rss'] = array(
    'name' => 'view screensavers rss',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'screensavers',
  );

  return $permissions;
}
