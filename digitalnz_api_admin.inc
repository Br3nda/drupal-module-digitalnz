<?php
// $Id: digitalnz_api_admin.inc,v 1.2 2009/10/11 09:28:02 jonathanhunt Exp $
/**
 * @file
 * Form builder for DigitalNZ API settings.
 *
 * @ingroup forms
 * @see system_settings_form()
 */
function digitalnz_api_admin_settings() {
  $form['digitalnz_api_url'] = array(
    '#type' => 'textfield',
    '#title' => t('DigitalNZ API URL'),
    '#description' => t('URL of DigitalNZ API including version but not response format, e.g. <a href="@api_url">@api_url</a>', array(
      '@api_url' => url(DIGITALNZ_API_URL),
    )),
    '#default_value' => variable_get('digitalnz_api_url', DIGITALNZ_API_URL),
    '#required' => TRUE,
  );

  $form['digitalnz_api_key'] = array(
    '#type' => 'password',
    '#title' => t('DigitalNZ API Key'),
    '#description' => t('Confidential DigitalNZ API Key. Refer <a href="@api_key_url">@api_key_url</a>', array(
      '@api_key_url' => url(DIGITALNZ_API_KEY_URL),
    )),
    '#required' => TRUE,
  );

  return system_settings_form($form);
}
