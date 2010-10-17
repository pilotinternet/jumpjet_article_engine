<?php

/**
 * Implementation of hook_strongarm().
 */
function jumpjet_article_engine_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'better_formats_allowed_jumpjet_article';
  $strongarm->value = array();

  $export['better_formats_allowed_jumpjet_article'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_jumpjet_article';
  $strongarm->value = 0;

  $export['comment_anonymous_jumpjet_article'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_jumpjet_article';
  $strongarm->value = '3';

  $export['comment_controls_jumpjet_article'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_jumpjet_article';
  $strongarm->value = '4';

  $export['comment_default_mode_jumpjet_article'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_jumpjet_article';
  $strongarm->value = '2';

  $export['comment_default_order_jumpjet_article'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_jumpjet_article';
  $strongarm->value = '50';

  $export['comment_default_per_page_jumpjet_article'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_jumpjet_article';
  $strongarm->value = '1';

  $export['comment_form_location_jumpjet_article'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_jumpjet_article';
  $strongarm->value = '2';

  $export['comment_jumpjet_article'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_jumpjet_article';
  $strongarm->value = '0';

  $export['comment_preview_jumpjet_article'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_jumpjet_article';
  $strongarm->value = '0';

  $export['comment_subject_field_jumpjet_article'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commentformsettings_anonymoushomepage_jumpjet_article';
  $strongarm->value = '0';

  $export['commentformsettings_anonymoushomepage_jumpjet_article'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commentformsettings_anonymousmail_jumpjet_article';
  $strongarm->value = '0';

  $export['commentformsettings_anonymousmail_jumpjet_article'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commentformsettings_anonymousname_jumpjet_article';
  $strongarm->value = '0';

  $export['commentformsettings_anonymousname_jumpjet_article'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commentformsettings_author_jumpjet_article';
  $strongarm->value = '0';

  $export['commentformsettings_author_jumpjet_article'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commentformsettings_inputformat_jumpjet_article';
  $strongarm->value = '1';

  $export['commentformsettings_inputformat_jumpjet_article'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commentformsettings_preview_jumpjet_article';
  $strongarm->value = '0';

  $export['commentformsettings_preview_jumpjet_article'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commentformsettings_size_jumpjet_article';
  $strongarm->value = '15';

  $export['commentformsettings_size_jumpjet_article'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commentformsettings_submit_jumpjet_article';
  $strongarm->value = 'Save';

  $export['commentformsettings_submit_jumpjet_article'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commentformsettings_title_jumpjet_article';
  $strongarm->value = '1';

  $export['commentformsettings_title_jumpjet_article'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_jumpjet_article';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '-3',
    'revision_information' => '0',
    'author' => '1',
    'options' => '2',
    'comment_settings' => '4',
    'menu' => '3',
    'path' => '5',
  );

  $export['content_extra_weights_jumpjet_article'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_profile_use_jumpjet_article';
  $strongarm->value = 0;

  $export['content_profile_use_jumpjet_article'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'deck_cleanup_jumpjet_article';
  $strongarm->value = '1';

  $export['deck_cleanup_jumpjet_article'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'deck_jumpjet_article';
  $strongarm->value = 'field_jumpjet_article_teaser';

  $export['deck_jumpjet_article'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'enable_revisions_page_jumpjet_article';
  $strongarm->value = 1;

  $export['enable_revisions_page_jumpjet_article'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ffp_jumpjet_article_field_jumpjet_article_images';
  $strongarm->value = 0;

  $export['ffp_jumpjet_article_field_jumpjet_article_images'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ffp_jumpjet_article_field_jumpjet_article_main_image';
  $strongarm->value = 0;

  $export['ffp_jumpjet_article_field_jumpjet_article_main_image'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'form_build_id_jumpjet_article';
  $strongarm->value = 'form-f73b93f106e39332a2e39bed4afa5257';

  $export['form_build_id_jumpjet_article'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nd_display_settings_jumpjet_article';
  $strongarm->value = array(
    'sticky' => array(
      'fields' => array(
        'field_jumpjet_article_teaser' => array(
          'region' => 'middle',
          'weight' => '-48',
          'format' => 'default',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
        'field_jumpjet_article_main_image' => array(
          'region' => 'middle',
          'weight' => '-49',
          'format' => 'jumpjet_img_03col_4-3-landscape_linked',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
        'field_jumpjet_article_images' => array(
          'region' => 'disabled',
          'weight' => '-42',
          'format' => 'default',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
        'title' => array(
          'region' => 'header',
          'weight' => '-50',
          'format' => 'nd_title_h2_link',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
        'author' => array(
          'region' => 'disabled',
          'weight' => '-43',
          'format' => 'ds_author_nolink',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
        'links' => array(
          'region' => 'disabled',
          'weight' => '-44',
          'format' => '',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
        'read_more' => array(
          'region' => 'middle',
          'weight' => '-47',
          'format' => 'ds_eval_code',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
        'post_date' => array(
          'region' => 'disabled',
          'weight' => '-46',
          'format' => 'nd_post_date_small',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
        'body' => array(
          'region' => 'disabled',
          'weight' => '-45',
          'format' => 'nd_bodyfield',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
      ),
      'status' => 1,
    ),
    2 => array(
      'fields' => array(
        'field_jumpjet_article_teaser' => array(
          'region' => 'middle',
          'weight' => '-48',
          'format' => 'default',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
        'field_jumpjet_article_main_image' => array(
          'region' => 'middle',
          'weight' => '-49',
          'format' => 'jumpjet_img_03col_4-3-landscape_linked',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
        'field_jumpjet_article_images' => array(
          'region' => 'disabled',
          'weight' => '-42',
          'format' => 'default',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
        'title' => array(
          'region' => 'header',
          'weight' => '-50',
          'format' => 'nd_title_h2_link',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
        'author' => array(
          'region' => 'disabled',
          'weight' => '-43',
          'format' => 'ds_author_nolink',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
        'links' => array(
          'region' => 'disabled',
          'weight' => '-44',
          'format' => '',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
        'read_more' => array(
          'region' => 'middle',
          'weight' => '-47',
          'format' => 'ds_eval_code',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
        'post_date' => array(
          'region' => 'disabled',
          'weight' => '-46',
          'format' => 'nd_post_date_small',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
        'body' => array(
          'region' => 'disabled',
          'weight' => '-45',
          'format' => 'nd_bodyfield',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
      ),
      'status' => 1,
    ),
    3 => array(
      'fields' => array(
        'field_jumpjet_article_teaser' => array(
          'region' => 'middle',
          'weight' => '-48',
          'format' => 'default',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
        'field_jumpjet_article_main_image' => array(
          'region' => 'middle',
          'weight' => '-49',
          'format' => 'jumpjet_img_03col_4-3-landscape_linked',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
        'field_jumpjet_article_images' => array(
          'region' => 'disabled',
          'weight' => '-42',
          'format' => 'default',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
        'title' => array(
          'region' => 'header',
          'weight' => '-50',
          'format' => 'nd_title_h2_link',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
        'author' => array(
          'region' => 'disabled',
          'weight' => '-43',
          'format' => 'ds_author_nolink',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
        'links' => array(
          'region' => 'disabled',
          'weight' => '-44',
          'format' => '',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
        'read_more' => array(
          'region' => 'middle',
          'weight' => '-47',
          'format' => 'ds_eval_code',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
        'post_date' => array(
          'region' => 'disabled',
          'weight' => '-46',
          'format' => 'nd_post_date_small',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
        'body' => array(
          'region' => 'disabled',
          'weight' => '-45',
          'format' => 'nd_bodyfield',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
      ),
      'status' => 1,
    ),
    4 => array(
      'fields' => array(
        'field_jumpjet_article_teaser' => array(
          'region' => 'middle',
          'weight' => '-48',
          'format' => 'default',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
        'field_jumpjet_article_main_image' => array(
          'region' => 'middle',
          'weight' => '-49',
          'format' => 'jumpjet_img_03col_4-3-landscape_linked',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
        'field_jumpjet_article_images' => array(
          'region' => 'disabled',
          'weight' => '-42',
          'format' => 'default',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
        'title' => array(
          'region' => 'header',
          'weight' => '-50',
          'format' => 'nd_title_h2_link',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
        'author' => array(
          'region' => 'disabled',
          'weight' => '-43',
          'format' => 'ds_author_nolink',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
        'links' => array(
          'region' => 'disabled',
          'weight' => '-44',
          'format' => '',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
        'read_more' => array(
          'region' => 'middle',
          'weight' => '-47',
          'format' => 'ds_eval_code',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
        'post_date' => array(
          'region' => 'disabled',
          'weight' => '-46',
          'format' => 'nd_post_date_small',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
        'body' => array(
          'region' => 'disabled',
          'weight' => '-45',
          'format' => 'nd_bodyfield',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
      ),
      'status' => 1,
    ),
    'teaser' => array(
      'fields' => array(
        'field_jumpjet_article_teaser' => array(
          'region' => 'middle',
          'weight' => '-48',
          'format' => 'default',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
        'field_jumpjet_article_main_image' => array(
          'region' => 'middle',
          'weight' => '-49',
          'format' => 'jumpjet_img_03col_4-3-landscape_linked',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
        'field_jumpjet_article_images' => array(
          'region' => 'disabled',
          'weight' => '-42',
          'format' => 'default',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
        'title' => array(
          'region' => 'header',
          'weight' => '-50',
          'format' => 'nd_title_h2_link',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
        'author' => array(
          'region' => 'disabled',
          'weight' => '-43',
          'format' => 'ds_author_nolink',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
        'links' => array(
          'region' => 'disabled',
          'weight' => '-44',
          'format' => '',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
        'read_more' => array(
          'region' => 'middle',
          'weight' => '-47',
          'format' => 'ds_eval_code',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
        'post_date' => array(
          'region' => 'disabled',
          'weight' => '-46',
          'format' => 'nd_post_date_small',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
        'body' => array(
          'region' => 'disabled',
          'weight' => '-45',
          'format' => 'nd_bodyfield',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
      ),
      'status' => 1,
      'region_styles' => array(
        'header' => '',
        'left' => '',
        'middle' => '',
        'right' => '',
        'footer' => '',
      ),
    ),
    'full' => array(
      'fields' => array(
        'field_jumpjet_article_teaser' => array(
          'region' => 'middle',
          'weight' => '-49',
          'format' => 'default',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
        'field_jumpjet_article_main_image' => array(
          'region' => 'middle',
          'weight' => '-50',
          'format' => 'jumpjet_img_06col_16-9-landscape_ife',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
        'field_jumpjet_article_images' => array(
          'region' => 'disabled',
          'weight' => '-42',
          'format' => 'default',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
        'title' => array(
          'region' => 'disabled',
          'weight' => '-46',
          'format' => 'nd_title_h1_nolink',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
        'author' => array(
          'region' => 'disabled',
          'weight' => '-43',
          'format' => 'ds_author_nolink',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
        'links' => array(
          'region' => 'footer',
          'weight' => '-47',
          'format' => '',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
        'read_more' => array(
          'region' => 'disabled',
          'weight' => '-45',
          'format' => 'ds_eval_code',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
        'post_date' => array(
          'region' => 'disabled',
          'weight' => '-44',
          'format' => 'nd_post_date_small',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
        'body' => array(
          'region' => 'middle',
          'weight' => '-48',
          'format' => 'nd_bodyfield',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
      ),
      'status' => 1,
      'region_styles' => array(
        'header' => '',
        'left' => '',
        'middle' => '',
        'right' => '',
        'footer' => '',
      ),
    ),
  );

  $export['nd_display_settings_jumpjet_article'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_jumpjet_article';
  $strongarm->value = array(
    0 => 'status',
  );

  $export['node_options_jumpjet_article'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeformscols_field_placements_jumpjet_article_default';
  $strongarm->value = array(
    'title' => array(
      'region' => 'main',
      'weight' => '-5',
      'has_required' => TRUE,
      'title' => 'Title',
    ),
    'body_field' => array(
      'region' => 'main',
      'weight' => '0.008',
      'has_required' => FALSE,
      'title' => NULL,
      'hidden' => 0,
    ),
    'menu' => array(
      'region' => 'footer',
      'weight' => '4',
      'has_required' => FALSE,
      'title' => 'Menu settings',
      'collapsed' => 1,
      'hidden' => 0,
    ),
    'revision_information' => array(
      'region' => 'footer',
      'weight' => '2',
      'has_required' => FALSE,
      'title' => 'Revision information',
      'collapsed' => 1,
      'hidden' => 0,
    ),
    'comment_settings' => array(
      'region' => 'footer',
      'weight' => '0',
      'has_required' => FALSE,
      'title' => 'Comment settings',
      'collapsed' => 1,
      'hidden' => 0,
    ),
    'path' => array(
      'region' => 'footer',
      'weight' => '1',
      'has_required' => FALSE,
      'title' => 'URL path settings',
      'collapsed' => 1,
      'hidden' => 0,
    ),
    'options' => array(
      'region' => 'footer',
      'weight' => '3',
      'has_required' => FALSE,
      'title' => 'Publishing options',
      'collapsed' => 1,
      'hidden' => 0,
    ),
    'author' => array(
      'region' => 'footer',
      'weight' => '3',
      'has_required' => FALSE,
      'title' => 'Authoring information',
      'collapsed' => 1,
      'hidden' => 0,
    ),
    'buttons' => array(
      'region' => 'main',
      'weight' => '100',
      'has_required' => FALSE,
      'title' => NULL,
      'hidden' => 0,
    ),
    'field_jumpjet_article_teaser' => array(
      'region' => 'main',
      'weight' => '-4',
      'has_required' => FALSE,
      'title' => 'Teaser',
      'hidden' => 0,
    ),
    'field_jumpjet_article_main_image' => array(
      'region' => 'right',
      'weight' => '-3',
      'has_required' => FALSE,
      'title' => 'Main Image',
      'hidden' => 0,
    ),
    'field_jumpjet_article_images' => array(
      'region' => 'right',
      'weight' => '0',
      'has_required' => FALSE,
      'title' => 'Article Images',
      'hidden' => 0,
    ),
  );

  $export['nodeformscols_field_placements_jumpjet_article_default'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeformsettings_cancel_jumpjet_article';
  $strongarm->value = '1';

  $export['nodeformsettings_cancel_jumpjet_article'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeformsettings_inputformat_jumpjet_article';
  $strongarm->value = '0';

  $export['nodeformsettings_inputformat_jumpjet_article'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeformsettings_preview_jumpjet_article';
  $strongarm->value = 0;

  $export['nodeformsettings_preview_jumpjet_article'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeformsettings_revisionlog_jumpjet_article';
  $strongarm->value = '1';

  $export['nodeformsettings_revisionlog_jumpjet_article'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeformsettings_splitsummary_jumpjet_article';
  $strongarm->value = '1';

  $export['nodeformsettings_splitsummary_jumpjet_article'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeformsettings_submit_jumpjet_article';
  $strongarm->value = 'Save';

  $export['nodeformsettings_submit_jumpjet_article'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_jumpjet_article_pattern';
  $strongarm->value = 'articles/[title-raw]';

  $export['pathauto_node_jumpjet_article_pattern'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'submission_body_rows_jumpjet_article';
  $strongarm->value = '20';

  $export['submission_body_rows_jumpjet_article'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'vd_type_jumpjet_articles_jumpjet_article_view_block1';
  $strongarm->value = TRUE;

  $export['vd_type_jumpjet_articles_jumpjet_article_view_block1'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'vd_type_jumpjet_articles_jumpjet_article_view_block2';
  $strongarm->value = TRUE;

  $export['vd_type_jumpjet_articles_jumpjet_article_view_block2'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'vd_type_jumpjet_articles_jumpjet_article_view_block3';
  $strongarm->value = TRUE;

  $export['vd_type_jumpjet_articles_jumpjet_article_view_block3'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'vd_type_jumpjet_articles_jumpjet_article_view_page1';
  $strongarm->value = TRUE;

  $export['vd_type_jumpjet_articles_jumpjet_article_view_page1'] = $strongarm;
  return $export;
}
