<?php
/**
 * @file
 * maps_i_sve.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function maps_i_sve_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'build';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'build';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: hero build (field_hero_build) */
  $handler->display->display_options['arguments']['field_hero_build_target_id']['id'] = 'field_hero_build_target_id';
  $handler->display->display_options['arguments']['field_hero_build_target_id']['table'] = 'field_data_field_hero_build';
  $handler->display->display_options['arguments']['field_hero_build_target_id']['field'] = 'field_hero_build_target_id';
  $handler->display->display_options['arguments']['field_hero_build_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_hero_build_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_hero_build_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_hero_build_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_hero_build_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['build'] = $view;

  $view = new view();
  $view->name = 'maps';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'maps';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'slider';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'map' => 'map',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['maps'] = $view;

  $view = new view();
  $view->name = 'primary_abilities';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Primary abilities';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['css_class'] = 'primary';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: hero primary (field_hero_primary) */
  $handler->display->display_options['arguments']['field_hero_primary_target_id']['id'] = 'field_hero_primary_target_id';
  $handler->display->display_options['arguments']['field_hero_primary_target_id']['table'] = 'field_data_field_hero_primary';
  $handler->display->display_options['arguments']['field_hero_primary_target_id']['field'] = 'field_hero_primary_target_id';
  $handler->display->display_options['arguments']['field_hero_primary_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_hero_primary_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_hero_primary_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_hero_primary_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_hero_primary_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Primary abilities';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Heroic abilities';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: hero heroic (field_hero_heroic) */
  $handler->display->display_options['arguments']['field_hero_heroic_target_id']['id'] = 'field_hero_heroic_target_id';
  $handler->display->display_options['arguments']['field_hero_heroic_target_id']['table'] = 'field_data_field_hero_heroic';
  $handler->display->display_options['arguments']['field_hero_heroic_target_id']['field'] = 'field_hero_heroic_target_id';
  $handler->display->display_options['arguments']['field_hero_heroic_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_hero_heroic_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_hero_heroic_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_hero_heroic_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_hero_heroic_target_id']['summary_options']['items_per_page'] = '25';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Hero trait';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: hero trait (field_hero_trait) */
  $handler->display->display_options['arguments']['field_hero_trait_target_id']['id'] = 'field_hero_trait_target_id';
  $handler->display->display_options['arguments']['field_hero_trait_target_id']['table'] = 'field_data_field_hero_trait';
  $handler->display->display_options['arguments']['field_hero_trait_target_id']['field'] = 'field_hero_trait_target_id';
  $handler->display->display_options['arguments']['field_hero_trait_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_hero_trait_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_hero_trait_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_hero_trait_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_hero_trait_target_id']['summary_options']['items_per_page'] = '25';
  $export['primary_abilities'] = $view;

  $view = new view();
  $view->name = 'universe';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Universe';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Universe';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Universe (field_universe) */
  $handler->display->display_options['arguments']['field_universe_target_id']['id'] = 'field_universe_target_id';
  $handler->display->display_options['arguments']['field_universe_target_id']['table'] = 'field_data_field_universe';
  $handler->display->display_options['arguments']['field_universe_target_id']['field'] = 'field_universe_target_id';
  $handler->display->display_options['arguments']['field_universe_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_universe_target_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_universe_target_id']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['field_universe_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_universe_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_universe_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'hero' => 'hero',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'universe';
  $export['universe'] = $view;

  return $export;
}
