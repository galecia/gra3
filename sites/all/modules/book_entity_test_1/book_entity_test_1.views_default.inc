<?php
/**
 * @file
 * book_entity_test_1.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function book_entity_test_1_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'book_entities';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'eck_book';
  $view->human_name = 'Book Entities';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Book Entities';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Book: Id */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'eck_book';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['label'] = 'Book ID';
  $handler->display->display_options['fields']['id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['id']['separator'] = '';
  /* Field: Book: Title */
  $handler->display->display_options['fields']['field_entbook_title']['id'] = 'field_entbook_title';
  $handler->display->display_options['fields']['field_entbook_title']['table'] = 'field_data_field_entbook_title';
  $handler->display->display_options['fields']['field_entbook_title']['field'] = 'field_entbook_title';
  /* Field: Book: Author */
  $handler->display->display_options['fields']['field_entbook_author']['id'] = 'field_entbook_author';
  $handler->display->display_options['fields']['field_entbook_author']['table'] = 'field_data_field_entbook_author';
  $handler->display->display_options['fields']['field_entbook_author']['field'] = 'field_entbook_author';
  /* Filter criterion: Book: book type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_book';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'book' => 'book',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'staff/all-books';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Book Entities';
  $handler->display->display_options['menu']['name'] = 'menu-staff-menu';

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'field_entbook_title' => 'field_entbook_title',
    'field_entbook_author' => 'field_entbook_author',
    'id' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $translatables['book_entities'] = array(
    t('Master'),
    t('Book Entities'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Book ID'),
    t('.'),
    t('Title'),
    t('Author'),
    t('Page'),
    t('Entity Reference'),
  );
  $export['book_entities'] = $view;

  return $export;
}
