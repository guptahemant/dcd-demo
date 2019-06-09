<?php

/**
 * @file
 * Enable various splits for this site.
 */

// Here this variable needs to be configured based on hosting, for example using site URL.
$env = 'local';

if(isset($env)) {
  $config["config_split.config_split.$env"]['status'] = TRUE;
}

/**
 * Site directory detection.
 */
if (!isset($site_path)) {
  $site_path = \Drupal::service('site.path');
}
$site_dir = str_replace('sites/', '', $site_path);
$site_dir = str_replace('-', '_', $site_dir);

/**
 * Set multisite split.
 */
$config["config_split.config_split.$site_dir"]['status'] = TRUE;
