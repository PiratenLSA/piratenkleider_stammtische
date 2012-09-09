<?php
/**
 * @file
 * piratenkleider_stammtische.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function piratenkleider_stammtische_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "flexslider" && $api == "flexslider_default_preset") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "openlayers" && $api == "openlayers_maps") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function piratenkleider_stammtische_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function piratenkleider_stammtische_image_default_styles() {
  $styles = array();

  // Exported image style: stammtisch.
  $styles['stammtisch'] = array(
    'name' => 'stammtisch',
    'effects' => array(
      3 => array(
        'label' => 'Skalieren und zuschneiden',
        'help' => 'Skalieren und zuschneiden wird das Seitenverhältnis des ursprünglichen Bildes erhalten, und dann die überstehenden Ränder entfernen. Dies ist besonders nützlich für die Erstellung von perfekt quadratischen Vorschaubildern ohne Verzerrung des Bildes.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '300',
          'height' => '200',
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function piratenkleider_stammtische_node_info() {
  $items = array(
    'stammtisch' => array(
      'name' => t('Stammtisch'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  return $items;
}
