<?php
/**
 * @file
 * extranet_dataservices.features.field_group.inc
 */

/**
 * Implementation of hook_field_group_default_field_groups().
 */
function extranet_dataservices_field_group_default_field_groups() {
  $field_groups = array();

  // Exported field_group: 'node-server-default-group_server_general'
  $field_groups['node-server-default-group_server_general'] = array(
    'group_name' => 'group_server_general',
    'entity_type' => 'node',
    'bundle' => 'server',
    'mode' => 'default',
    'parent_name' => '',
    'identifier' => '',
    'label' => 'General',
    'weight' => '0',
    'children' => array(
      0 => 'field_server_hostname',
      1 => 'field_server_ip',
      2 => 'field_server_managed',
      3 => 'field_server_ubuntu_version',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );

  // Exported field_group: 'node-server-default-group_server_mysql'
  $field_groups['node-server-default-group_server_mysql'] = array(
    'group_name' => 'group_server_mysql',
    'entity_type' => 'node',
    'bundle' => 'server',
    'mode' => 'default',
    'parent_name' => '',
    'identifier' => '',
    'label' => 'MySQL',
    'weight' => '4',
    'children' => array(
      0 => 'field_server_mysql_pass',
      1 => 'field_server_mysql_user',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );

  // Exported field_group: 'node-server-default-group_server_other'
  $field_groups['node-server-default-group_server_other'] = array(
    'group_name' => 'group_server_other',
    'entity_type' => 'node',
    'bundle' => 'server',
    'mode' => 'default',
    'parent_name' => '',
    'identifier' => '',
    'label' => 'Other Users',
    'weight' => '3',
    'children' => array(
      0 => 'field_server_other_user',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );

  // Exported field_group: 'node-server-default-group_server_root'
  $field_groups['node-server-default-group_server_root'] = array(
    'group_name' => 'group_server_root',
    'entity_type' => 'node',
    'bundle' => 'server',
    'mode' => 'default',
    'parent_name' => '',
    'identifier' => '',
    'label' => 'Root',
    'weight' => '1',
    'children' => array(
      0 => 'field_server_root',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );

  // Exported field_group: 'node-server-default-group_server_webadmin'
  $field_groups['node-server-default-group_server_webadmin'] = array(
    'group_name' => 'group_server_webadmin',
    'entity_type' => 'node',
    'bundle' => 'server',
    'mode' => 'default',
    'parent_name' => '',
    'identifier' => '',
    'label' => 'Webadmin',
    'weight' => '2',
    'children' => array(
      0 => 'field_server_webadmin_pass',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );

  // Exported field_group: 'node-server-form-group_server_general'
  $field_groups['node-server-form-group_server_general'] = array(
    'group_name' => 'group_server_general',
    'entity_type' => 'node',
    'bundle' => 'server',
    'mode' => 'form',
    'parent_name' => '',
    'identifier' => '',
    'label' => 'General',
    'weight' => '2',
    'children' => array(
      0 => 'field_server_hostname',
      1 => 'field_server_ip',
      2 => 'field_server_managed',
      3 => 'field_server_ubuntu_version',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );

  // Exported field_group: 'node-server-form-group_server_mysql'
  $field_groups['node-server-form-group_server_mysql'] = array(
    'group_name' => 'group_server_mysql',
    'entity_type' => 'node',
    'bundle' => 'server',
    'mode' => 'form',
    'parent_name' => '',
    'identifier' => '',
    'label' => 'MySQL',
    'weight' => '6',
    'children' => array(
      0 => 'field_server_mysql_pass',
      1 => 'field_server_mysql_user',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );

  // Exported field_group: 'node-server-form-group_server_other'
  $field_groups['node-server-form-group_server_other'] = array(
    'group_name' => 'group_server_other',
    'entity_type' => 'node',
    'bundle' => 'server',
    'mode' => 'form',
    'parent_name' => '',
    'identifier' => '',
    'label' => 'Other Users',
    'weight' => '5',
    'children' => array(
      0 => 'field_server_other_user',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );

  // Exported field_group: 'node-server-form-group_server_root'
  $field_groups['node-server-form-group_server_root'] = array(
    'group_name' => 'group_server_root',
    'entity_type' => 'node',
    'bundle' => 'server',
    'mode' => 'form',
    'parent_name' => '',
    'identifier' => '',
    'label' => 'Root',
    'weight' => '3',
    'children' => array(
      0 => 'field_server_root',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );

  // Exported field_group: 'node-server-form-group_server_webadmin'
  $field_groups['node-server-form-group_server_webadmin'] = array(
    'group_name' => 'group_server_webadmin',
    'entity_type' => 'node',
    'bundle' => 'server',
    'mode' => 'form',
    'parent_name' => '',
    'identifier' => '',
    'label' => 'Webadmin',
    'weight' => '4',
    'children' => array(
      0 => 'field_server_webadmin_pass',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );

  // Exported field_group: 'node-site-form-group_site_dev_site'
  $field_groups['node-site-form-group_site_dev_site'] = array(
    'group_name' => 'group_site_dev_site',
    'entity_type' => 'node',
    'bundle' => 'site',
    'mode' => 'form',
    'parent_name' => '',
    'identifier' => '',
    'label' => 'Dev Site',
    'weight' => '12',
    'children' => array(
      0 => 'field_documentroot',
      1 => 'field_server',
      2 => 'field_dev_ssh',
      3 => 'field_dev_notes',
      4 => 'field_dev_url',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );

  // Exported field_group: 'node-site-form-group_site_production_site'
  $field_groups['node-site-form-group_site_production_site'] = array(
    'group_name' => 'group_site_production_site',
    'entity_type' => 'node',
    'bundle' => 'site',
    'mode' => 'form',
    'parent_name' => '',
    'identifier' => '',
    'label' => 'Production Site',
    'weight' => '13',
    'children' => array(
      0 => 'field_production_server',
      1 => 'field_production_root',
      2 => 'field_prod_ssh',
      3 => 'field_prod_note',
      4 => 'field_production_url',
      5 => 'field_database_server',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );

  return $field_groups;
}
