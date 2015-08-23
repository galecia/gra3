<?php
/**
 * @file
 * event_feature_test.features.inc
 */

/**
 * Implements hook_node_info().
 */
function event_feature_test_node_info() {
  $items = array(
    'event' => array(
      'name' => t('Event'),
      'base' => 'node_content',
      'description' => t('A date content type that is linked to a Views calendar.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
