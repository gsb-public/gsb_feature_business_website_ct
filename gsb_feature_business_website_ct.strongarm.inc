<?php
/**
 * @file
 * gsb_feature_business_website_ct.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function gsb_feature_business_website_ct_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__business_website';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'ical' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'views_content_pane' => array(
        'custom_settings' => FALSE,
      ),
      'event_listing' => array(
        'custom_settings' => FALSE,
      ),
      'event_upcoming' => array(
        'custom_settings' => FALSE,
      ),
      'featured' => array(
        'custom_settings' => FALSE,
      ),
      'megamenu' => array(
        'custom_settings' => FALSE,
      ),
      'people_fpp' => array(
        'custom_settings' => FALSE,
      ),
      'phd_job_market_candidate' => array(
        'custom_settings' => FALSE,
      ),
      'media_contact' => array(
        'custom_settings' => FALSE,
      ),
      'teaser_listing' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '7',
        ),
        'title' => array(
          'weight' => '1',
        ),
        'path' => array(
          'weight' => '5',
        ),
        'redirect' => array(
          'weight' => '6',
        ),
        'workbench_access' => array(
          'weight' => '4',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__business_website'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'maxlength_js_business_website';
  $strongarm->value = '';
  $export['maxlength_js_business_website'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'maxlength_js_label_business_website';
  $strongarm->value = 'Content limited to @limit characters, remaining: <strong>@remaining</strong>';
  $export['maxlength_js_label_business_website'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_business_website';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_business_website'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_business_website';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_business_website'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_business_website';
  $strongarm->value = array(
    0 => 'promote',
    1 => 'moderation',
    2 => 'revision',
  );
  $export['node_options_business_website'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_business_website';
  $strongarm->value = '1';
  $export['node_preview_business_website'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_business_website';
  $strongarm->value = 1;
  $export['node_submitted_business_website'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_business_website_pattern';
  $strongarm->value = '';
  $export['pathauto_node_business_website_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'workbench_access_node_type_business_website';
  $strongarm->value = 0;
  $export['workbench_access_node_type_business_website'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'workbench_moderation_default_state_business_website';
  $strongarm->value = 'draft';
  $export['workbench_moderation_default_state_business_website'] = $strongarm;

  return $export;
}
