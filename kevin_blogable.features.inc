<?php
/**
 * @file
 * kevin_blogable.features.inc
 */

/**
 * Implements hook_views_api().
 */
function kevin_blogable_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function kevin_blogable_node_info() {
  $items = array(
    'blogable' => array(
      'name' => t('Blogable'),
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
