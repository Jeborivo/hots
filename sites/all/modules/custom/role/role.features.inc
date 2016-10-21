<?php
/**
 * @file
 * role.features.inc
 */

/**
 * Implements hook_views_api().
 */
function role_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function role_node_info() {
  $items = array(
    'hero' => array(
      'name' => t('Hero'),
      'base' => 'node_content',
      'description' => t('Heroes'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'role' => array(
      'name' => t('Role'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
