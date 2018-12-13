<?php

/**
 * @file
 * commerce_feeds_example.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function commerce_feeds_example_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'product_importer';
  $feeds_importer->config = array(
    'name' => 'Product Importer',
    'description' => 'Grab books from CSV and turn them into products',
    'fetcher' => array(
      'plugin_key' => 'FeedsSpider',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
        'request_timeout' => NULL,
        'auto_scheme' => 'http',
        'accept_invalid_cert' => FALSE,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsXPathParserHTML',
      'config' => array(
        'sources' => array(),
        'rawXML' => array(),
        'context' => '',
        'exp' => array(
          'errors' => FALSE,
          'tidy' => FALSE,
          'debug' => array(),
          'tidy_encoding' => 'UTF8',
        ),
        'allow_override' => TRUE,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsCommerceProductProcessor',
      'config' => array(
        'product_type' => 'product',
        'author' => '1',
        'mappings' => array(
          0 => array(
            'source' => 'SKU',
            'target' => 'sku',
            'unique' => 0,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'Title',
            'target' => 'title',
            'unique' => FALSE,
            'language' => 'und',
          ),
          2 => array(
            'source' => 'Image',
            'target' => 'field_image',
            'unique' => FALSE,
            'language' => 'und',
          ),
          3 => array(
            'source' => 'Price',
            'target' => 'commerce_price:amount',
            'unique' => FALSE,
            'language' => 'und',
          ),
          4 => array(
            'source' => 'xpathparser:0',
            'target' => 'title',
            'unique' => FALSE,
            'language' => 'und',
          ),
          5 => array(
            'source' => 'xpathparser:1',
            'target' => 'sku',
            'unique' => 0,
            'language' => 'und',
          ),
          6 => array(
            'source' => 'xpathparser:2',
            'target' => 'commerce_price:amount',
            'unique' => FALSE,
            'language' => 'und',
          ),
          7 => array(
            'source' => 'xpathparser:3',
            'target' => 'field_availability',
            'unique' => FALSE,
            'language' => 'und',
          ),
          8 => array(
            'source' => 'xpathparser:4',
            'target' => 'field_images:uri',
            'file_exists' => '5',
            'language' => 'und',
          ),
          9 => array(
            'source' => 'xpathparser:5',
            'target' => 'field_images:title',
            'unique' => FALSE,
            'language' => 'und',
          ),
          10 => array(
            'source' => 'xpathparser:6',
            'target' => 'field_byyy',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'filtered_html',
        'tax_rate' => TRUE,
        'insert_new' => '1',
        'update_non_existent' => 'skip',
        'skip_hash_check' => 0,
        'bundle' => 'product',
        'language' => 'ru',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['product_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'product_reference_importer';
  $feeds_importer->config = array(
    'name' => 'Product Reference Importer',
    'description' => 'Pull the CSV feed in and make it into nodes',
    'fetcher' => array(
      'plugin_key' => 'FeedsSpider',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
        'request_timeout' => NULL,
        'auto_scheme' => 'http',
        'accept_invalid_cert' => FALSE,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsXPathParserHTML',
      'config' => array(
        'sources' => array(),
        'rawXML' => array(),
        'context' => '',
        'exp' => array(
          'errors' => FALSE,
          'tidy' => FALSE,
          'debug' => array(),
          'tidy_encoding' => 'UTF8',
        ),
        'allow_override' => TRUE,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'mappings' => array(
          0 => array(
            'source' => 'SKU',
            'target' => 'guid',
            'unique' => 0,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'Title',
            'target' => 'title',
            'unique' => 0,
            'language' => 'und',
          ),
          2 => array(
            'source' => 'SKU',
            'target' => 'field_product:sku',
            'unique' => FALSE,
            'language' => 'und',
          ),
          3 => array(
            'source' => 'Description',
            'target' => 'body',
            'unique' => FALSE,
            'language' => 'und',
          ),
          4 => array(
            'source' => 'xpathparser:0',
            'target' => 'title',
            'unique' => FALSE,
            'language' => 'und',
          ),
          5 => array(
            'source' => 'xpathparser:1',
            'target' => 'field_product:sku',
            'unique' => FALSE,
            'language' => 'und',
          ),
          6 => array(
            'source' => 'xpathparser:2',
            'target' => 'guid',
            'unique' => 1,
          ),
          7 => array(
            'source' => 'xpathparser:3',
            'target' => 'field_description',
            'unique' => FALSE,
            'language' => 'und',
          ),
          8 => array(
            'source' => 'xpathparser:4',
            'target' => 'field_car_brand',
            'unique' => FALSE,
            'language' => 'und',
          ),
          9 => array(
            'source' => 'xpathparser:5',
            'target' => 'field_spare_part',
            'unique' => FALSE,
            'language' => 'und',
          ),
        ),
        'update_existing' => '1',
        'input_format' => 'full_html',
        'authorize' => 1,
        'insert_new' => '1',
        'update_non_existent' => 'skip',
        'skip_hash_check' => 0,
        'bundle' => 'product_display',
        'language' => 'ru',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['product_reference_importer'] = $feeds_importer;

  return $export;
}
