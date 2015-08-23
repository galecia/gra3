<?php
/**
 * @file
 * branch_model_test.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function branch_model_test_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-staff-menu_manage-branches:staff/manage-branches
  $menu_links['menu-staff-menu_manage-branches:staff/manage-branches'] = array(
    'menu_name' => 'menu-staff-menu',
    'link_path' => 'staff/manage-branches',
    'router_path' => 'staff/manage-branches',
    'link_title' => 'Manage Branches',
    'options' => array(
      'identifier' => 'menu-staff-menu_manage-branches:staff/manage-branches',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Manage Branches');

  return $menu_links;
}
