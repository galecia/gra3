<?php
/**
 * @file
 * branch_model_test.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function branch_model_test_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-staff-menu.
  $menus['menu-staff-menu'] = array(
    'menu_name' => 'menu-staff-menu',
    'title' => 'Staff Menu',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 5,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Staff Menu');


  return $menus;
}
