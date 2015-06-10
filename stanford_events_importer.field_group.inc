<?php
/**
 * @file
 * stanford_events_importer.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function stanford_events_importer_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_course_styles|node|stanford_event|default';
  $field_group->group_name = 'group_course_styles';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_event';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'This event is part of a course',
    'weight' => '5',
    'children' => array(
      0 => 'field_s_event_caw_course',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'This event is part of a course',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-course-styles field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_course_styles|node|stanford_event|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_descriptor_info|node|stanford_event|default';
  $field_group->group_name = 'group_descriptor_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_event';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Descriptor group',
    'weight' => '1',
    'children' => array(
      0 => 'field_s_event_map_link',
      1 => 'field_stanford_event_datetime',
      2 => 'field_stanford_event_location',
      3 => 'field_s_event_fee',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Descriptor group',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'summary',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_descriptor_info|node|stanford_event|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_details|node|stanford_event|default';
  $field_group->group_name = 'group_event_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_event';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Event details',
    'weight' => '4',
    'children' => array(
      0 => 'field_s_event_type',
      1 => 'field_stanford_event_audience',
      2 => 'field_stanford_event_email',
      3 => 'field_stanford_event_phone',
      4 => 'field_stanford_event_sponsor',
      5 => 'field_stanford_event_url',
      6 => 'field_event_categories',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Event details',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-event-details field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_event_details|node|stanford_event|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_registration|node|stanford_event|default';
  $field_group->group_name = 'group_event_registration';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_event';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Registration',
    'weight' => '3',
    'children' => array(
      0 => 'field_s_event_registration',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Registration',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-event-registration field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_event_registration|node|stanford_event|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_series_styles|node|stanford_event|default';
  $field_group->group_name = 'group_event_series_styles';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_event';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'This event is part of an event series',
    'weight' => '6',
    'children' => array(
      0 => 'field_s_event_caw_courseseries',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'This event is part of an event series',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-event-series-styles field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_event_series_styles|node|stanford_event|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_floatright|node|stanford_event|default';
  $field_group->group_name = 'group_floatright';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_event';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Float Right',
    'weight' => '0',
    'children' => array(
      0 => 'field_stanford_event_image',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Float Right',
      'instance_settings' => array(
        'classes' => 'float-right border-simple-nowidth border-shadow group-floatright field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_floatright|node|stanford_event|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_related_content|node|stanford_event|form';
  $field_group->group_name = 'group_related_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tag with Related Content',
    'weight' => '18',
    'children' => array(
      0 => 'field_related_content',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Tag with Related Content',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-related-content field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_related_content|node|stanford_event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_stanford_event_advanced|node|stanford_event|form';
  $field_group->group_name = 'group_stanford_event_advanced';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Advanced',
    'weight' => '19',
    'children' => array(
      0 => 'field_s_event_feed_type',
      1 => 'field_stanford_event_add_to_cal',
      2 => 'field_stanford_event_admission',
      3 => 'field_stanford_event_categories',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Advanced',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-stanford-event-advanced field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_stanford_event_advanced|node|stanford_event|form'] = $field_group;

  return $export;
}
