<?php
/**
 * @file
 * extranet_dataservices.features.inc
 */

/**
 * Implementation of hook_ctools_plugin_api().
 */
function extranet_dataservices_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_views_api().
 */
function extranet_dataservices_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => 3.0);
  }
}

/**
 * Implementation of hook_node_info().
 */
function extranet_dataservices_node_info() {
  $items = array(
    'server' => array(
      'name' => t('Server'),
      'base' => 'node_content',
      'description' => t('A server that that is accessed or maintained.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'site' => array(
      'name' => t('Site'),
      'base' => 'node_content',
      'description' => t('A site that is created or maintained and the associated access information.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
