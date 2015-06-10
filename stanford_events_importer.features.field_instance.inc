<?php
/**
 * @file
 * stanford_events_importer.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function stanford_events_importer_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-stanford_event-body'
  $field_instances['node-stanford_event-body'] = array(
    'bundle' => 'stanford_event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This filtered text field is event description (e.g., this event is etc. etc.).',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'content_editor_text_format' => 'content_editor_text_format',
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'content_editor_text_format' => array(
              'weight' => -10,
            ),
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'display_summary' => 1,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-stanford_event-field_event_categories'
  $field_instances['node-stanford_event-field_event_categories'] = array(
    'bundle' => 'stanford_event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Select the appropriate category for this event.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'ds',
        'settings' => array(
          'taxonomy_term_link' => 0,
          'taxonomy_term_separator' => ', ',
        ),
        'type' => 'ds_taxonomy_separator',
        'weight' => 17,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_event_categories',
    'label' => 'Event Categories',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'node-stanford_event-field_related_content'
  $field_instances['node-stanford_event-field_related_content'] = array(
    'bundle' => 'stanford_event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Choose the appropriate Related Content tag(s).  To select more than one tag, hold the Ctrl or Command keyboard key on the Mac.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_related_content',
    'label' => 'Related Content',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 17,
    ),
  );

  // Exported field_instance: 'node-stanford_event-field_s_event_caw_course'
  $field_instances['node-stanford_event-field_s_event_caw_course'] = array(
    'bundle' => 'stanford_event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter the associated course.  Start typing the course name then select from the drop-down list.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 19,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_s_event_caw_course',
    'label' => 'Course',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-stanford_event-field_s_event_caw_courseseries'
  $field_instances['node-stanford_event-field_s_event_caw_courseseries'] = array(
    'bundle' => 'stanford_event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter the associated event series.  Start typing the event series name then select from the drop-down list.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_s_event_caw_courseseries',
    'label' => 'Event Series',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-stanford_event-field_s_event_fee'
  $field_instances['node-stanford_event-field_s_event_fee'] = array(
    'bundle' => 'stanford_event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter how much it costs to attend this event (e.g., Free; $250, STAP $75).',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_s_event_fee',
    'label' => 'Fee',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'content_editor_text_format' => 'content_editor_text_format',
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'content_editor_text_format' => array(
              'weight' => -10,
            ),
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-stanford_event-field_s_event_feed_type'
  $field_instances['node-stanford_event-field_s_event_feed_type'] = array(
    'bundle' => 'stanford_event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This field is structural and you should not need to edit it. It describes the status of the event on events.stanford.edu (Published, Unlisted, Bookmarked, Canceled)',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_s_event_feed_type',
    'label' => 'Event Feed Type',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-stanford_event-field_s_event_map_link'
  $field_instances['node-stanford_event-field_s_event_map_link'] = array(
    'bundle' => 'stanford_event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter the full URL to a campus map location.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_s_event_map_link',
    'label' => 'Map Link',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'value',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => 'Map',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-stanford_event-field_s_event_registration'
  $field_instances['node-stanford_event-field_s_event_registration'] = array(
    'bundle' => 'stanford_event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter registration information for this event.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_s_event_registration',
    'label' => 'Registration',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'content_editor_text_format' => 'content_editor_text_format',
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'content_editor_text_format' => array(
              'weight' => -10,
            ),
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-stanford_event-field_s_event_type'
  $field_instances['node-stanford_event-field_s_event_type'] = array(
    'bundle' => 'stanford_event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Choose the appropriate event type(s).',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'ds',
        'settings' => array(
          'taxonomy_term_link' => 0,
          'taxonomy_term_separator' => ', ',
        ),
        'type' => 'ds_taxonomy_separator',
        'weight' => 16,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_s_event_type',
    'label' => 'Event Type',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'node-stanford_event-field_stanford_event_add_to_cal'
  $field_instances['node-stanford_event-field_stanford_event_add_to_cal'] = array(
    'bundle' => 'stanford_event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter an iCal link to add this event to a personal calendar',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_stanford_event_add_to_cal',
    'label' => 'Add to Calendar',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 0,
      'title' => 'value',
      'title_label_use_field_label' => FALSE,
      'title_maxlength' => 128,
      'title_value' => 'Add this event to my calendar',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-stanford_event-field_stanford_event_admission'
  $field_instances['node-stanford_event-field_stanford_event_admission'] = array(
    'bundle' => 'stanford_event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This formatted text field is for the event admission information (e.g., Free and open to the public).',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_stanford_event_admission',
    'label' => 'Admission',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'content_editor_text_format' => 'content_editor_text_format',
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'content_editor_text_format' => array(
              'weight' => -10,
            ),
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-stanford_event-field_stanford_event_audience'
  $field_instances['node-stanford_event-field_stanford_event_audience'] = array(
    'bundle' => 'stanford_event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This content is imported from events.stanford.edu.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'ds',
        'settings' => array(
          'taxonomy_term_link' => 0,
          'taxonomy_term_separator' => ', ',
        ),
        'type' => 'ds_taxonomy_separator',
        'weight' => 18,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_stanford_event_audience',
    'label' => 'Event Audience',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 17,
    ),
  );

  // Exported field_instance: 'node-stanford_event-field_stanford_event_categories'
  $field_instances['node-stanford_event-field_stanford_event_categories'] = array(
    'bundle' => 'stanford_event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This content is imported from events.stanford.edu.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_stanford_event_categories',
    'label' => 'Categories',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-stanford_event-field_stanford_event_datetime'
  $field_instances['node-stanford_event-field_stanford_event_datetime'] = array(
    'bundle' => 'stanford_event',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'stanford_date_year_time',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_stanford_event_datetime',
    'label' => 'Date and Time',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'blank',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'display_all_day' => 1,
        'increment' => 5,
        'input_format' => 'custom',
        'input_format_custom' => 'Y-m-d g:i:sA',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-stanford_event-field_stanford_event_email'
  $field_instances['node-stanford_event-field_stanford_event_email'] = array(
    'bundle' => 'stanford_event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This text field is for the email address of the contact person for the event (e.g., email-address@stanford.edu).',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 13,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_stanford_event_email',
    'label' => 'Contact Email',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'content_editor_text_format' => 'content_editor_text_format',
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'content_editor_text_format' => array(
              'weight' => -10,
            ),
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-stanford_event-field_stanford_event_image'
  $field_instances['node-stanford_event-field_stanford_event_image'] = array(
    'bundle' => 'stanford_event',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'large-scaled',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_stanford_event_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'insert' => 0,
        'insert_absolute' => FALSE,
        'insert_class' => '',
        'insert_default' => 'auto',
        'insert_styles' => array(
          'auto' => 'auto',
          'image' => 0,
          'image_large' => 0,
          'image_medium' => 0,
          'image_thumbnail' => 0,
          'link' => 0,
        ),
        'insert_width' => '',
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-stanford_event-field_stanford_event_location'
  $field_instances['node-stanford_event-field_stanford_event_location'] = array(
    'bundle' => 'stanford_event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This text field is the location for the event (e.g., Redwood Hall, Room 308).',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_stanford_event_location',
    'label' => 'Location',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-stanford_event-field_stanford_event_phone'
  $field_instances['node-stanford_event-field_stanford_event_phone'] = array(
    'bundle' => 'stanford_event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This text field is for the phone number of the contact person for the event (e.g., 650-725-1234).',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 14,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_stanford_event_phone',
    'label' => 'Contact Phone',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'content_editor_text_format' => 'content_editor_text_format',
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'content_editor_text_format' => array(
              'weight' => -10,
            ),
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-stanford_event-field_stanford_event_sponsor'
  $field_instances['node-stanford_event-field_stanford_event_sponsor'] = array(
    'bundle' => 'stanford_event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This text field is for the event sponsor (e.g., University Communications).',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_stanford_event_sponsor',
    'label' => 'Event Sponsor',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'content_editor_text_format' => 'content_editor_text_format',
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'content_editor_text_format' => array(
              'weight' => -10,
            ),
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-stanford_event-field_stanford_event_url'
  $field_instances['node-stanford_event-field_stanford_event_url'] = array(
    'bundle' => 'stanford_event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This link field will add a link Title and URL to location(s) that is external to your site (e.g. Stanford University, http://www.stanford.edu).',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 15,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_stanford_event_url',
    'label' => 'More Information',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'title' => 'optional',
      'title_label_use_field_label' => FALSE,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 12,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Add to Calendar');
  t('Admission');
  t('Body');
  t('Categories');
  t('Choose the appropriate Related Content tag(s).  To select more than one tag, hold the Ctrl or Command keyboard key on the Mac.');
  t('Choose the appropriate event type(s).');
  t('Contact Email');
  t('Contact Phone');
  t('Course');
  t('Date and Time');
  t('Enter an iCal link to add this event to a personal calendar');
  t('Enter how much it costs to attend this event (e.g., Free; $250, STAP $75).');
  t('Enter registration information for this event.');
  t('Enter the associated course.  Start typing the course name then select from the drop-down list.');
  t('Enter the associated event series.  Start typing the event series name then select from the drop-down list.');
  t('Enter the full URL to a campus map location.');
  t('Event Audience');
  t('Event Categories');
  t('Event Feed Type');
  t('Event Series');
  t('Event Sponsor');
  t('Event Type');
  t('Fee');
  t('Image');
  t('Location');
  t('Map Link');
  t('More Information');
  t('Registration');
  t('Related Content');
  t('Select the appropriate category for this event.');
  t('This content is imported from events.stanford.edu.');
  t('This field is structural and you should not need to edit it. It describes the status of the event on events.stanford.edu (Published, Unlisted, Bookmarked, Canceled)');
  t('This filtered text field is event description (e.g., this event is etc. etc.).');
  t('This formatted text field is for the event admission information (e.g., Free and open to the public).');
  t('This link field will add a link Title and URL to location(s) that is external to your site (e.g. Stanford University, http://www.stanford.edu).');
  t('This text field is for the email address of the contact person for the event (e.g., email-address@stanford.edu).');
  t('This text field is for the event sponsor (e.g., University Communications).');
  t('This text field is for the phone number of the contact person for the event (e.g., 650-725-1234).');
  t('This text field is the location for the event (e.g., Redwood Hall, Room 308).');

  return $field_instances;
}
