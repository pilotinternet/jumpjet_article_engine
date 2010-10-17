<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function jumpjet_article_engine_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'jumpjet_section_articles';
  $context->description = 'Active when the user is in the Articles section';
  $context->tag = 'Section';
  $context->conditions = array(
    'menu' => array(
      'values' => array(
        'articles' => 'articles',
      ),
    ),
    'node' => array(
      'values' => array(
        'jumpjet_article' => 'jumpjet_article',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
    'path' => array(
      'values' => array(
        'articles' => 'articles',
        'articles/*' => 'articles/*',
      ),
    ),
    'views' => array(
      'values' => array(
        'jumpjet_articles:jumpjet_article_view_page1' => 'jumpjet_articles:jumpjet_article_view_page1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-3714c96e11afd1de17f797036a70bddd' => array(
          'module' => 'views',
          'delta' => '3714c96e11afd1de17f797036a70bddd',
          'region' => 'sidebar_last',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Active when the user is in the Articles section');
  t('Section');

  $export['jumpjet_section_articles'] = $context;
  return $export;
}
