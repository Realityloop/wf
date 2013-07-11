<?php
/**
 * @file
 * wf_issues.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function wf_issues_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function wf_issues_node_info() {
  $items = array(
    'file_page' => array(
      'name' => t('File Page'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'media_page' => array(
      'name' => t('Media Page'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
