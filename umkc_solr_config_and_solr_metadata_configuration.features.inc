<?php
/**
 * @file
 * umkc_solr_config_and_solr_metadata_configuration.features.inc
 */

/**
 * Implements hook_islandora_solr_fields_features_default_fields().
 */
function umkc_solr_config_and_solr_metadata_configuration_islandora_solr_fields_features_default_fields() {
  return array(
  0 => array(
    'solr_field' => 'OCR_t',
    'field_type' => 'search_fields',
    'weight' => -10,
    'solr_field_settings' => array(
      'label' => 'Full Text',
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  1 => array(
    'solr_field' => 'dc.title',
    'field_type' => 'result_fields',
    'weight' => -10,
    'solr_field_settings' => array(
      'label' => 'Title',
      'snippet' => NULL,
      'date_format' => '',
      'permissions' => array(
        1 => 1,
        2 => NULL,
        3 => 3,
      ),
      'link_to_object' => TRUE,
      'link_to_search' => FALSE,
    ),
  ),
  2 => array(
    'solr_field' => 'mods_genre_authority_local_ms',
    'field_type' => 'facet_fields',
    'weight' => -10,
    'solr_field_settings' => array(
      'label' => 'Type',
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  3 => array(
    'solr_field' => 'dc.title',
    'field_type' => 'search_fields',
    'weight' => -9,
    'solr_field_settings' => array(
      'label' => 'Title',
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  4 => array(
    'solr_field' => 'mods_abstract_ms',
    'field_type' => 'result_fields',
    'weight' => -9,
    'solr_field_settings' => array(
      'label' => 'Description',
      'snippet' => NULL,
      'date_format' => '',
      'permissions' => array(
        1 => 1,
        3 => 3,
      ),
      'link_to_object' => FALSE,
      'link_to_search' => FALSE,
    ),
  ),
  5 => array(
    'solr_field' => 'dc.contributor',
    'field_type' => 'search_fields',
    'weight' => -8,
    'solr_field_settings' => array(
      'label' => 'Contributors',
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  6 => array(
    'solr_field' => 'mods_subject_topic_ms',
    'field_type' => 'facet_fields',
    'weight' => -8,
    'solr_field_settings' => array(
      'label' => 'Subject',
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  7 => array(
    'solr_field' => 'mods_tableOfContents_ms',
    'field_type' => 'result_fields',
    'weight' => -8,
    'solr_field_settings' => array(
      'label' => 'Contents',
      'snippet' => NULL,
      'date_format' => '',
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
      'link_to_object' => FALSE,
      'link_to_search' => FALSE,
    ),
  ),
  8 => array(
    'solr_field' => 'dc.subject',
    'field_type' => 'search_fields',
    'weight' => -7,
    'solr_field_settings' => array(
      'label' => 'Subjects',
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  9 => array(
    'solr_field' => 'mods_genre_ms',
    'field_type' => 'facet_fields',
    'weight' => -7,
    'solr_field_settings' => array(
      'label' => 'Genre',
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  10 => array(
    'solr_field' => 'mods_type_date_note_s',
    'field_type' => 'result_fields',
    'weight' => -7,
    'solr_field_settings' => array(
      'label' => 'Date Published',
      'snippet' => NULL,
      'date_format' => '',
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
      'link_to_object' => FALSE,
      'link_to_search' => FALSE,
    ),
  ),
  11 => array(
    'solr_field' => 'dc.date',
    'field_type' => 'search_fields',
    'weight' => -6,
    'solr_field_settings' => array(
      'label' => 'Date Issued',
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  12 => array(
    'solr_field' => 'mods_relatedItem_host_note_ms',
    'field_type' => 'result_fields',
    'weight' => -6,
    'solr_field_settings' => array(
      'label' => 'Collection',
      'snippet' => NULL,
      'date_format' => '',
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
      'link_to_object' => FALSE,
      'link_to_search' => TRUE,
    ),
  ),
  13 => array(
    'solr_field' => 'mods_subject_authority_local_geographic_ms',
    'field_type' => 'facet_fields',
    'weight' => -6,
    'solr_field_settings' => array(
      'label' => 'Geographic Area',
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  14 => array(
    'solr_field' => 'mods_subject_authority_local_temporal_ms',
    'field_type' => 'facet_fields',
    'weight' => -5,
    'solr_field_settings' => array(
      'label' => 'Time Period',
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  15 => array(
    'solr_field' => 'mods_originInfo_dateIssued_dt',
    'field_type' => 'facet_fields',
    'weight' => -3,
    'solr_field_settings' => array(
      'label' => 'Date Published',
      'range_facet_select' => 1,
      'range_facet_variable_gap' => 1,
      'range_facet_start' => 'NOW/YEAR-200YEARS',
      'range_facet_end' => 'NOW',
      'range_facet_gap' => '+1YEAR',
      'date_facet_format' => 'Y',
      'range_facet_slider_enabled' => 1,
      'range_facet_slider_color' => '#edc240',
      'date_filter_datepicker_enabled' => 1,
      'date_filter_datepicker_range' => '-100:+3',
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  16 => array(
    'solr_field' => 'score',
    'field_type' => 'sort_fields',
    'weight' => 2,
    'solr_field_settings' => array(
      'label' => 'Relevance',
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  17 => array(
    'solr_field' => 'mods_originInfo_dateIssued_dt',
    'field_type' => 'sort_fields',
    'weight' => 2,
    'solr_field_settings' => array(
      'label' => 'Date Issued',
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
);
}

/**
 * Implements hook_islandora_solr_metadata_configurations_default_fields().
 */
function umkc_solr_config_and_solr_metadata_configuration_islandora_solr_metadata_configurations_default_fields() {
 return array(
  'books' => array(
    'fields' => array(
      'dc.title' => array(
        'solr_field' => 'dc.title',
        'display_label' => 'Title',
        'hyperlink' => 0,
        'weight' => 1,
      ),
      'dc.contributor' => array(
        'solr_field' => 'dc.contributor',
        'display_label' => 'Author',
        'hyperlink' => 1,
        'weight' => 2,
      ),
      'mods_abstract_ms' => array(
        'solr_field' => 'mods_abstract_ms',
        'display_label' => 'Description',
        'hyperlink' => 0,
        'weight' => 3,
      ),
      'mods_tableOfContents_ms' => array(
        'solr_field' => 'mods_tableOfContents_ms',
        'display_label' => 'Table of Contents',
        'hyperlink' => 0,
        'weight' => 4,
      ),
      'mods_originInfo_edition_ms' => array(
        'solr_field' => 'mods_originInfo_edition_ms',
        'display_label' => 'Edition',
        'hyperlink' => 0,
        'weight' => 5,
      ),
      'dc.date' => array(
        'solr_field' => 'dc.date',
        'display_label' => 'Date of Publication',
        'hyperlink' => 0,
        'weight' => 6,
      ),
      'mods_originInfo_publisher_ms' => array(
        'solr_field' => 'mods_originInfo_publisher_ms',
        'display_label' => 'Publisher',
        'hyperlink' => 0,
        'weight' => 7,
      ),
      'mods_language_languageTerm_code_ms' => array(
        'solr_field' => 'mods_language_languageTerm_code_ms',
        'display_label' => 'Language',
        'hyperlink' => 0,
        'weight' => 8,
      ),
      'dc.subject' => array(
        'solr_field' => 'dc.subject',
        'display_label' => 'Subjects',
        'hyperlink' => 1,
        'weight' => 9,
      ),
      'mods_subject_geographic_ms' => array(
        'solr_field' => 'mods_subject_geographic_ms',
        'display_label' => 'Geographic Coverage',
        'hyperlink' => 1,
        'weight' => 10,
      ),
      'mods_subject_temporal_ms' => array(
        'solr_field' => 'mods_subject_temporal_ms',
        'display_label' => 'Date Coverage',
        'hyperlink' => 0,
        'weight' => 11,
      ),
      'mods_genre_authority_local_ms' => array(
        'solr_field' => 'mods_genre_authority_local_ms',
        'display_label' => 'Type',
        'hyperlink' => 1,
        'weight' => 12,
      ),
      'mods_physicalDescription_extent_ms' => array(
        'solr_field' => 'mods_physicalDescription_extent_ms',
        'display_label' => 'Original Format Details',
        'hyperlink' => 0,
        'weight' => 13,
      ),
      'mods_note_ms' => array(
        'solr_field' => 'mods_note_ms',
        'display_label' => 'Notes',
        'hyperlink' => 0,
        'weight' => 14,
      ),
      'mods_relatedItem_host_note_ms' => array(
        'solr_field' => 'mods_relatedItem_host_note_ms',
        'display_label' => 'Digital Collection',
        'hyperlink' => 1,
        'weight' => 15,
      ),
      'mods_identifier_PID_ms' => array(
        'solr_field' => 'mods_identifier_PID_ms',
        'display_label' => 'Identifier',
        'hyperlink' => 0,
        'weight' => 16,
      ),
      'mods_location_physicalLocation_ms' => array(
        'solr_field' => 'mods_location_physicalLocation_ms',
        'display_label' => 'Repository',
        'hyperlink' => 1,
        'weight' => 17,
      ),
      'mods_accessCondition_useAndReproduction_ms' => array(
        'solr_field' => 'mods_accessCondition_useAndReproduction_ms',
        'display_label' => 'Rights',
        'hyperlink' => 0,
        'weight' => 18,
      ),
    ),
    'cmodels' => array(
      'umkc:bookCModel' => array(
        'cmodel' => 'umkc:bookCModel',
      ),
    ),
    'description' => array(
      'description_field' => 'mods_abstract_ms',
      'description_label' => 'Description',
    ),
    'name' => 'Books',
  ),
  'collection' => array(
    'fields' => array(
      'dc.title' => array(
        'solr_field' => 'dc.title',
        'display_label' => 'Collection Name',
        'hyperlink' => 0,
        'weight' => -8,
      ),
      'dc.contributor' => array(
        'solr_field' => 'dc.contributor',
        'display_label' => 'Creator',
        'hyperlink' => 1,
        'weight' => -7,
      ),
      'mods_abstract_ms' => array(
        'solr_field' => 'mods_abstract_ms',
        'display_label' => 'Description',
        'hyperlink' => 0,
        'weight' => -6,
      ),
      'mods_relatedItem_location_url_ms' => array(
        'solr_field' => 'mods_relatedItem_location_url_ms',
        'display_label' => 'Collection Details',
        'hyperlink' => 0,
        'weight' => -5,
      ),
      'mods_subject_authority_local_topic_ms' => array(
        'solr_field' => 'mods_subject_authority_local_topic_ms',
        'display_label' => 'Topics',
        'hyperlink' => 1,
        'weight' => -4,
      ),
      'mods_note_ms' => array(
        'solr_field' => 'mods_note_ms',
        'display_label' => 'Date Coverage',
        'hyperlink' => 0,
        'weight' => -3,
      ),
      'mods_location_physicalLocation_ms' => array(
        'solr_field' => 'mods_location_physicalLocation_ms',
        'display_label' => 'Repository',
        'hyperlink' => 1,
        'weight' => -2,
      ),
      'mods_accessCondition_useAndReproduction_ms' => array(
        'solr_field' => 'mods_accessCondition_useAndReproduction_ms',
        'display_label' => 'Rights',
        'hyperlink' => 0,
        'weight' => -1,
      ),
    ),
    'cmodels' => array(
      'islandora:collectionCModel' => array(
        'cmodel' => 'islandora:collectionCModel',
      ),
    ),
    'description' => array(
      'description_field' => 'mods_abstract_ms',
      'description_label' => 'Description',
    ),
    'name' => 'Collection',
  ),
  'graphics' => array(
    'fields' => array(
      'dc.title' => array(
        'solr_field' => 'dc.title',
        'display_label' => 'Title',
        'hyperlink' => 0,
        'weight' => 1,
      ),
      'mods_abstract_mt' => array(
        'solr_field' => 'mods_abstract_mt',
        'display_label' => 'Description',
        'hyperlink' => 0,
        'weight' => 2,
      ),
      'dc.subject' => array(
        'solr_field' => 'dc.subject',
        'display_label' => 'Subjects',
        'hyperlink' => 1,
        'weight' => 3,
      ),
      'mods_genre_authority_lctgm_ms' => array(
        'solr_field' => 'mods_genre_authority_lctgm_ms',
        'display_label' => 'Genres',
        'hyperlink' => 1,
        'weight' => 4,
      ),
      'mods_genre_authority_local_ms' => array(
        'solr_field' => 'mods_genre_authority_local_ms',
        'display_label' => 'Type',
        'hyperlink' => 1,
        'weight' => 5,
      ),
      'dc.date' => array(
        'solr_field' => 'dc.date',
        'display_label' => 'Date of Publication',
        'hyperlink' => 0,
        'weight' => 6,
      ),
      'mods_physicalDescription_extent_ms' => array(
        'solr_field' => 'mods_physicalDescription_extent_ms',
        'display_label' => 'Physical Description',
        'hyperlink' => 0,
        'weight' => 7,
      ),
      'mods_note_ms' => array(
        'solr_field' => 'mods_note_ms',
        'display_label' => 'Notes',
        'hyperlink' => 0,
        'weight' => 8,
      ),
      'mods_identifier_local_ms' => array(
        'solr_field' => 'mods_identifier_local_ms',
        'display_label' => 'Filename',
        'hyperlink' => 0,
        'weight' => 9,
      ),
      'mods_relatedItem_host_note_ms' => array(
        'solr_field' => 'mods_relatedItem_host_note_ms',
        'display_label' => 'Digital Collection',
        'hyperlink' => 1,
        'weight' => 10,
      ),
      'mods_location_physicalLocation_ms' => array(
        'solr_field' => 'mods_location_physicalLocation_ms',
        'display_label' => 'Repository',
        'hyperlink' => 1,
        'weight' => 11,
      ),
      'mods_accessCondition_useAndReproduction_ms' => array(
        'solr_field' => 'mods_accessCondition_useAndReproduction_ms',
        'display_label' => 'Rights',
        'hyperlink' => 0,
        'weight' => 12,
      ),
    ),
    'cmodels' => array(
      'umkc:graphicsCModel' => array(
        'cmodel' => 'umkc:graphicsCModel',
      ),
    ),
    'description' => array(
      'description_field' => 'mods_abstract_mt',
      'description_label' => 'Description',
    ),
    'name' => 'Graphics',
  ),
  'issues' => array(
    'fields' => array(
      'dc.title' => array(
        'solr_field' => 'dc.title',
        'display_label' => 'Issue No.',
        'hyperlink' => 0,
        'weight' => 1,
      ),
      'dc.date' => array(
        'solr_field' => 'dc.date',
        'display_label' => 'Date Published',
        'hyperlink' => 0,
        'weight' => 2,
      ),
    ),
    'cmodels' => array(
      'islandora:newspaperIssueCModel' => array(
        'cmodel' => 'islandora:newspaperIssueCModel',
      ),
    ),
    'description' => array(
      'description_field' => NULL,
      'description_label' => NULL,
    ),
    'name' => 'Issues',
  ),
  'manuscripts' => array(
    'fields' => array(
      'dc.title' => array(
        'solr_field' => 'dc.title',
        'display_label' => 'Title',
        'hyperlink' => 0,
        'weight' => 1,
      ),
      'mods_abstract_ms' => array(
        'solr_field' => 'mods_abstract_ms',
        'display_label' => 'Description',
        'hyperlink' => 0,
        'weight' => 2,
      ),
      'dc.subject' => array(
        'solr_field' => 'dc.subject',
        'display_label' => 'Subjects',
        'hyperlink' => 1,
        'weight' => 3,
      ),
      'mods_genre_authority_marcgt_ms' => array(
        'solr_field' => 'mods_genre_authority_marcgt_ms',
        'display_label' => 'Genres',
        'hyperlink' => 1,
        'weight' => 4,
      ),
      'mods_genre_authority_local_ms' => array(
        'solr_field' => 'mods_genre_authority_local_ms',
        'display_label' => 'Type',
        'hyperlink' => 1,
        'weight' => 5,
      ),
      'mods_physicalDescription_extent_ms' => array(
        'solr_field' => 'mods_physicalDescription_extent_ms',
        'display_label' => 'Physical Description',
        'hyperlink' => 0,
        'weight' => 6,
      ),
      'mods_note_ms' => array(
        'solr_field' => 'mods_note_ms',
        'display_label' => 'Notes',
        'hyperlink' => 0,
        'weight' => 7,
      ),
      'mods_relatedItem_host_note_ms' => array(
        'solr_field' => 'mods_relatedItem_host_note_ms',
        'display_label' => 'Digital Collection',
        'hyperlink' => 1,
        'weight' => 8,
      ),
      'mods_location_physicalLocation_ms' => array(
        'solr_field' => 'mods_location_physicalLocation_ms',
        'display_label' => 'Repository',
        'hyperlink' => 1,
        'weight' => 9,
      ),
      'mods_accessCondition_useAndReproduction_ms' => array(
        'solr_field' => 'mods_accessCondition_useAndReproduction_ms',
        'display_label' => 'Rights',
        'hyperlink' => 0,
        'weight' => 10,
      ),
    ),
    'cmodels' => array(
      'umkc:manuscriptsCModel' => array(
        'cmodel' => 'umkc:manuscriptsCModel',
      ),
    ),
    'description' => array(
      'description_field' => 'mods_abstract_ms',
      'description_label' => 'Description',
    ),
    'name' => 'Manuscripts',
  ),
  'mapsatlases' => array(
    'fields' => array(
      'mods_abstract_ms' => array(
        'solr_field' => 'mods_abstract_ms',
        'display_label' => 'Description',
        'hyperlink' => 0,
        'weight' => 1,
      ),
      'dc.title' => array(
        'solr_field' => 'dc.title',
        'display_label' => 'Title',
        'hyperlink' => 0,
        'weight' => 2,
      ),
      'mods_originInfo_edition_ms' => array(
        'solr_field' => 'mods_originInfo_edition_ms',
        'display_label' => 'Edition',
        'hyperlink' => 0,
        'weight' => 3,
      ),
      'mods_subject_authority_local_geographic_ms' => array(
        'solr_field' => 'mods_subject_authority_local_geographic_ms',
        'display_label' => 'Geographic Area',
        'hyperlink' => 1,
        'weight' => 4,
      ),
      'mods_subject_cartographics_scale_ms' => array(
        'solr_field' => 'mods_subject_cartographics_scale_ms',
        'display_label' => 'Scale',
        'hyperlink' => 0,
        'weight' => 5,
      ),
      'dc.subject' => array(
        'solr_field' => 'dc.subject',
        'display_label' => 'Subjects',
        'hyperlink' => 1,
        'weight' => 6,
      ),
      'mods_genre_authority_local_ms' => array(
        'solr_field' => 'mods_genre_authority_local_ms',
        'display_label' => 'Type',
        'hyperlink' => 1,
        'weight' => 7,
      ),
      'dc.contributor' => array(
        'solr_field' => 'dc.contributor',
        'display_label' => 'Contributors',
        'hyperlink' => 1,
        'weight' => 8,
      ),
      'mods_physicalDescription_extent_ms' => array(
        'solr_field' => 'mods_physicalDescription_extent_ms',
        'display_label' => 'Physical Description',
        'hyperlink' => 0,
        'weight' => 9,
      ),
      'mods_note_ms' => array(
        'solr_field' => 'mods_note_ms',
        'display_label' => 'Notes',
        'hyperlink' => 0,
        'weight' => 10,
      ),
      'mods_relatedItem_host_note_ms' => array(
        'solr_field' => 'mods_relatedItem_host_note_ms',
        'display_label' => 'Digital Collection',
        'hyperlink' => 1,
        'weight' => 11,
      ),
      'mods_location_physicalLocation_ms' => array(
        'solr_field' => 'mods_location_physicalLocation_ms',
        'display_label' => 'Repository',
        'hyperlink' => 1,
        'weight' => 12,
      ),
      'mods_accessCondition_useAndReproduction_ms' => array(
        'solr_field' => 'mods_accessCondition_useAndReproduction_ms',
        'display_label' => 'Rights',
        'hyperlink' => 0,
        'weight' => 13,
      ),
    ),
    'cmodels' => array(
      'umkc:mapsandatlasesCModel' => array(
        'cmodel' => 'umkc:mapsandatlasesCModel',
      ),
    ),
    'description' => array(
      'description_field' => 'mods_abstract_ms',
      'description_label' => 'Description',
    ),
    'name' => 'MapsAtlases',
  ),
  'newsletters' => array(
    'fields' => array(
      'dc.title' => array(
        'solr_field' => 'dc.title',
        'display_label' => 'Title',
        'hyperlink' => 0,
        'weight' => 1,
      ),
      'dc.contributor' => array(
        'solr_field' => 'dc.contributor',
        'display_label' => 'Contributors',
        'hyperlink' => 1,
        'weight' => 2,
      ),
      'mods_abstract_ms' => array(
        'solr_field' => 'mods_abstract_ms',
        'display_label' => 'Description',
        'hyperlink' => 0,
        'weight' => 3,
      ),
      'dc.date' => array(
        'solr_field' => 'dc.date',
        'display_label' => 'Date of Publication',
        'hyperlink' => 0,
        'weight' => 4,
      ),
      'mods_originInfo_publisher_ms' => array(
        'solr_field' => 'mods_originInfo_publisher_ms',
        'display_label' => 'Publisher',
        'hyperlink' => 0,
        'weight' => 5,
      ),
      'dc.subject' => array(
        'solr_field' => 'dc.subject',
        'display_label' => 'Subjects',
        'hyperlink' => 1,
        'weight' => 6,
      ),
      'mods_genre_authority_local_ms' => array(
        'solr_field' => 'mods_genre_authority_local_ms',
        'display_label' => 'Type',
        'hyperlink' => 1,
        'weight' => 7,
      ),
      'mods_originInfo_frequency_authority_marcfrequency_ms' => array(
        'solr_field' => 'mods_originInfo_frequency_authority_marcfrequency_ms',
        'display_label' => 'Frequency',
        'hyperlink' => 0,
        'weight' => 8,
      ),
      'mods_originInfo_frequency_ms' => array(
        'solr_field' => 'mods_originInfo_frequency_ms',
        'display_label' => 'Frequency',
        'hyperlink' => 0,
        'weight' => 9,
      ),
      'mods_physicalDescription_extent_ms' => array(
        'solr_field' => 'mods_physicalDescription_extent_ms',
        'display_label' => 'Original Format Details',
        'hyperlink' => 0,
        'weight' => 10,
      ),
      'mods_note_ms' => array(
        'solr_field' => 'mods_note_ms',
        'display_label' => 'Notes',
        'hyperlink' => 0,
        'weight' => 11,
      ),
      'mods_location_url_ms' => array(
        'solr_field' => 'mods_location_url_ms',
        'display_label' => 'URL',
        'hyperlink' => 0,
        'weight' => 12,
      ),
      'mods_relatedItem_host_note_ms' => array(
        'solr_field' => 'mods_relatedItem_host_note_ms',
        'display_label' => 'Digital Collection',
        'hyperlink' => 1,
        'weight' => 13,
      ),
      'mods_location_physicalLocation_ms' => array(
        'solr_field' => 'mods_location_physicalLocation_ms',
        'display_label' => 'Repository',
        'hyperlink' => 1,
        'weight' => 14,
      ),
      'mods_accessCondition_useAndReproduction_ms' => array(
        'solr_field' => 'mods_accessCondition_useAndReproduction_ms',
        'display_label' => 'Rights',
        'hyperlink' => 0,
        'weight' => 15,
      ),
    ),
    'cmodels' => array(
      'umkc:newslettersCModel' => array(
        'cmodel' => 'umkc:newslettersCModel',
      ),
    ),
    'description' => array(
      'description_field' => 'mods_abstract_ms',
      'description_label' => 'Description',
    ),
    'name' => 'Newsletters',
  ),
  'newspapers' => array(
    'fields' => array(
      'dc.title' => array(
        'solr_field' => 'dc.title',
        'display_label' => 'Title',
        'hyperlink' => 0,
        'weight' => 1,
      ),
      'dc.contributor' => array(
        'solr_field' => 'dc.contributor',
        'display_label' => 'Contributors',
        'hyperlink' => 1,
        'weight' => 2,
      ),
      'mods_abstract_ms' => array(
        'solr_field' => 'mods_abstract_ms',
        'display_label' => 'Description',
        'hyperlink' => 0,
        'weight' => 3,
      ),
      'dc.date' => array(
        'solr_field' => 'dc.date',
        'display_label' => 'Date of Publication',
        'hyperlink' => 0,
        'weight' => 4,
      ),
      'mods_originInfo_publisher_ms' => array(
        'solr_field' => 'mods_originInfo_publisher_ms',
        'display_label' => 'Publisher',
        'hyperlink' => 0,
        'weight' => 5,
      ),
      'dc.subject' => array(
        'solr_field' => 'dc.subject',
        'display_label' => 'Subjects',
        'hyperlink' => 1,
        'weight' => 6,
      ),
      'mods_genre_authority_local_ms' => array(
        'solr_field' => 'mods_genre_authority_local_ms',
        'display_label' => 'Type',
        'hyperlink' => 1,
        'weight' => 7,
      ),
      'mods_originInfo_frequency_authority_marcfrequency_ms' => array(
        'solr_field' => 'mods_originInfo_frequency_authority_marcfrequency_ms',
        'display_label' => 'Frequency',
        'hyperlink' => 0,
        'weight' => 8,
      ),
      'mods_originInfo_frequency_ms' => array(
        'solr_field' => 'mods_originInfo_frequency_ms',
        'display_label' => 'Frequency',
        'hyperlink' => 0,
        'weight' => 9,
      ),
      'mods_physicalDescription_extent_ms' => array(
        'solr_field' => 'mods_physicalDescription_extent_ms',
        'display_label' => 'Physical Description',
        'hyperlink' => 0,
        'weight' => 10,
      ),
      'mods_note_ms' => array(
        'solr_field' => 'mods_note_ms',
        'display_label' => 'Notes',
        'hyperlink' => 0,
        'weight' => 11,
      ),
      'mods_location_url_ms' => array(
        'solr_field' => 'mods_location_url_ms',
        'display_label' => 'URL',
        'hyperlink' => 0,
        'weight' => 12,
      ),
      'mods_relatedItem_host_note_ms' => array(
        'solr_field' => 'mods_relatedItem_host_note_ms',
        'display_label' => 'Digital Collection',
        'hyperlink' => 1,
        'weight' => 13,
      ),
      'mods_location_physicalLocation_ms' => array(
        'solr_field' => 'mods_location_physicalLocation_ms',
        'display_label' => 'Repository',
        'hyperlink' => 1,
        'weight' => 14,
      ),
      'mods_accessCondition_useAndReproduction_ms' => array(
        'solr_field' => 'mods_accessCondition_useAndReproduction_ms',
        'display_label' => 'Rights',
        'hyperlink' => 0,
        'weight' => 15,
      ),
    ),
    'cmodels' => array(
      'umkc:newspapersCModel' => array(
        'cmodel' => 'umkc:newspapersCModel',
      ),
    ),
    'description' => array(
      'description_field' => 'mods_abstract_ms',
      'description_label' => 'Description',
    ),
    'name' => 'Newspapers',
  ),
  'pamphlets' => array(
    'fields' => array(
      'dc.title' => array(
        'solr_field' => 'dc.title',
        'display_label' => 'Pamphlet',
        'hyperlink' => 0,
        'weight' => 1,
      ),
      'mods_abstract_ms' => array(
        'solr_field' => 'mods_abstract_ms',
        'display_label' => 'Description',
        'hyperlink' => 0,
        'weight' => 2,
      ),
      'dc.contributor' => array(
        'solr_field' => 'dc.contributor',
        'display_label' => 'Contributors',
        'hyperlink' => 1,
        'weight' => 3,
      ),
      'dc.subject' => array(
        'solr_field' => 'dc.subject',
        'display_label' => 'Subjects',
        'hyperlink' => 1,
        'weight' => 4,
      ),
      'mods_relatedItem_host_note_ms' => array(
        'solr_field' => 'mods_relatedItem_host_note_ms',
        'display_label' => 'Digital Collection',
        'hyperlink' => 1,
        'weight' => 5,
      ),
      'mods_location_physicalLocation_ms' => array(
        'solr_field' => 'mods_location_physicalLocation_ms',
        'display_label' => 'Repository',
        'hyperlink' => 1,
        'weight' => 6,
      ),
      'mods_note_mdt' => array(
        'solr_field' => 'mods_note_mdt',
        'display_label' => 'Date',
        'hyperlink' => 0,
        'weight' => 7,
      ),
    ),
    'cmodels' => array(
      'umkc:pamphletsCModel' => array(
        'cmodel' => 'umkc:pamphletsCModel',
      ),
    ),
    'description' => array(
      'description_field' => 'mods_abstract_ms',
      'description_label' => 'Description',
    ),
    'name' => 'Pamphlets',
  ),
  'photographs' => array(
    'fields' => array(
      'dc.title' => array(
        'solr_field' => 'dc.title',
        'display_label' => 'Caption',
        'hyperlink' => 0,
        'weight' => -16,
      ),
      'mods_abstract_ms' => array(
        'solr_field' => 'mods_abstract_ms',
        'display_label' => 'Description',
        'hyperlink' => 0,
        'weight' => -15,
      ),
      'dc.contributor' => array(
        'solr_field' => 'dc.contributor',
        'display_label' => 'Photographer',
        'hyperlink' => 1,
        'weight' => -14,
      ),
      'mods_type_date_note_ms' => array(
        'solr_field' => 'mods_type_date_note_ms',
        'display_label' => 'Date Published',
        'hyperlink' => 0,
        'weight' => -13,
      ),
      'mods_originInfo_publisher_ms' => array(
        'solr_field' => 'mods_originInfo_publisher_ms',
        'display_label' => 'Image Credit',
        'hyperlink' => 0,
        'weight' => -12,
      ),
      'dc.subject' => array(
        'solr_field' => 'dc.subject',
        'display_label' => 'Subjects',
        'hyperlink' => 1,
        'weight' => -11,
      ),
      'mods_subject_authority_local_temporal_ms' => array(
        'solr_field' => 'mods_subject_authority_local_temporal_ms',
        'display_label' => 'Time Period',
        'hyperlink' => 1,
        'weight' => -10,
      ),
      'mods_subject_authority_local_geographic_ms' => array(
        'solr_field' => 'mods_subject_authority_local_geographic_ms',
        'display_label' => 'Geographic Area',
        'hyperlink' => 1,
        'weight' => -9,
      ),
      'mods_note_ms' => array(
        'solr_field' => 'mods_note_ms',
        'display_label' => 'Notes',
        'hyperlink' => 0,
        'weight' => -8,
      ),
      'mods_physicalDescription_extent_ms' => array(
        'solr_field' => 'mods_physicalDescription_extent_ms',
        'display_label' => 'Extent of Original',
        'hyperlink' => 0,
        'weight' => -7,
      ),
      'mods_relatedItem_host_note_ms' => array(
        'solr_field' => 'mods_relatedItem_host_note_ms',
        'display_label' => 'Digital Collection',
        'hyperlink' => 1,
        'weight' => -6,
      ),
      'mods_identifier_local_ms' => array(
        'solr_field' => 'mods_identifier_local_ms',
        'display_label' => 'Filename',
        'hyperlink' => 0,
        'weight' => -5,
      ),
      'mods_genre_authority_lctgm_ms' => array(
        'solr_field' => 'mods_genre_authority_lctgm_ms',
        'display_label' => 'Genres',
        'hyperlink' => 1,
        'weight' => -4,
      ),
      'mods_genre_authority_local_ms' => array(
        'solr_field' => 'mods_genre_authority_local_ms',
        'display_label' => 'Type',
        'hyperlink' => 1,
        'weight' => -3,
      ),
      'mods_location_physicalLocation_ms' => array(
        'solr_field' => 'mods_location_physicalLocation_ms',
        'display_label' => 'Repository',
        'hyperlink' => 1,
        'weight' => -2,
      ),
      'mods_accessCondition_useAndReproduction_ms' => array(
        'solr_field' => 'mods_accessCondition_useAndReproduction_ms',
        'display_label' => 'Rights',
        'hyperlink' => 0,
        'weight' => -1,
      ),
    ),
    'cmodels' => array(
      'umkc:photographsCModel' => array(
        'cmodel' => 'umkc:photographsCModel',
      ),
    ),
    'description' => array(
      'description_field' => 'mods_abstract_ms',
      'description_label' => 'Description',
    ),
    'name' => 'Photographs',
  ),
  'posters' => array(
    'fields' => array(
      'dc.title' => array(
        'solr_field' => 'dc.title',
        'display_label' => 'Title',
        'hyperlink' => 0,
        'weight' => -5,
      ),
      'dc.contributor' => array(
        'solr_field' => 'dc.contributor',
        'display_label' => 'Contributor',
        'hyperlink' => 1,
        'weight' => -4,
      ),
      'mods_abstract_ms' => array(
        'solr_field' => 'mods_abstract_ms',
        'display_label' => 'Description',
        'hyperlink' => 0,
        'weight' => -3,
      ),
      'dc.subject' => array(
        'solr_field' => 'dc.subject',
        'display_label' => 'Subjects',
        'hyperlink' => 1,
        'weight' => -2,
      ),
      'mods_relatedItem_host_note_ms' => array(
        'solr_field' => 'mods_relatedItem_host_note_ms',
        'display_label' => 'Digital Collection',
        'hyperlink' => 1,
        'weight' => -1,
      ),
    ),
    'cmodels' => array(
      'umkc:postersCModel' => array(
        'cmodel' => 'umkc:postersCModel',
      ),
    ),
    'description' => array(
      'description_field' => 'mods_abstract_ms',
      'description_label' => 'Description',
    ),
    'name' => 'Poster',
  ),
  'scrapbooks' => array(
    'fields' => array(
      'dc.title' => array(
        'solr_field' => 'dc.title',
        'display_label' => 'Title',
        'hyperlink' => 0,
        'weight' => -13,
      ),
      'mods_titleInfo_subTitle_ms' => array(
        'solr_field' => 'mods_titleInfo_subTitle_ms',
        'display_label' => 'Subtitle',
        'hyperlink' => 0,
        'weight' => -12,
      ),
      'mods_abstract_ms' => array(
        'solr_field' => 'mods_abstract_ms',
        'display_label' => 'Description',
        'hyperlink' => 0,
        'weight' => -11,
      ),
      'dc.contributor' => array(
        'solr_field' => 'dc.contributor',
        'display_label' => 'Contributors',
        'hyperlink' => 1,
        'weight' => -10,
      ),
      'dc.subject' => array(
        'solr_field' => 'dc.subject',
        'display_label' => 'Subjects',
        'hyperlink' => 1,
        'weight' => -9,
      ),
      'mods_subject_authority_local_geographic_ms' => array(
        'solr_field' => 'mods_subject_authority_local_geographic_ms',
        'display_label' => 'Geographic Coverage',
        'hyperlink' => 1,
        'weight' => -8,
      ),
      'mods_subject_authority_local_temporal_ms' => array(
        'solr_field' => 'mods_subject_authority_local_temporal_ms',
        'display_label' => 'Date Coverage',
        'hyperlink' => 1,
        'weight' => -7,
      ),
      'mods_genre_authority_local_ms' => array(
        'solr_field' => 'mods_genre_authority_local_ms',
        'display_label' => 'Type',
        'hyperlink' => 1,
        'weight' => -6,
      ),
      'mods_physicalDescription_extent_ms' => array(
        'solr_field' => 'mods_physicalDescription_extent_ms',
        'display_label' => 'Physical Description',
        'hyperlink' => 0,
        'weight' => -5,
      ),
      'mods_note_ms' => array(
        'solr_field' => 'mods_note_ms',
        'display_label' => 'Notes',
        'hyperlink' => 0,
        'weight' => -4,
      ),
      'mods_relatedItem_host_note_ms' => array(
        'solr_field' => 'mods_relatedItem_host_note_ms',
        'display_label' => 'Digital Collection',
        'hyperlink' => 1,
        'weight' => -3,
      ),
      'mods_location_physicalLocation_ms' => array(
        'solr_field' => 'mods_location_physicalLocation_ms',
        'display_label' => 'Repository',
        'hyperlink' => 1,
        'weight' => -2,
      ),
      'mods_accessCondition_useAndReproduction_ms' => array(
        'solr_field' => 'mods_accessCondition_useAndReproduction_ms',
        'display_label' => 'Rights',
        'hyperlink' => 0,
        'weight' => -1,
      ),
    ),
    'cmodels' => array(
      'umkc:scrapbooksCModel' => array(
        'cmodel' => 'umkc:scrapbooksCModel',
      ),
    ),
    'description' => array(
      'description_field' => 'mods_abstract_ms',
      'description_label' => 'Description',
    ),
    'name' => 'Scrapbooks',
  ),
  'sheetmusic' => array(
    'fields' => array(
      'dc.title' => array(
        'solr_field' => 'dc.title',
        'display_label' => 'Title of Work',
        'hyperlink' => 0,
        'weight' => -14,
      ),
      'dc.contributor' => array(
        'solr_field' => 'dc.contributor',
        'display_label' => 'Composer/Arranger',
        'hyperlink' => 1,
        'weight' => -13,
      ),
      'mods_abstract_ms' => array(
        'solr_field' => 'mods_abstract_ms',
        'display_label' => 'Description',
        'hyperlink' => 0,
        'weight' => -12,
      ),
      'dc.subject' => array(
        'solr_field' => 'dc.subject',
        'display_label' => 'Subjects',
        'hyperlink' => 1,
        'weight' => -11,
      ),
      'mods_subject_authority_local_geographic_ms' => array(
        'solr_field' => 'mods_subject_authority_local_geographic_ms',
        'display_label' => 'Geographic Coverage',
        'hyperlink' => 1,
        'weight' => -10,
      ),
      'mods_subject_authority_local_temporal_ms' => array(
        'solr_field' => 'mods_subject_authority_local_temporal_ms',
        'display_label' => 'Time Period',
        'hyperlink' => 1,
        'weight' => -9,
      ),
      'mods_genre_authority_local_ms' => array(
        'solr_field' => 'mods_genre_authority_local_ms',
        'display_label' => 'Type',
        'hyperlink' => 1,
        'weight' => -8,
      ),
      'dc.date' => array(
        'solr_field' => 'dc.date',
        'display_label' => 'Date of Publication',
        'hyperlink' => 0,
        'weight' => -7,
      ),
      'mods_originInfo_publisher_ms' => array(
        'solr_field' => 'mods_originInfo_publisher_ms',
        'display_label' => 'Publisher',
        'hyperlink' => 0,
        'weight' => -6,
      ),
      'mods_physicalDescription_extent_ms' => array(
        'solr_field' => 'mods_physicalDescription_extent_ms',
        'display_label' => 'Physical Description',
        'hyperlink' => 0,
        'weight' => -5,
      ),
      'mods_note_ms' => array(
        'solr_field' => 'mods_note_ms',
        'display_label' => 'Notes',
        'hyperlink' => 0,
        'weight' => -4,
      ),
      'mods_relatedItem_host_note_ms' => array(
        'solr_field' => 'mods_relatedItem_host_note_ms',
        'display_label' => 'Digital Collection',
        'hyperlink' => 1,
        'weight' => -3,
      ),
      'mods_location_physicalLocation_ms' => array(
        'solr_field' => 'mods_location_physicalLocation_ms',
        'display_label' => 'Repository',
        'hyperlink' => 1,
        'weight' => -2,
      ),
      'mods_accessCondition_useAndReproduction_ms' => array(
        'solr_field' => 'mods_accessCondition_useAndReproduction_ms',
        'display_label' => 'Rights',
        'hyperlink' => 0,
        'weight' => -1,
      ),
    ),
    'cmodels' => array(
      'umkc:sheetmusicCModel' => array(
        'cmodel' => 'umkc:sheetmusicCModel',
      ),
    ),
    'description' => array(
      'description_field' => 'mods_abstract_ms',
      'description_label' => 'Description',
    ),
    'name' => 'Sheetmusic',
  ),
  'soundrecording' => array(
    'fields' => array(
      'dc.title' => array(
        'solr_field' => 'dc.title',
        'display_label' => 'Title ',
        'hyperlink' => 0,
        'weight' => -19,
      ),
      'dc.contributor' => array(
        'solr_field' => 'dc.contributor',
        'display_label' => 'Names',
        'hyperlink' => 1,
        'weight' => -18,
      ),
      'mods_abstract_ms' => array(
        'solr_field' => 'mods_abstract_ms',
        'display_label' => 'Description',
        'hyperlink' => 0,
        'weight' => -17,
      ),
      'mods_tableOfContents_ms' => array(
        'solr_field' => 'mods_tableOfContents_ms',
        'display_label' => 'Contents',
        'hyperlink' => 0,
        'weight' => -16,
      ),
      'dc.subject' => array(
        'solr_field' => 'dc.subject',
        'display_label' => 'Subjects',
        'hyperlink' => 1,
        'weight' => -15,
      ),
      'mods_genre_authority_lcgft_ms' => array(
        'solr_field' => 'mods_genre_authority_lcgft_ms',
        'display_label' => 'Genres',
        'hyperlink' => 1,
        'weight' => -14,
      ),
      'mods_genre_authority_local_ms' => array(
        'solr_field' => 'mods_genre_authority_local_ms',
        'display_label' => 'Type',
        'hyperlink' => 1,
        'weight' => -13,
      ),
      'dc.date' => array(
        'solr_field' => 'dc.date',
        'display_label' => 'Dates',
        'hyperlink' => 0,
        'weight' => -12,
      ),
      'mods_originInfo_edition_ms' => array(
        'solr_field' => 'mods_originInfo_edition_ms',
        'display_label' => 'Version',
        'hyperlink' => 0,
        'weight' => -11,
      ),
      'mods_note_creation/production credits_ms' => array(
        'solr_field' => 'mods_note_creation/production credits_ms',
        'display_label' => 'Creation/Production Credits',
        'hyperlink' => 0,
        'weight' => -10,
      ),
      'mods_note_performers_ms' => array(
        'solr_field' => 'mods_note_performers_ms',
        'display_label' => 'Performers/Participants',
        'hyperlink' => 0,
        'weight' => -9,
      ),
      'mods_physicalDescription_extent_ms' => array(
        'solr_field' => 'mods_physicalDescription_extent_ms',
        'display_label' => 'Original Format Details',
        'hyperlink' => 0,
        'weight' => -8,
      ),
      'mods_note_ms' => array(
        'solr_field' => 'mods_note_ms',
        'display_label' => 'Notes',
        'hyperlink' => 0,
        'weight' => -7,
      ),
      'mods_identifier_issue number_ms' => array(
        'solr_field' => 'mods_identifier_issue number_ms',
        'display_label' => 'Issue/Matrix Number',
        'hyperlink' => 0,
        'weight' => -6,
      ),
      'mods_identifier_matrix number_ms' => array(
        'solr_field' => 'mods_identifier_matrix number_ms',
        'display_label' => 'Issue/Matrix Number',
        'hyperlink' => 0,
        'weight' => -5,
      ),
      'mods_identifier_local_ms' => array(
        'solr_field' => 'mods_identifier_local_ms',
        'display_label' => 'Filename',
        'hyperlink' => 0,
        'weight' => -4,
      ),
      'mods_relatedItem_host_note_ms' => array(
        'solr_field' => 'mods_relatedItem_host_note_ms',
        'display_label' => 'Digital Collection',
        'hyperlink' => 1,
        'weight' => -3,
      ),
      'mods_location_physicalLocation_ms' => array(
        'solr_field' => 'mods_location_physicalLocation_ms',
        'display_label' => 'Repository',
        'hyperlink' => 1,
        'weight' => -2,
      ),
      'mods_accessCondition_useAndReproduction_ms' => array(
        'solr_field' => 'mods_accessCondition_useAndReproduction_ms',
        'display_label' => 'Rights',
        'hyperlink' => 0,
        'weight' => -1,
      ),
    ),
    'cmodels' => array(
      'umkc:soundCModel' => array(
        'cmodel' => 'umkc:soundCModel',
      ),
    ),
    'description' => array(
      'description_field' => 'mods_abstract_ms',
      'description_label' => 'Description',
    ),
    'name' => 'Soundrecordings',
  ),
  'videorecordings' => array(
    'fields' => array(
      'dc.title' => array(
        'solr_field' => 'dc.title',
        'display_label' => 'Title',
        'hyperlink' => 0,
        'weight' => -14,
      ),
      'dc.contributor' => array(
        'solr_field' => 'dc.contributor',
        'display_label' => 'Performers/Participants',
        'hyperlink' => 1,
        'weight' => -13,
      ),
      'mods_abstract_ms' => array(
        'solr_field' => 'mods_abstract_ms',
        'display_label' => 'Description',
        'hyperlink' => 0,
        'weight' => -12,
      ),
      'dc.subject' => array(
        'solr_field' => 'dc.subject',
        'display_label' => 'Subjects',
        'hyperlink' => 1,
        'weight' => -11,
      ),
      'mods_genre_authority_lcgft_ms' => array(
        'solr_field' => 'mods_genre_authority_lcgft_ms',
        'display_label' => 'Genres',
        'hyperlink' => 1,
        'weight' => -10,
      ),
      'mods_genre_authority_local_ms' => array(
        'solr_field' => 'mods_genre_authority_local_ms',
        'display_label' => 'Type',
        'hyperlink' => 1,
        'weight' => -9,
      ),
      'dc.date' => array(
        'solr_field' => 'dc.date',
        'display_label' => 'Dates',
        'hyperlink' => 0,
        'weight' => -8,
      ),
      'mods_originInfo_publisher_ms' => array(
        'solr_field' => 'mods_originInfo_publisher_ms',
        'display_label' => 'Publisher',
        'hyperlink' => 0,
        'weight' => -7,
      ),
      'mods_physicalDescription_extent_ms' => array(
        'solr_field' => 'mods_physicalDescription_extent_ms',
        'display_label' => 'Physical Description',
        'hyperlink' => 0,
        'weight' => -6,
      ),
      'mods_note_ms' => array(
        'solr_field' => 'mods_note_ms',
        'display_label' => 'Notes',
        'hyperlink' => 0,
        'weight' => -5,
      ),
      'mods_identifier_local_ms' => array(
        'solr_field' => 'mods_identifier_local_ms',
        'display_label' => 'Filename',
        'hyperlink' => 0,
        'weight' => -4,
      ),
      'mods_relatedItem_host_note_ms' => array(
        'solr_field' => 'mods_relatedItem_host_note_ms',
        'display_label' => 'Digital Collection',
        'hyperlink' => 1,
        'weight' => -3,
      ),
      'mods_location_physicalLocation_ms' => array(
        'solr_field' => 'mods_location_physicalLocation_ms',
        'display_label' => 'Repository',
        'hyperlink' => 1,
        'weight' => -2,
      ),
      'mods_accessCondition_useAndReproduction_ms' => array(
        'solr_field' => 'mods_accessCondition_useAndReproduction_ms',
        'display_label' => 'Rights',
        'hyperlink' => 0,
        'weight' => -1,
      ),
    ),
    'cmodels' => array(
      'umkc:videoCModel' => array(
        'cmodel' => 'umkc:videoCModel',
      ),
    ),
    'description' => array(
      'description_field' => 'mods_abstract_ms',
      'description_label' => 'Description',
    ),
    'name' => 'Videorecordings',
  ),
  'yearbooks' => array(
    'fields' => array(
      'dc.title' => array(
        'solr_field' => 'dc.title',
        'display_label' => 'School',
        'hyperlink' => 0,
        'weight' => -11,
      ),
      'dc.date' => array(
        'solr_field' => 'dc.date',
        'display_label' => 'Date',
        'hyperlink' => 0,
        'weight' => -10,
      ),
      'mods_abstract_ms' => array(
        'solr_field' => 'mods_abstract_ms',
        'display_label' => 'Description',
        'hyperlink' => 0,
        'weight' => -9,
      ),
      'dc.contributor' => array(
        'solr_field' => 'dc.contributor',
        'display_label' => 'Contributors',
        'hyperlink' => 1,
        'weight' => -8,
      ),
      'dc.subject' => array(
        'solr_field' => 'dc.subject',
        'display_label' => 'Subjects',
        'hyperlink' => 1,
        'weight' => -7,
      ),
      'mods_genre_authority_local_ms' => array(
        'solr_field' => 'mods_genre_authority_local_ms',
        'display_label' => 'Type',
        'hyperlink' => 1,
        'weight' => -6,
      ),
      'mods_physicalDescription_extent_ms' => array(
        'solr_field' => 'mods_physicalDescription_extent_ms',
        'display_label' => 'Physical Description',
        'hyperlink' => 0,
        'weight' => -5,
      ),
      'mods_note_ms' => array(
        'solr_field' => 'mods_note_ms',
        'display_label' => 'Notes',
        'hyperlink' => 0,
        'weight' => -4,
      ),
      'mods_relatedItem_host_note_ms' => array(
        'solr_field' => 'mods_relatedItem_host_note_ms',
        'display_label' => 'Digital Collection',
        'hyperlink' => 1,
        'weight' => -3,
      ),
      'mods_location_physicalLocation_ms' => array(
        'solr_field' => 'mods_location_physicalLocation_ms',
        'display_label' => 'Repository',
        'hyperlink' => 1,
        'weight' => -2,
      ),
      'mods_accessCondition_useAndReproduction_ms' => array(
        'solr_field' => 'mods_accessCondition_useAndReproduction_ms',
        'display_label' => 'Rights',
        'hyperlink' => 0,
        'weight' => -1,
      ),
    ),
    'cmodels' => array(
      'umkc:yearbooksCModel' => array(
        'cmodel' => 'umkc:yearbooksCModel',
      ),
    ),
    'description' => array(
      'description_field' => 'mods_abstract_ms',
      'description_label' => 'Description',
    ),
    'name' => 'Yearbooks',
  ),
);
}
