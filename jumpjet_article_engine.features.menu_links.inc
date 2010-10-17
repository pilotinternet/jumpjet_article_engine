<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function jumpjet_article_engine_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: primary-links:articles
  $menu_links['primary-links:articles'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'articles',
    'router_path' => 'articles',
    'link_title' => 'Articles',
    'options' => array(
      'attributes' => array(
        'title' => 'Read recent articles',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '5',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Articles');


  return $menu_links;
}
