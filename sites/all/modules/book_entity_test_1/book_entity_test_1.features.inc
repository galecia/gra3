<?php
/**
 * @file
 * book_entity_test_1.features.inc
 */

/**
 * Implements hook_views_api().
 */
function book_entity_test_1_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_eck_bundle_info().
 */
function book_entity_test_1_eck_bundle_info() {
  $items = array(
    'book_book' => array(
      'machine_name' => 'book_book',
      'entity_type' => 'book',
      'name' => 'book',
      'label' => 'book',
    ),
    'uae_book_read' => array(
      'machine_name' => 'uae_book_read',
      'entity_type' => 'uae',
      'name' => 'book_read',
      'label' => 'book_read',
    ),
  );
  return $items;
}

/**
 * Implements hook_eck_entity_type_info().
 */
function book_entity_test_1_eck_entity_type_info() {
  $items = array(
    'book' => array(
      'name' => 'book',
      'label' => 'Book',
      'properties' => array(
        'uid' => array(
          'label' => 'Author',
          'type' => 'integer',
          'behavior' => 'author',
        ),
        'created' => array(
          'label' => 'Created',
          'type' => 'integer',
          'behavior' => 'created',
        ),
      ),
    ),
    'uae' => array(
      'name' => 'uae',
      'label' => 'User Activity Entry',
      'properties' => array(
        'uid' => array(
          'label' => 'Author',
          'type' => 'integer',
          'behavior' => 'author',
        ),
        'created' => array(
          'label' => 'Created',
          'type' => 'integer',
          'behavior' => 'created',
        ),
      ),
    ),
  );
  return $items;
}
