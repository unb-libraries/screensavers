<?php
/**
 * @file
 * screensavers.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function screensavers_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_screensaver_library'
  $field_bases['field_screensaver_library'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_screensaver_library',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'HIL' => 'Harriet Irving Library',
        'SCI' => 'Science and Forestry Library',
        'ENG' => 'Engineering and Computer Science Library',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_screensaver_message'
  $field_bases['field_screensaver_message'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_screensaver_message',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  return $field_bases;
}
