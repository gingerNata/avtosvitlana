<?php

/**
 * @file
 * commerce_kickstart_lite_product.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function commerce_kickstart_lite_product_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_product_display';
  $strongarm->value = '2';
  $export['comment_product_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_product_display';
  $strongarm->value = 0;
  $export['comment_subject_field_product_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_commerce_product__product';
  $strongarm->value = array(
    'view_modes' => array(
      'line_item' => array(
        'custom_settings' => TRUE,
      ),
      'node_teaser' => array(
        'custom_settings' => TRUE,
      ),
      'node_product_list' => array(
        'custom_settings' => TRUE,
      ),
      'product_in_cart' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'commerce_line_item_display' => array(
        'custom_settings' => FALSE,
      ),
      'node_full' => array(
        'custom_settings' => FALSE,
      ),
      'node_rss' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'commerce_line_item_token' => array(
        'custom_settings' => FALSE,
      ),
      'node_token' => array(
        'custom_settings' => FALSE,
      ),
      'add_to_cart_confirmation_view' => array(
        'custom_settings' => TRUE,
      ),
      'commerce_discount_offer_token' => array(
        'custom_settings' => FALSE,
      ),
      'node_revision' => array(
        'custom_settings' => FALSE,
      ),
      'node_products_main_page' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'sku' => array(
          'weight' => '0',
        ),
        'title' => array(
          'weight' => '-5',
        ),
        'status' => array(
          'weight' => '6',
        ),
      ),
      'display' => array(
        'sku' => array(
          'default' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'node_product_list' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'add_to_cart_confirmation_view' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          'node_teaser' => array(
            'weight' => '2',
            'visible' => TRUE,
          ),
          'product_in_cart' => array(
            'weight' => '2',
            'visible' => TRUE,
          ),
          'node_products_main_page' => array(
            'weight' => '5',
            'visible' => FALSE,
          ),
        ),
        'title' => array(
          'default' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          'node_product_list' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          'node_products_main_page' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
        ),
        'status' => array(
          'default' => array(
            'weight' => '4',
            'visible' => FALSE,
          ),
          'node_product_list' => array(
            'weight' => '5',
            'visible' => FALSE,
          ),
          'add_to_cart_confirmation_view' => array(
            'weight' => '2',
            'visible' => FALSE,
          ),
          'node_teaser' => array(
            'weight' => '3',
            'visible' => TRUE,
          ),
          'product_in_cart' => array(
            'weight' => '3',
            'visible' => FALSE,
          ),
          'node_products_main_page' => array(
            'weight' => '4',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_commerce_product__product'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__product_display';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'product_list' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'products_main_page' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'path' => array(
          'weight' => '12',
        ),
        'metatags' => array(
          'weight' => '13',
        ),
        'xmlsitemap' => array(
          'weight' => '0',
        ),
      ),
      'display' => array(
        'product:sku' => array(
          'default' => array(
            'weight' => '4',
            'visible' => TRUE,
          ),
          'product_list' => array(
            'weight' => '16',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '7',
            'visible' => FALSE,
          ),
          'products_main_page' => array(
            'weight' => '6',
            'visible' => FALSE,
          ),
        ),
        'product:title' => array(
          'default' => array(
            'weight' => '30',
            'visible' => FALSE,
          ),
          'product_list' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '8',
            'visible' => FALSE,
          ),
          'products_main_page' => array(
            'weight' => '17',
            'visible' => FALSE,
          ),
        ),
        'product:status' => array(
          'default' => array(
            'weight' => '27',
            'visible' => FALSE,
          ),
          'product_list' => array(
            'weight' => '17',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '16',
            'visible' => FALSE,
          ),
          'products_main_page' => array(
            'weight' => '14',
            'visible' => FALSE,
          ),
        ),
        'product:commerce_price' => array(
          'default' => array(
            'weight' => '2',
            'visible' => TRUE,
          ),
          'product_list' => array(
            'weight' => '4',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '4',
            'visible' => TRUE,
          ),
          'products_main_page' => array(
            'weight' => '4',
            'visible' => TRUE,
          ),
        ),
        'product:field_images' => array(
          'default' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'product_list' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'products_main_page' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
        ),
        'product:title_field' => array(
          'product_list' => array(
            'weight' => '15',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '29',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '6',
            'visible' => FALSE,
          ),
          'products_main_page' => array(
            'weight' => '16',
            'visible' => FALSE,
          ),
        ),
        'product:field_availability' => array(
          'default' => array(
            'weight' => '3',
            'visible' => TRUE,
          ),
          'product_list' => array(
            'weight' => '3',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '3',
            'visible' => TRUE,
          ),
          'products_main_page' => array(
            'weight' => '3',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__product_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_product_display';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_product_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_product_display';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_product_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_product_display';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_product_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_product_display';
  $strongarm->value = 0;
  $export['node_submitted_product_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_pattern';
  $strongarm->value = '[node:content-type:machine-name]/[node:title]';
  $export['pathauto_node_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_hyphen';
  $strongarm->value = '1';
  $export['pathauto_punctuation_hyphen'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_pattern';
  $strongarm->value = '[term:vocabulary]/[term:name]';
  $export['pathauto_taxonomy_term_pattern'] = $strongarm;

  return $export;
}
