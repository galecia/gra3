<?php
/**
 * @file
 * user_registration_feature_test.features.inc
 */

/**
 * Implements hook_default_profile2_type().
 */
function user_registration_feature_test_default_profile2_type() {
  $items = array();
  $items['reader'] = entity_import('profile2_type', '{
    "userCategory" : false,
    "userView" : false,
    "type" : "reader",
    "label" : "Reader",
    "weight" : "0",
    "data" : { "registration" : 0, "use_page" : 1 },
    "rdf_mapping" : []
  }');
  return $items;
}
