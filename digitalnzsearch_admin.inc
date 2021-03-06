<?php
// $Id: digitalnzsearch_admin.inc,v 1.1 2010/02/07 03:51:48 jonathanhunt Exp $
/**
 * @file
 * Form builder for DigitalNZ Search settings.
 *
 * @ingroup forms
 * @see system_settings_form()
 */

function digitalnzsearch_admin_settings() {

  $form['digitalnz_search_rows'] = array(
    '#type' => 'textfield',
    '#title' => t('Number of rows to return in search results'),
    '#size' => 4,
    '#default_value' => variable_get('digitalnz_search_rows', 10),
  );

  return system_settings_form($form);
}
