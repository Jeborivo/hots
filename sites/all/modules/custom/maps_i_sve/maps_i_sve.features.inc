<?php
/**
 * @file
 * maps_i_sve.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function maps_i_sve_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}

/**
 * Implements hook_views_api().
 */
function maps_i_sve_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function maps_i_sve_image_default_styles() {
  $styles = array();

  // Exported image style: proba.
  $styles['proba'] = array(
    'label' => 'proba',
    'effects' => array(
      7 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 300,
          'height' => 300,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function maps_i_sve_node_info() {
  $items = array(
    'heroic' => array(
      'name' => t('Heroic'),
      'base' => 'node_content',
      'description' => '',
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
    'primary' => array(
      'name' => t('Primary'),
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
  );
  drupal_alter('node_info', $items);
  return $items;
}
