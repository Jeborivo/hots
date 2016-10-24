<?php
/**
 * @file
 * sve.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function sve_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}

/**
 * Implements hook_views_api().
 */
function sve_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function sve_node_info() {
  $items = array(
    'article' => array(
      'name' => t('Article'),
      'base' => 'node_content',
      'description' => t('Use <em>articles</em> for time-sensitive content like news, press releases or blog posts.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'build' => array(
      'name' => t('Build'),
      'base' => 'node_content',
      'description' => t('Most used builds'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'hero' => array(
      'name' => t('Hero'),
      'base' => 'node_content',
      'description' => t('Heroes'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'heroic' => array(
      'name' => t('Heroic'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'hots' => array(
      'name' => t('HOTS'),
      'base' => 'node_content',
      'description' => t('hots'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'map' => array(
      'name' => t('Map'),
      'base' => 'node_content',
      'description' => t('Maps'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'primary' => array(
      'name' => t('Primary'),
      'base' => 'node_content',
      'description' => '',
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
    'talent' => array(
      'name' => t('Talent'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'trait' => array(
      'name' => t('Trait'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'universe' => array(
      'name' => t('Universe'),
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
