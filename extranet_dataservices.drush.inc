<?php

/**
 * @file extranet_dataservices.drush.inc
 *  Provides drush integration for extranet dataservices.
 *  TODO: These are not finished.
 */

/**
 *
 */
function extranet_dataservices_drush_help($section) {
  switch ($section) {
    case 'meta:dog:title':
      return dt('Drupal on Git (Dog) commands');
    case 'meta:dog:summary':
      return dt('Build, develop, manage, and deploy an entire Drupal site using the dog methodology.');
  }
}

/**
 *
 */
function extranet_dataservices_drush_command() {
  $items = array();

  $items['ziv-sites-list'] = array(
    'description' => 'List all sites.',
    'bootstrap' => DRUSH_BOOTSTRAP_FULL,
    'options' => array(
      'json' => 'A flag to specify whether to return json.',
    ),
  );
  $items['ziv-sites-info'] = array(
    'description' => 'List data about all files.',
    'bootstrap' => DRUSH_BOOTSTRAP_FULL,
  );
  $items['ziv-site-info'] = array(
    'description' => 'List the data specific to a site.',
    'bootstrap' => DRUSH_BOOTSTRAP_FULL,
    'arguments' => array(
      'site' => 'The machine name for the site that you wish to retrieve information about.',
    ),
  );
  return $items;
}

/**
 *
 */
function drush_extranet_dataservices_ziv_sites_list() {
  $nodes = extranet_dataservices_get_all_site_nodes();
  $json = drush_get_option('json', FALSE);
  if (!$json) {
    foreach ($nodes as $node) {
      drush_print($node->title);
    }
  }
  else {
    $return = array();
    foreach ($nodes as $node) {
      $return[] = $node->title;
    }
    drush_print(json_encode($return));
  }
}

/**
 *
 */
function drush_extranet_dataservices_ziv_site_info($sitename) {
  $data = extranet_dataservices_get_site_info($sitename);
  if (!drush_get_option('json', FALSE)) {
    drush_print_r($data);  
  }
  else {
    extranet_dataservices_objectify($data);
    drush_print(json_encode($data));
  }
}

