<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function jumpjet_article_engine_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function jumpjet_article_engine_node_info() {
  $items = array(
    'jumpjet_article' => array(
      'name' => t('Article'),
      'module' => 'features',
      'description' => t('Write an article for publication on the site.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Article'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function jumpjet_article_engine_views_api() {
  return array(
    'api' => '3.0-alpha1',
  );
}
