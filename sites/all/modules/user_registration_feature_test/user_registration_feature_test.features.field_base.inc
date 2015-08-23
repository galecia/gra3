<?php
/**
 * @file
 * user_registration_feature_test.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function user_registration_feature_test_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_age'
  $field_bases['field_age'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_age',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'profile2_private' => 0,
    ),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'field_are_you_a_kid_or_adult_'
  $field_bases['field_are_you_a_kid_or_adult_'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_are_you_a_kid_or_adult_',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Kid' => 'Kid',
        'Adult' => 'Adult',
      ),
      'allowed_values_function' => '',
      'entity_translation_sync' => FALSE,
      'profile2_private' => 1,
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_i_just_finished'
  $field_bases['field_i_just_finished'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_i_just_finished',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Kindergarten' => 'Kindergarten',
        '1st grade' => '1st grade',
        '2nd grade' => '2nd grade',
        '3rd grade' => '3rd grade',
        '4th grade' => '4th grade',
        '5th grade' => '5th grade',
        '6th grade' => '6th grade',
        '7th grade' => '7th grade',
        '8th grade' => '8th grade',
        '9th grade' => '9th grade',
        '10th grade' => '10th grade',
        '11th grade' => '11th grade',
        '12th grade' => '12th grade',
      ),
      'allowed_values_function' => '',
      'entity_translation_sync' => FALSE,
      'profile2_private' => 0,
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_my_branch'
  $field_bases['field_my_branch'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_my_branch',
    'indexes' => array(
      'nid' => array(
        0 => 'nid',
      ),
    ),
    'locked' => 0,
    'module' => 'node_reference',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'profile2_private' => 0,
      'referenceable_types' => array(
        'activity_page' => 0,
        'article' => 0,
        'certificate' => 0,
        'event' => 0,
        'h5p_content' => 0,
        'library_branch' => 'library_branch',
        'matching' => 0,
        'multichoice' => 0,
        'page' => 0,
        'panel' => 0,
        'poll' => 0,
        'program' => 0,
        'quiz' => 0,
        'quiz_ddlines' => 0,
        'quiz_directions' => 0,
        'reading_log_entry' => 0,
        'scale' => 0,
        'truefalse' => 0,
        'webform' => 0,
      ),
      'view' => array(
        'args' => array(),
        'display_name' => '',
        'view_name' => '',
      ),
    ),
    'translatable' => 0,
    'type' => 'node_reference',
  );

  // Exported field_base: 'field_my_favorite_book_so_far_'
  $field_bases['field_my_favorite_book_so_far_'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_my_favorite_book_so_far_',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 255,
      'profile2_private' => 0,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_my_school'
  $field_bases['field_my_school'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_my_school',
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'school_districts',
          'parent' => 0,
        ),
      ),
      'entity_translation_sync' => FALSE,
      'options_list_callback' => 'i18n_taxonomy_allowed_values',
      'profile2_private' => 1,
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  return $field_bases;
}
