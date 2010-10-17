<?php

/**
 * Implementation of hook_content_default_fields().
 */
function jumpjet_article_engine_content_default_fields() {
  $fields = array();

  // Exported field: field_jumpjet_article_images
  $fields['jumpjet_article-field_jumpjet_article_images'] = array(
    'field_name' => 'field_jumpjet_article_images',
    'type_name' => 'jumpjet_article',
    'display_settings' => array(
      'label' => array(
        'format' => 'hidden',
      ),
      'format' => 'default',
      'css-class' => array(),
      'region' => 'disabled',
      'ds_weight' => '-42',
      'full' => array(
        'label' => array(
          'format' => 'hidden',
        ),
        'format' => 'default',
        'css-class' => '',
        'region' => 'disabled',
        'type' => 'filefield',
        'parent_id' => '',
        'field_id' => 'field_jumpjet_article_images',
        'label_value' => '',
        'exclude' => 1,
        'weight' => '-42',
      ),
      'teaser' => array(
        'label' => array(
          'format' => 'hidden',
        ),
        'format' => 'default',
        'css-class' => '',
        'region' => 'disabled',
        'type' => 'filefield',
        'parent_id' => '',
        'field_id' => 'field_jumpjet_article_images',
        'label_value' => '',
        'exclude' => 1,
        'weight' => '-42',
      ),
      'weight' => '-1',
      'parent' => '',
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
        'weight' => '-42',
        'css-class' => '',
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
        'css-class' => '',
        'weight' => '-42',
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
        'css-class' => '',
        'weight' => '-42',
      ),
      'token' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'sticky' => array(
        'format' => 'default',
        'exclude' => 0,
        'weight' => '-42',
        'css-class' => '',
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '1',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 1,
      'title' => '',
      'custom_title' => 1,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'jumpjet_img_credit' => '',
      'jumpjet_img_credit_help' => '',
      'custom_jumpjet_img_credit' => 1,
      'custom_jumpjet_img_credit_style' => 'textfield',
      'custom_jumpjet_img_credit_required' => 0,
      'imagecrop' => 1,
      'imagecrop_presets' => array(
        'jumpjet_img_03col_1-1-square' => 'jumpjet_img_03col_1-1-square',
        'jumpjet_img_03col_16-9-landscape' => 'jumpjet_img_03col_16-9-landscape',
        'jumpjet_img_03col_3-4-portrait' => 'jumpjet_img_03col_3-4-portrait',
        'jumpjet_img_03col_4-3-landscape' => 'jumpjet_img_03col_4-3-landscape',
        'jumpjet_img_04col_1-1-square' => 'jumpjet_img_04col_1-1-square',
        'jumpjet_img_04col_16-9-landscape' => 'jumpjet_img_04col_16-9-landscape',
        'jumpjet_img_04col_3-4-portrait' => 'jumpjet_img_04col_3-4-portrait',
        'jumpjet_img_04col_4-3-landscape' => 'jumpjet_img_04col_4-3-landscape',
        'jumpjet_img_05col_16-9-landscape' => 'jumpjet_img_05col_16-9-landscape',
        'jumpjet_img_05col_3-4-portrait' => 'jumpjet_img_05col_3-4-portrait',
        'jumpjet_img_05col_4-3-landscape' => 'jumpjet_img_05col_4-3-landscape',
        'jumpjet_img_06col_16-9-landscape' => 'jumpjet_img_06col_16-9-landscape',
        'jumpjet_img_06col_3-4-portrait' => 'jumpjet_img_06col_3-4-portrait',
        'jumpjet_img_06col_4-3-landscape' => 'jumpjet_img_06col_4-3-landscape',
        'jumpjet_img_08col_banner' => 'jumpjet_img_08col_banner',
        'jumpjet_img_10col_banner' => 'jumpjet_img_10col_banner',
        'jumpjet_img_01col_1-1-square' => 0,
        'jumpjet_img_01col_3-4-portrait' => 0,
        'jumpjet_img_01col_4-3-landscape' => 0,
        'jumpjet_img_02col_1-1-square' => 0,
        'jumpjet_img_02col_3-4-portrait' => 0,
        'jumpjet_img_02col_4-3-landscape' => 0,
        'jumpjet_img_07col_16-9-landscape' => 0,
        'jumpjet_img_07col_4-3-landscape' => 0,
        'jumpjet_img_08col_16-9-landscape' => 0,
        'jumpjet_img_08col_4-3-landscape' => 0,
        'jumpjet_img_09col_16-9-landscape' => 0,
        'jumpjet_img_09col_4-3-landscape' => 0,
        'jumpjet_img_10col_16-9-landscape' => 0,
        'jumpjet_img_10col_4-3-landscape' => 0,
        'jumpjet_img_11col_16-9-landscape' => 0,
        'jumpjet_img_11col_4-3-landscape' => 0,
        'jumpjet_img_12col_16-9-landscape' => 0,
        'jumpjet_img_12col_4-3-landscape' => 0,
        'jumpjet_img_12col_banner' => 0,
        'jumpjet_img_14col_banner' => 0,
        'jumpjet_img_16col_banner' => 0,
      ),
      'filefield_sources' => array(
        'remote' => 'remote',
        'reference' => 'reference',
        'attach' => 0,
      ),
      'filefield_source_attach_path' => 'file_attach',
      'filefield_source_attach_absolute' => '0',
      'filefield_source_attach_mode' => 'move',
      'filefield_source_autocomplete' => '0',
      'insert' => 1,
      'insert_styles' => array(
        'imagecache_jumpjet_img_03col' => 'imagecache_jumpjet_img_03col',
        'imagecache_jumpjet_img_03col_1-1-square' => 'imagecache_jumpjet_img_03col_1-1-square',
        'imagecache_jumpjet_img_03col_3-4-portrait' => 'imagecache_jumpjet_img_03col_3-4-portrait',
        'imagecache_jumpjet_img_03col_4-3-landscape' => 'imagecache_jumpjet_img_03col_4-3-landscape',
        'imagecache_jumpjet_img_03col_16-9-landscape' => 'imagecache_jumpjet_img_03col_16-9-landscape',
        'imagecache_jumpjet_img_04col' => 'imagecache_jumpjet_img_04col',
        'imagecache_jumpjet_img_04col_1-1-square' => 'imagecache_jumpjet_img_04col_1-1-square',
        'imagecache_jumpjet_img_04col_3-4-portrait' => 'imagecache_jumpjet_img_04col_3-4-portrait',
        'imagecache_jumpjet_img_04col_4-3-landscape' => 'imagecache_jumpjet_img_04col_4-3-landscape',
        'imagecache_jumpjet_img_04col_16-9-landscape' => 'imagecache_jumpjet_img_04col_16-9-landscape',
        'imagecache_jumpjet_img_05col' => 'imagecache_jumpjet_img_05col',
        'imagecache_jumpjet_img_05col_3-4-portrait' => 'imagecache_jumpjet_img_05col_3-4-portrait',
        'imagecache_jumpjet_img_05col_4-3-landscape' => 'imagecache_jumpjet_img_05col_4-3-landscape',
        'imagecache_jumpjet_img_05col_16-9-landscape' => 'imagecache_jumpjet_img_05col_16-9-landscape',
        'imagecache_jumpjet_img_06col' => 'imagecache_jumpjet_img_06col',
        'imagecache_jumpjet_img_06col_3-4-portrait' => 'imagecache_jumpjet_img_06col_3-4-portrait',
        'imagecache_jumpjet_img_06col_4-3-landscape' => 'imagecache_jumpjet_img_06col_4-3-landscape',
        'imagecache_jumpjet_img_06col_16-9-landscape' => 'imagecache_jumpjet_img_06col_16-9-landscape',
        'imagecache_jumpjet_img_08col_banner' => 'imagecache_jumpjet_img_08col_banner',
        'imagecache_jumpjet_img_10col_banner' => 'imagecache_jumpjet_img_10col_banner',
        'auto' => 0,
        'link' => 0,
        'image' => 0,
        'imagecache_jumpjet_img_01col' => 0,
        'imagecache_jumpjet_img_01col_1-1-square' => 0,
        'imagecache_jumpjet_img_01col_3-4-portrait' => 0,
        'imagecache_jumpjet_img_01col_4-3-landscape' => 0,
        'imagecache_jumpjet_img_02col' => 0,
        'imagecache_jumpjet_img_02col_1-1-square' => 0,
        'imagecache_jumpjet_img_02col_3-4-portrait' => 0,
        'imagecache_jumpjet_img_02col_4-3-landscape' => 0,
        'imagecache_jumpjet_img_07col' => 0,
        'imagecache_jumpjet_img_07col_4-3-landscape' => 0,
        'imagecache_jumpjet_img_07col_16-9-landscape' => 0,
        'imagecache_jumpjet_img_08col' => 0,
        'imagecache_jumpjet_img_08col_4-3-landscape' => 0,
        'imagecache_jumpjet_img_08col_16-9-landscape' => 0,
        'imagecache_jumpjet_img_09col' => 0,
        'imagecache_jumpjet_img_09col_4-3-landscape' => 0,
        'imagecache_jumpjet_img_09col_16-9-landscape' => 0,
        'imagecache_jumpjet_img_10col' => 0,
        'imagecache_jumpjet_img_10col_4-3-landscape' => 0,
        'imagecache_jumpjet_img_10col_16-9-landscape' => 0,
        'imagecache_jumpjet_img_11col_4-3-landscape' => 0,
        'imagecache_jumpjet_img_11col_16-9-landscape' => 0,
        'imagecache_jumpjet_img_12col_4-3-landscape' => 0,
        'imagecache_jumpjet_img_12col_16-9-landscape' => 0,
        'imagecache_jumpjet_img_12col_banner' => 0,
        'imagecache_jumpjet_img_14col_banner' => 0,
        'imagecache_jumpjet_img_16col_banner' => 0,
      ),
      'insert_default' => 'imagecache_jumpjet_img_03col_4-3-landscape',
      'insert_class' => 'jumpjet-article-image',
      'insert_width' => '',
      'label' => 'Article Images',
      'weight' => '-1',
      'description' => 'Images can be uploaded here and then inserted into the content area wherever you wish.',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_jumpjet_article_main_image
  $fields['jumpjet_article-field_jumpjet_article_main_image'] = array(
    'field_name' => 'field_jumpjet_article_main_image',
    'type_name' => 'jumpjet_article',
    'display_settings' => array(
      'label' => array(
        'format' => 'hidden',
      ),
      'format' => 'default',
      'css-class' => array(),
      'region' => 'disabled',
      'ds_weight' => '-50',
      'full' => array(
        'label' => array(
          'format' => 'hidden',
        ),
        'format' => 'jumpjet_img_06col_16-9-landscape_ife',
        'css-class' => '',
        'region' => 'middle',
        'type' => 'filefield',
        'parent_id' => '',
        'field_id' => 'field_jumpjet_article_main_image',
        'label_value' => '',
        'exclude' => 0,
        'weight' => '-50',
      ),
      'teaser' => array(
        'label' => array(
          'format' => 'hidden',
        ),
        'format' => 'jumpjet_img_03col_4-3-landscape_linked',
        'css-class' => '',
        'region' => 'middle',
        'type' => 'filefield',
        'parent_id' => '',
        'field_id' => 'field_jumpjet_article_main_image',
        'label_value' => '',
        'exclude' => 0,
        'weight' => '-49',
      ),
      'weight' => '-2',
      'parent' => '',
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
        'weight' => '-49',
        'css-class' => '',
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
        'css-class' => '',
        'weight' => '-49',
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
        'css-class' => '',
        'weight' => '-49',
      ),
      'token' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'sticky' => array(
        'format' => 'default',
        'exclude' => 0,
        'weight' => '-49',
        'css-class' => '',
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 1,
      'title' => '',
      'custom_title' => 1,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'jumpjet_img_credit' => '',
      'jumpjet_img_credit_help' => '',
      'custom_jumpjet_img_credit' => 1,
      'custom_jumpjet_img_credit_style' => 'textfield',
      'custom_jumpjet_img_credit_required' => 0,
      'imagecrop' => 1,
      'imagecrop_presets' => array(
        'jumpjet_img_03col_4-3-landscape' => 'jumpjet_img_03col_4-3-landscape',
        'jumpjet_img_07col_16-9-landscape' => 'jumpjet_img_07col_16-9-landscape',
        'jumpjet_img_01col_1-1-square' => 0,
        'jumpjet_img_01col_3-4-portrait' => 0,
        'jumpjet_img_01col_4-3-landscape' => 0,
        'jumpjet_img_02col_1-1-square' => 0,
        'jumpjet_img_02col_3-4-portrait' => 0,
        'jumpjet_img_02col_4-3-landscape' => 0,
        'jumpjet_img_03col_1-1-square' => 0,
        'jumpjet_img_03col_16-9-landscape' => 0,
        'jumpjet_img_03col_3-4-portrait' => 0,
        'jumpjet_img_04col_1-1-square' => 0,
        'jumpjet_img_04col_16-9-landscape' => 0,
        'jumpjet_img_04col_3-4-portrait' => 0,
        'jumpjet_img_04col_4-3-landscape' => 0,
        'jumpjet_img_05col_16-9-landscape' => 0,
        'jumpjet_img_05col_3-4-portrait' => 0,
        'jumpjet_img_05col_4-3-landscape' => 0,
        'jumpjet_img_06col_16-9-landscape' => 0,
        'jumpjet_img_06col_3-4-portrait' => 0,
        'jumpjet_img_06col_4-3-landscape' => 0,
        'jumpjet_img_07col_4-3-landscape' => 0,
        'jumpjet_img_08col_16-9-landscape' => 0,
        'jumpjet_img_08col_4-3-landscape' => 0,
        'jumpjet_img_08col_banner' => 0,
        'jumpjet_img_09col_16-9-landscape' => 0,
        'jumpjet_img_09col_4-3-landscape' => 0,
        'jumpjet_img_10col_16-9-landscape' => 0,
        'jumpjet_img_10col_4-3-landscape' => 0,
        'jumpjet_img_10col_banner' => 0,
        'jumpjet_img_11col_16-9-landscape' => 0,
        'jumpjet_img_11col_4-3-landscape' => 0,
        'jumpjet_img_12col_16-9-landscape' => 0,
        'jumpjet_img_12col_4-3-landscape' => 0,
        'jumpjet_img_12col_banner' => 0,
        'jumpjet_img_14col_banner' => 0,
        'jumpjet_img_16col_banner' => 0,
      ),
      'filefield_sources' => array(
        'reference' => 'reference',
        'remote' => 'remote',
        'attach' => 0,
      ),
      'filefield_source_attach_path' => 'file_attach',
      'filefield_source_attach_absolute' => '0',
      'filefield_source_attach_mode' => 'move',
      'filefield_source_autocomplete' => '0',
      'insert' => 0,
      'insert_styles' => array(
        'auto' => 0,
        'link' => 0,
        'image' => 0,
        'imagecache_jumpjet_img_01col' => 0,
        'imagecache_jumpjet_img_01col_1-1-square' => 0,
        'imagecache_jumpjet_img_01col_3-4-portrait' => 0,
        'imagecache_jumpjet_img_01col_4-3-landscape' => 0,
        'imagecache_jumpjet_img_02col' => 0,
        'imagecache_jumpjet_img_02col_1-1-square' => 0,
        'imagecache_jumpjet_img_02col_3-4-portrait' => 0,
        'imagecache_jumpjet_img_02col_4-3-landscape' => 0,
        'imagecache_jumpjet_img_03col' => 0,
        'imagecache_jumpjet_img_03col_1-1-square' => 0,
        'imagecache_jumpjet_img_03col_3-4-portrait' => 0,
        'imagecache_jumpjet_img_03col_4-3-landscape' => 0,
        'imagecache_jumpjet_img_03col_16-9-landscape' => 0,
        'imagecache_jumpjet_img_04col' => 0,
        'imagecache_jumpjet_img_04col_1-1-square' => 0,
        'imagecache_jumpjet_img_04col_3-4-portrait' => 0,
        'imagecache_jumpjet_img_04col_4-3-landscape' => 0,
        'imagecache_jumpjet_img_04col_16-9-landscape' => 0,
        'imagecache_jumpjet_img_05col' => 0,
        'imagecache_jumpjet_img_05col_3-4-portrait' => 0,
        'imagecache_jumpjet_img_05col_4-3-landscape' => 0,
        'imagecache_jumpjet_img_05col_16-9-landscape' => 0,
        'imagecache_jumpjet_img_06col' => 0,
        'imagecache_jumpjet_img_06col_3-4-portrait' => 0,
        'imagecache_jumpjet_img_06col_4-3-landscape' => 0,
        'imagecache_jumpjet_img_06col_16-9-landscape' => 0,
        'imagecache_jumpjet_img_07col' => 0,
        'imagecache_jumpjet_img_07col_4-3-landscape' => 0,
        'imagecache_jumpjet_img_07col_16-9-landscape' => 0,
        'imagecache_jumpjet_img_08col' => 0,
        'imagecache_jumpjet_img_08col_4-3-landscape' => 0,
        'imagecache_jumpjet_img_08col_16-9-landscape' => 0,
        'imagecache_jumpjet_img_08col_banner' => 0,
        'imagecache_jumpjet_img_09col' => 0,
        'imagecache_jumpjet_img_09col_4-3-landscape' => 0,
        'imagecache_jumpjet_img_09col_16-9-landscape' => 0,
        'imagecache_jumpjet_img_10col' => 0,
        'imagecache_jumpjet_img_10col_4-3-landscape' => 0,
        'imagecache_jumpjet_img_10col_16-9-landscape' => 0,
        'imagecache_jumpjet_img_10col_banner' => 0,
        'imagecache_jumpjet_img_11col_4-3-landscape' => 0,
        'imagecache_jumpjet_img_11col_16-9-landscape' => 0,
        'imagecache_jumpjet_img_12col_4-3-landscape' => 0,
        'imagecache_jumpjet_img_12col_16-9-landscape' => 0,
        'imagecache_jumpjet_img_12col_banner' => 0,
        'imagecache_jumpjet_img_14col_banner' => 0,
        'imagecache_jumpjet_img_16col_banner' => 0,
      ),
      'insert_default' => 'auto',
      'insert_class' => '',
      'insert_width' => '',
      'label' => 'Main Image',
      'weight' => '-2',
      'description' => 'This is the main image for the article. It will be displayed at the top of the article, and will also be used on pages listing a number of articles.',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_jumpjet_article_teaser
  $fields['jumpjet_article-field_jumpjet_article_teaser'] = array(
    'field_name' => 'field_jumpjet_article_teaser',
    'type_name' => 'jumpjet_article',
    'display_settings' => array(
      'label' => array(
        'format' => 'hidden',
      ),
      'format' => 'default',
      'css-class' => array(),
      'region' => 'disabled',
      'ds_weight' => '-49',
      'full' => array(
        'label' => array(
          'format' => 'hidden',
        ),
        'format' => 'default',
        'css-class' => '',
        'region' => 'middle',
        'type' => 'text',
        'parent_id' => '',
        'field_id' => 'field_jumpjet_article_teaser',
        'label_value' => '',
        'exclude' => 0,
        'weight' => '-49',
      ),
      'teaser' => array(
        'label' => array(
          'format' => 'hidden',
        ),
        'format' => 'default',
        'css-class' => '',
        'region' => 'middle',
        'type' => 'text',
        'parent_id' => '',
        'field_id' => 'field_jumpjet_article_teaser',
        'label_value' => '',
        'exclude' => 0,
        'weight' => '-48',
      ),
      'weight' => '-4',
      'parent' => '',
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
        'weight' => '-48',
        'css-class' => '',
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
        'weight' => '-48',
        'css-class' => '',
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
        'weight' => '-48',
        'css-class' => '',
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'sticky' => array(
        'format' => 'default',
        'exclude' => 0,
        'weight' => '-48',
        'css-class' => '',
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '5',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_jumpjet_article_teaser][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Teaser',
      'weight' => '-4',
      'description' => 'Enter a paragraph to act as a \'teaser\' for the article. It will be shown at the top of the article, and on pages showing a listing of articles.',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Article Images');
  t('Main Image');
  t('Teaser');

  return $fields;
}