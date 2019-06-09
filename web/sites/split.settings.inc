<?php

/**
 * @file
 * Enable various splits for this site.
 */

$env = 'local';

if(isset($env)) {
  $config["config_split.config_split.$env"]['status'] = TRUE;
}
