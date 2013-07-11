<?php
/**
 * @file
 * wf_issues.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function wf_issues_filter_default_formats() {
  $formats = array();

  // Exported format: WYSIWYG File.
  $formats['wysiwyg_file'] = array(
    'format' => 'wysiwyg_file',
    'name' => 'WYSIWYG File',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'wysiwyg_fields' => array(
        'weight' => 50,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  // Exported format: WYSIWYG Media.
  $formats['wysiwyg_media'] = array(
    'format' => 'wysiwyg_media',
    'name' => 'WYSIWYG Media',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'wysiwyg_fields' => array(
        'weight' => 50,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
