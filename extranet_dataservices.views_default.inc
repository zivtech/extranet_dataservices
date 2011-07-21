<?php
/**
 * @file
 * extranet_dataservices.views_default.inc
 */

/**
 * Implementation of hook_views_default_views().
 */
function extranet_dataservices_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'servers';
  $view->description = 'A list of zivtech servers';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = 'servers';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Servers';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'entity_id' => 'entity_id',
    'entity_id_1' => 'entity_id_1',
    'entity_id_2' => 'entity_id_2',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'entity_id' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'entity_id_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'entity_id_2' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['content'] = '<a href="/node/add/server">+ Add new server</a>';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Managed By */
  $handler->display->display_options['fields']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['fields']['entity_id']['table'] = 'field_data_field_server_managed';
  $handler->display->display_options['fields']['entity_id']['field'] = 'field_server_managed';
  $handler->display->display_options['fields']['entity_id']['label'] = 'Zivtech Managed?';
  $handler->display->display_options['fields']['entity_id']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['entity_id']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['entity_id']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['entity_id']['alter']['external'] = 0;
  $handler->display->display_options['fields']['entity_id']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['entity_id']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['entity_id']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['entity_id']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['entity_id']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['entity_id']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['entity_id']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['entity_id']['alter']['html'] = 0;
  $handler->display->display_options['fields']['entity_id']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['entity_id']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['entity_id']['hide_empty'] = 0;
  $handler->display->display_options['fields']['entity_id']['empty_zero'] = 0;
  $handler->display->display_options['fields']['entity_id']['type'] = 'editable';
  $handler->display->display_options['fields']['entity_id']['settings'] = array(
    'click_to_edit' => 1,
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  $handler->display->display_options['fields']['entity_id']['field_api_classes'] = 0;
  /* Field: Content: Root Password */
  $handler->display->display_options['fields']['entity_id_1']['id'] = 'entity_id_1';
  $handler->display->display_options['fields']['entity_id_1']['table'] = 'field_data_field_server_root';
  $handler->display->display_options['fields']['entity_id_1']['field'] = 'field_server_root';
  $handler->display->display_options['fields']['entity_id_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['entity_id_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['entity_id_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['entity_id_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['entity_id_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['entity_id_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['entity_id_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['entity_id_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['entity_id_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['entity_id_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['entity_id_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['entity_id_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['entity_id_1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['entity_id_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['entity_id_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['entity_id_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['entity_id_1']['type'] = 'editable';
  $handler->display->display_options['fields']['entity_id_1']['settings'] = array(
    'click_to_edit' => 1,
    'empty_text' => '',
    'fallback_format' => 'text_default',
  );
  $handler->display->display_options['fields']['entity_id_1']['field_api_classes'] = 0;
  /* Field: Content: Webadmin Password */
  $handler->display->display_options['fields']['entity_id_2']['id'] = 'entity_id_2';
  $handler->display->display_options['fields']['entity_id_2']['table'] = 'field_data_field_server_webadmin_pass';
  $handler->display->display_options['fields']['entity_id_2']['field'] = 'field_server_webadmin_pass';
  $handler->display->display_options['fields']['entity_id_2']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['entity_id_2']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['entity_id_2']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['entity_id_2']['alter']['external'] = 0;
  $handler->display->display_options['fields']['entity_id_2']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['entity_id_2']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['entity_id_2']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['entity_id_2']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['entity_id_2']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['entity_id_2']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['entity_id_2']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['entity_id_2']['alter']['html'] = 0;
  $handler->display->display_options['fields']['entity_id_2']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['entity_id_2']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['entity_id_2']['hide_empty'] = 0;
  $handler->display->display_options['fields']['entity_id_2']['empty_zero'] = 0;
  $handler->display->display_options['fields']['entity_id_2']['type'] = 'editable';
  $handler->display->display_options['fields']['entity_id_2']['settings'] = array(
    'click_to_edit' => 1,
    'empty_text' => '',
    'fallback_format' => 'text_default',
  );
  $handler->display->display_options['fields']['entity_id_2']['field_api_classes'] = 0;
  /* Field: Content: Ubuntu Version */
  $handler->display->display_options['fields']['field_server_ubuntu_version']['id'] = 'field_server_ubuntu_version';
  $handler->display->display_options['fields']['field_server_ubuntu_version']['table'] = 'field_data_field_server_ubuntu_version';
  $handler->display->display_options['fields']['field_server_ubuntu_version']['field'] = 'field_server_ubuntu_version';
  $handler->display->display_options['fields']['field_server_ubuntu_version']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_server_ubuntu_version']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_server_ubuntu_version']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_server_ubuntu_version']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_server_ubuntu_version']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_server_ubuntu_version']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_server_ubuntu_version']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_server_ubuntu_version']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_server_ubuntu_version']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_server_ubuntu_version']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_server_ubuntu_version']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_server_ubuntu_version']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_server_ubuntu_version']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_server_ubuntu_version']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_server_ubuntu_version']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_server_ubuntu_version']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_server_ubuntu_version']['type'] = 'editable';
  $handler->display->display_options['fields']['field_server_ubuntu_version']['settings'] = array(
    'click_to_edit' => 1,
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  $handler->display->display_options['fields']['field_server_ubuntu_version']['field_api_classes'] = 0;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'server' => 'server',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'entity_id' => 'entity_id',
    'entity_id_1' => 'entity_id_1',
    'entity_id_2' => 'entity_id_2',
    'field_server_ubuntu_version' => 'field_server_ubuntu_version',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'entity_id' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'entity_id_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'entity_id_2' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_server_ubuntu_version' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'servers';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Servers';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'primary-links';
  $translatables['servers'] = array(
    t('Defaults'),
    t('Servers'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<a href="/node/add/server">+ Add new server</a>'),
    t('Name'),
    t('Zivtech Managed?'),
    t('Root Password'),
    t('Webadmin Password'),
    t('Ubuntu Version'),
    t('Page'),
  );
  $export['servers'] = $view;

  $view = new view;
  $view->name = 'sites';
  $view->description = 'A list of zivtech built and maintained sites ';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = 'sites';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Sites';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'entity_id_1' => 'entity_id_1',
    'entity_id' => 'entity_id',
    'entity_id_2' => 'entity_id_2',
    'entity_id_3' => 'entity_id_3',
    'entity_id_4' => 'entity_id_4',
    'entity_id_5' => 'entity_id_5',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'entity_id_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'entity_id' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'entity_id_2' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'entity_id_3' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'entity_id_4' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'entity_id_5' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['content'] = '<a href="/node/add/project-info">+ Add Site</a>';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Drupal Support */
  $handler->display->display_options['fields']['entity_id_1']['id'] = 'entity_id_1';
  $handler->display->display_options['fields']['entity_id_1']['table'] = 'field_data_field_support';
  $handler->display->display_options['fields']['entity_id_1']['field'] = 'field_support';
  $handler->display->display_options['fields']['entity_id_1']['label'] = 'Support';
  $handler->display->display_options['fields']['entity_id_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['entity_id_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['entity_id_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['entity_id_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['entity_id_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['entity_id_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['entity_id_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['entity_id_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['entity_id_1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['entity_id_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['entity_id_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['entity_id_1']['empty_zero'] = 0;
  /* Field: Content: Hosting Services */
  $handler->display->display_options['fields']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['fields']['entity_id']['table'] = 'field_data_field_hosting';
  $handler->display->display_options['fields']['entity_id']['field'] = 'field_hosting';
  $handler->display->display_options['fields']['entity_id']['label'] = 'Hosting';
  $handler->display->display_options['fields']['entity_id']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['entity_id']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['entity_id']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['entity_id']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['entity_id']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['entity_id']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['entity_id']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['entity_id']['alter']['html'] = 0;
  $handler->display->display_options['fields']['entity_id']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['entity_id']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['entity_id']['hide_empty'] = 0;
  $handler->display->display_options['fields']['entity_id']['empty_zero'] = 0;
  /* Field: Content: Drupal Version */
  $handler->display->display_options['fields']['entity_id_2']['id'] = 'entity_id_2';
  $handler->display->display_options['fields']['entity_id_2']['table'] = 'field_data_field_site_drupal_version';
  $handler->display->display_options['fields']['entity_id_2']['field'] = 'field_site_drupal_version';
  $handler->display->display_options['fields']['entity_id_2']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['entity_id_2']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['entity_id_2']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['entity_id_2']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['entity_id_2']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['entity_id_2']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['entity_id_2']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['entity_id_2']['alter']['html'] = 0;
  $handler->display->display_options['fields']['entity_id_2']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['entity_id_2']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['entity_id_2']['hide_empty'] = 0;
  $handler->display->display_options['fields']['entity_id_2']['empty_zero'] = 0;
  /* Field: Content: Version Control System */
  $handler->display->display_options['fields']['entity_id_3']['id'] = 'entity_id_3';
  $handler->display->display_options['fields']['entity_id_3']['table'] = 'field_data_field_site_vcs';
  $handler->display->display_options['fields']['entity_id_3']['field'] = 'field_site_vcs';
  $handler->display->display_options['fields']['entity_id_3']['label'] = 'Version Control';
  $handler->display->display_options['fields']['entity_id_3']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['entity_id_3']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['entity_id_3']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['entity_id_3']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['entity_id_3']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['entity_id_3']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['entity_id_3']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['entity_id_3']['alter']['html'] = 0;
  $handler->display->display_options['fields']['entity_id_3']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['entity_id_3']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['entity_id_3']['hide_empty'] = 0;
  $handler->display->display_options['fields']['entity_id_3']['empty_zero'] = 0;
  /* Field: Content: Server */
  $handler->display->display_options['fields']['entity_id_4']['id'] = 'entity_id_4';
  $handler->display->display_options['fields']['entity_id_4']['table'] = 'field_data_field_server';
  $handler->display->display_options['fields']['entity_id_4']['field'] = 'field_server';
  $handler->display->display_options['fields']['entity_id_4']['label'] = 'Dev Server';
  $handler->display->display_options['fields']['entity_id_4']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['entity_id_4']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['entity_id_4']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['entity_id_4']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['entity_id_4']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['entity_id_4']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['entity_id_4']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['entity_id_4']['alter']['html'] = 0;
  $handler->display->display_options['fields']['entity_id_4']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['entity_id_4']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['entity_id_4']['hide_empty'] = 0;
  $handler->display->display_options['fields']['entity_id_4']['empty_zero'] = 0;
  /* Field: Content: Server */
  $handler->display->display_options['fields']['entity_id_5']['id'] = 'entity_id_5';
  $handler->display->display_options['fields']['entity_id_5']['table'] = 'field_data_field_production_server';
  $handler->display->display_options['fields']['entity_id_5']['field'] = 'field_production_server';
  $handler->display->display_options['fields']['entity_id_5']['label'] = 'Production Server';
  $handler->display->display_options['fields']['entity_id_5']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['entity_id_5']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['entity_id_5']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['entity_id_5']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['entity_id_5']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['entity_id_5']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['entity_id_5']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['entity_id_5']['alter']['html'] = 0;
  $handler->display->display_options['fields']['entity_id_5']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['entity_id_5']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['entity_id_5']['hide_empty'] = 0;
  $handler->display->display_options['fields']['entity_id_5']['empty_zero'] = 0;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'project_info' => 'project_info',
  );
  /* Filter criterion: Content: Hosting Services (field_hosting) */
  $handler->display->display_options['filters']['field_hosting_value']['id'] = 'field_hosting_value';
  $handler->display->display_options['filters']['field_hosting_value']['table'] = 'field_data_field_hosting';
  $handler->display->display_options['filters']['field_hosting_value']['field'] = 'field_hosting_value';
  $handler->display->display_options['filters']['field_hosting_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_hosting_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_hosting_value']['expose']['operator_id'] = 'field_hosting_value_op';
  $handler->display->display_options['filters']['field_hosting_value']['expose']['label'] = 'Hosting Contract';
  $handler->display->display_options['filters']['field_hosting_value']['expose']['operator'] = 'field_hosting_value_op';
  $handler->display->display_options['filters']['field_hosting_value']['expose']['identifier'] = 'field_hosting_value';
  $handler->display->display_options['filters']['field_hosting_value']['expose']['required'] = FALSE;
  $handler->display->display_options['filters']['field_hosting_value']['expose']['multiple'] = FALSE;
  $handler->display->display_options['filters']['field_hosting_value']['expose']['reduce'] = 1;
  /* Filter criterion: Content: Drupal Support (field_support) */
  $handler->display->display_options['filters']['field_support_value']['id'] = 'field_support_value';
  $handler->display->display_options['filters']['field_support_value']['table'] = 'field_data_field_support';
  $handler->display->display_options['filters']['field_support_value']['field'] = 'field_support_value';
  $handler->display->display_options['filters']['field_support_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_support_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_support_value']['expose']['operator_id'] = 'field_support_value_op';
  $handler->display->display_options['filters']['field_support_value']['expose']['label'] = 'Drupal Support Contract';
  $handler->display->display_options['filters']['field_support_value']['expose']['operator'] = 'field_support_value_op';
  $handler->display->display_options['filters']['field_support_value']['expose']['identifier'] = 'field_support_value';
  $handler->display->display_options['filters']['field_support_value']['expose']['required'] = FALSE;
  $handler->display->display_options['filters']['field_support_value']['expose']['multiple'] = FALSE;
  $handler->display->display_options['filters']['field_support_value']['expose']['reduce'] = 1;
  /* Filter criterion: Content: Drupal Version (field_site_drupal_version) */
  $handler->display->display_options['filters']['field_site_drupal_version_value']['id'] = 'field_site_drupal_version_value';
  $handler->display->display_options['filters']['field_site_drupal_version_value']['table'] = 'field_data_field_site_drupal_version';
  $handler->display->display_options['filters']['field_site_drupal_version_value']['field'] = 'field_site_drupal_version_value';
  $handler->display->display_options['filters']['field_site_drupal_version_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_site_drupal_version_value']['expose']['operator_id'] = 'field_site_drupal_version_value_op';
  $handler->display->display_options['filters']['field_site_drupal_version_value']['expose']['label'] = 'Drupal Version';
  $handler->display->display_options['filters']['field_site_drupal_version_value']['expose']['operator'] = 'field_site_drupal_version_value_op';
  $handler->display->display_options['filters']['field_site_drupal_version_value']['expose']['identifier'] = 'field_site_drupal_version_value';
  $handler->display->display_options['filters']['field_site_drupal_version_value']['expose']['required'] = FALSE;
  $handler->display->display_options['filters']['field_site_drupal_version_value']['expose']['multiple'] = FALSE;
  $handler->display->display_options['filters']['field_site_drupal_version_value']['expose']['reduce'] = 0;
  /* Filter criterion: Content: Version Control System (field_site_vcs) */
  $handler->display->display_options['filters']['field_site_vcs_value']['id'] = 'field_site_vcs_value';
  $handler->display->display_options['filters']['field_site_vcs_value']['table'] = 'field_data_field_site_vcs';
  $handler->display->display_options['filters']['field_site_vcs_value']['field'] = 'field_site_vcs_value';
  $handler->display->display_options['filters']['field_site_vcs_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_site_vcs_value']['expose']['operator_id'] = 'field_site_vcs_value_op';
  $handler->display->display_options['filters']['field_site_vcs_value']['expose']['label'] = 'Version Control';
  $handler->display->display_options['filters']['field_site_vcs_value']['expose']['operator'] = 'field_site_vcs_value_op';
  $handler->display->display_options['filters']['field_site_vcs_value']['expose']['identifier'] = 'field_site_vcs_value';
  $handler->display->display_options['filters']['field_site_vcs_value']['expose']['required'] = FALSE;
  $handler->display->display_options['filters']['field_site_vcs_value']['expose']['multiple'] = FALSE;
  $handler->display->display_options['filters']['field_site_vcs_value']['expose']['reduce'] = 0;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'zivtech-sites';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Sites';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'primary-links';
  $translatables['sites'] = array(
    t('Defaults'),
    t('Sites'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<a href="/node/add/project-info">+ Add Site</a>'),
    t('Title'),
    t('Support'),
    t('Hosting'),
    t('Drupal Version'),
    t('Version Control'),
    t('Dev Server'),
    t('Production Server'),
    t('Hosting Contract'),
    t('Drupal Support Contract'),
    t('Page'),
  );
  $export['sites'] = $view;

  $view = new view;
  $view->name = 'sites_on_server';
  $view->description = '';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = 'sites on server';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Contextual filter: Content: Server (field_production_server) - nid */
  $handler->display->display_options['arguments']['field_production_server_nid']['id'] = 'field_production_server_nid';
  $handler->display->display_options['arguments']['field_production_server_nid']['table'] = 'field_data_field_production_server';
  $handler->display->display_options['arguments']['field_production_server_nid']['field'] = 'field_production_server_nid';
  $handler->display->display_options['arguments']['field_production_server_nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_production_server_nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_production_server_nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_production_server_nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_production_server_nid']['not'] = 0;
  /* Contextual filter: Content: Server (field_server) - nid */
  $handler->display->display_options['arguments']['field_server_nid']['id'] = 'field_server_nid';
  $handler->display->display_options['arguments']['field_server_nid']['table'] = 'field_data_field_server';
  $handler->display->display_options['arguments']['field_server_nid']['field'] = 'field_server_nid';
  $handler->display->display_options['arguments']['field_server_nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_server_nid']['exception']['title_enable'] = 1;
  $handler->display->display_options['arguments']['field_server_nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_server_nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_server_nid']['specify_validation'] = 1;
  $handler->display->display_options['arguments']['field_server_nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_server_nid']['not'] = 0;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'project_info' => 'project_info',
  );

  /* Display: Sites on this Server */
  $handler = $view->new_display('block', 'Sites on this Server', 'block_1');
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = 'No production sites on this server.';
  $handler->display->display_options['empty']['area']['format'] = '1';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Server (field_production_server) - nid */
  $handler->display->display_options['arguments']['field_production_server_nid']['id'] = 'field_production_server_nid';
  $handler->display->display_options['arguments']['field_production_server_nid']['table'] = 'field_data_field_production_server';
  $handler->display->display_options['arguments']['field_production_server_nid']['field'] = 'field_production_server_nid';
  $handler->display->display_options['arguments']['field_production_server_nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_production_server_nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_production_server_nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_production_server_nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_production_server_nid']['not'] = 0;

  /* Display: Attachment */
  $handler = $view->new_display('attachment', 'Attachment', 'attachment_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Server (field_server) - nid */
  $handler->display->display_options['arguments']['field_server_nid']['id'] = 'field_server_nid';
  $handler->display->display_options['arguments']['field_server_nid']['table'] = 'field_data_field_server';
  $handler->display->display_options['arguments']['field_server_nid']['field'] = 'field_server_nid';
  $handler->display->display_options['arguments']['field_server_nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_server_nid']['exception']['title_enable'] = 1;
  $handler->display->display_options['arguments']['field_server_nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_server_nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_server_nid']['specify_validation'] = 1;
  $handler->display->display_options['arguments']['field_server_nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_server_nid']['not'] = 0;
  $handler->display->display_options['displays'] = array(
    'block_1' => 'block_1',
    'default' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $handler->display->display_options['inherit_arguments'] = 0;
  $translatables['sites_on_server'] = array(
    t('Defaults'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('All'),
    t('Sites on this Server'),
    t('No production sites on this server.'),
    t('Attachment'),
  );
  $export['sites_on_server'] = $view;

  return $export;
}
