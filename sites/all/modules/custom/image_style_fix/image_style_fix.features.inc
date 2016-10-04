<?php
/**
 * @file
 * image_style_fix.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function image_style_fix_image_default_styles() {
  $styles = array();

  // Exported image style: test.
  $styles['test'] = array(
    'label' => 'test',
    'effects' => array(
      2 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 300,
          'height' => 300,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
