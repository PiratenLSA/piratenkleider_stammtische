<?php
/**
 * @file
 * piratenkleider_stammtische.openlayers_maps.inc
 */

/**
 * Implements hook_openlayers_maps().
 */
function piratenkleider_stammtische_openlayers_maps() {
  $export = array();

  $openlayers_maps = new stdClass();
  $openlayers_maps->disabled = FALSE; /* Edit this to true to make a default openlayers_maps disabled initially */
  $openlayers_maps->api_version = 1;
  $openlayers_maps->name = 'stammtisch_map';
  $openlayers_maps->title = 'Stammtisch Map';
  $openlayers_maps->description = 'Map Stammtisch';
  $openlayers_maps->data = array(
    'width' => 'auto',
    'height' => '300px',
    'image_path' => 'sites/all/modules/openlayers/themes/default_dark/img/',
    'css_path' => 'sites/all/modules/openlayers/themes/default_dark/style.css',
    'proxy_host' => '',
    'hide_empty_map' => 0,
    'center' => array(
      'initial' => array(
        'centerpoint' => '',
        'zoom' => '16',
      ),
      'restrict' => array(
        'restrictextent' => 0,
        'restrictedExtent' => '',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_geofield' => array(
        'feature_types' => array(
          'point' => 'point',
          'path' => 0,
          'polygon' => 0,
        ),
        'allow_edit' => 1,
      ),
      'openlayers_behavior_keyboarddefaults' => array(),
      'openlayers_behavior_attribution' => array(
        'seperator' => '',
      ),
      'openlayers_behavior_layerswitcher' => array(
        'ascending' => 1,
        'roundedCorner' => 1,
        'roundedCornerColor' => '#222222',
      ),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 1,
        'zoomBoxEnabled' => 1,
        'documentDrag' => 0,
      ),
      'openlayers_behavior_panzoombar' => array(
        'zoomWorldIcon' => 0,
        'panIcons' => 1,
      ),
      'openlayers_behavior_zoomtolayer' => array(
        'zoomtolayer' => 'geofield_formatter',
        'point_zoom_level' => '16',
      ),
    ),
    'default_layer' => 'osm_mapnik',
    'layers' => array(
      'google_satellite' => 'google_satellite',
      'google_normal' => 'google_normal',
      'osm_mapnik' => 'osm_mapnik',
      'geofield_formatter' => 'geofield_formatter',
    ),
    'layer_weight' => array(
      'geofield_formatter' => '0',
      'stammtische_overlay_openlayers_1' => '0',
      'openlayers_geojson_picture_this' => '0',
    ),
    'layer_styles' => array(
      'openlayers_geojson_picture_this' => '0',
      'stammtische_overlay_openlayers_1' => '0',
      'geofield_formatter' => 'default_marker_red',
    ),
    'layer_styles_select' => array(
      'openlayers_geojson_picture_this' => '0',
      'stammtische_overlay_openlayers_1' => '0',
      'geofield_formatter' => 'default_marker_red',
    ),
    'layer_activated' => array(
      'geofield_formatter' => 'geofield_formatter',
      'openlayers_geojson_picture_this' => 0,
      'stammtische_overlay_openlayers_1' => 0,
    ),
    'layer_switcher' => array(
      'geofield_formatter' => 0,
      'openlayers_geojson_picture_this' => 0,
      'stammtische_overlay_openlayers_1' => 0,
    ),
    'projection' => '900913',
    'displayProjection' => '4326',
    'styles' => array(
      'default' => 'default',
      'select' => 'default_select',
      'temporary' => 'default',
    ),
  );
  $export['stammtisch_map'] = $openlayers_maps;

  $openlayers_maps = new stdClass();
  $openlayers_maps->disabled = FALSE; /* Edit this to true to make a default openlayers_maps disabled initially */
  $openlayers_maps->api_version = 1;
  $openlayers_maps->name = 'stammtisch_set_map';
  $openlayers_maps->title = 'Stammtisch Set Map';
  $openlayers_maps->description = 'Map Stammtisch';
  $openlayers_maps->data = array(
    'width' => 'auto',
    'height' => '400px',
    'image_path' => 'sites/all/modules/openlayers/themes/default_dark/img/',
    'css_path' => 'sites/all/modules/openlayers/themes/default_dark/style.css',
    'proxy_host' => '',
    'hide_empty_map' => 0,
    'center' => array(
      'initial' => array(
        'centerpoint' => '11.722156551201, 51.925388914289',
        'zoom' => '7',
      ),
      'restrict' => array(
        'restrictextent' => 0,
        'restrictedExtent' => '',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_geofield' => array(
        'feature_types' => array(
          'point' => 'point',
          'path' => 0,
          'polygon' => 0,
        ),
        'allow_edit' => 1,
      ),
      'openlayers_behavior_keyboarddefaults' => array(),
      'openlayers_behavior_attribution' => array(
        'seperator' => '',
      ),
      'openlayers_behavior_layerswitcher' => array(
        'ascending' => 1,
        'roundedCorner' => 1,
        'roundedCornerColor' => '#222222',
      ),
      'openlayers_behavior_dragpan' => array(),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 1,
        'zoomBoxEnabled' => 1,
        'documentDrag' => 1,
      ),
      'openlayers_behavior_panzoombar' => array(
        'zoomWorldIcon' => 0,
        'panIcons' => 1,
      ),
    ),
    'default_layer' => 'osm_mapnik',
    'layers' => array(
      'google_satellite' => 'google_satellite',
      'google_normal' => 'google_normal',
      'osm_mapnik' => 'osm_mapnik',
      'geofield_formatter' => 'geofield_formatter',
    ),
    'layer_weight' => array(
      'geofield_formatter' => '0',
      'openlayers_geojson_picture_this' => '0',
    ),
    'layer_styles' => array(
      'openlayers_geojson_picture_this' => '0',
      'geofield_formatter' => 'default_marker_red',
    ),
    'layer_styles_select' => array(
      'openlayers_geojson_picture_this' => '0',
      'geofield_formatter' => 'default_marker_red',
    ),
    'layer_activated' => array(
      'geofield_formatter' => 'geofield_formatter',
      'openlayers_geojson_picture_this' => 0,
    ),
    'layer_switcher' => array(
      'geofield_formatter' => 0,
      'openlayers_geojson_picture_this' => 0,
    ),
    'projection' => '900913',
    'displayProjection' => '4326',
    'styles' => array(
      'default' => 'default_marker_red',
      'select' => 'default_marker_red',
      'temporary' => 'default_marker_red',
    ),
  );
  $export['stammtisch_set_map'] = $openlayers_maps;

  $openlayers_maps = new stdClass();
  $openlayers_maps->disabled = FALSE; /* Edit this to true to make a default openlayers_maps disabled initially */
  $openlayers_maps->api_version = 1;
  $openlayers_maps->name = 'stammtische_uebersicht';
  $openlayers_maps->title = 'Stammtische Übersicht';
  $openlayers_maps->description = 'Übersicht von Stammtischen';
  $openlayers_maps->data = array(
    'width' => 'auto',
    'height' => '400px',
    'image_path' => 'sites/all/modules/openlayers/themes/default_dark/img/',
    'css_path' => 'sites/all/modules/openlayers/themes/default_dark/style.css',
    'proxy_host' => '',
    'hide_empty_map' => 0,
    'center' => array(
      'initial' => array(
        'centerpoint' => '11.737443952814, 52.006063997702',
        'zoom' => '7',
      ),
      'restrict' => array(
        'restrictextent' => 0,
        'restrictedExtent' => '',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_keyboarddefaults' => array(),
      'openlayers_behavior_attribution' => array(
        'seperator' => '',
      ),
      'openlayers_behavior_layerswitcher' => array(
        'ascending' => 1,
        'roundedCorner' => 1,
        'roundedCornerColor' => '#222222',
      ),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 1,
        'zoomBoxEnabled' => 1,
        'documentDrag' => 0,
      ),
      'openlayers_behavior_panzoombar' => array(
        'zoomWorldIcon' => 0,
        'panIcons' => 1,
      ),
    ),
    'default_layer' => 'osm_mapnik',
    'layers' => array(
      'mapquest_osm' => 'mapquest_osm',
      'osm_mapnik' => 'osm_mapnik',
      'stammtische_overlay_openlayers_1' => 'stammtische_overlay_openlayers_1',
    ),
    'layer_weight' => array(
      'stammtische_overlay_openlayers_1' => '0',
      'openlayers_geojson_picture_this' => '0',
      'geofield_formatter' => '0',
    ),
    'layer_styles' => array(
      'geofield_formatter' => '0',
      'openlayers_geojson_picture_this' => '0',
      'stammtische_overlay_openlayers_1' => 'default_marker_red',
    ),
    'layer_styles_select' => array(
      'geofield_formatter' => '0',
      'openlayers_geojson_picture_this' => '0',
      'stammtische_overlay_openlayers_1' => 'default_marker_red',
    ),
    'layer_activated' => array(
      'stammtische_overlay_openlayers_1' => 'stammtische_overlay_openlayers_1',
      'geofield_formatter' => 0,
      'openlayers_geojson_picture_this' => 0,
    ),
    'layer_switcher' => array(
      'geofield_formatter' => 0,
      'openlayers_geojson_picture_this' => 0,
      'stammtische_overlay_openlayers_1' => 0,
    ),
    'projection' => '900913',
    'displayProjection' => '4326',
    'styles' => array(
      'default' => 'default_marker_red',
      'select' => 'default_marker_red',
      'temporary' => 'default_marker_red',
    ),
  );
  $export['stammtische_uebersicht'] = $openlayers_maps;

  return $export;
}
