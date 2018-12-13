<?php

/**
 * @file
 * commerce_kickstart_lite_product.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function commerce_kickstart_lite_product_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function commerce_kickstart_lite_product_image_default_styles() {
  $styles = array();

  // Exported image style: product_full.
  $styles['product_full'] = array(
    'label' => 'product_full',
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 550,
          'height' => 400,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: product_medium.
  $styles['product_medium'] = array(
    'label' => 'product_medium',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 350,
          'height' => 250,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: product_thumbnail.
  $styles['product_thumbnail'] = array(
    'label' => 'product_thumbnail',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 80,
          'height' => 60,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
