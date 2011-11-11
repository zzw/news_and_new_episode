<?php
/**
 * @file
 * news_and_new_episode.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function news_and_new_episode_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function news_and_new_episode_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_node_info().
 */
function news_and_new_episode_node_info() {
  $items = array(
    'animeclub_news' => array(
      'name' => t('AnimeClub_News'),
      'base' => 'node_content',
      'description' => t('动漫近日新闻'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'animeclub_series' => array(
      'name' => t('AnimeClub_Series'),
      'base' => 'node_content',
      'description' => t('最近的动漫更新'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
