<?php
function proba_theme() {
  return array(
    'user_login' => array(
      'template' => 'user-login',
       'variables' => array('form' => NULL), ## you may remove this line in this case
    ),
    'user_register' => array(
      'template' => 'user-register',
       'variables' => array('form' => NULL), ## you may remove this line in this case
    ),
    'user_pass' => array(
      'template' => 'user-pass',
      'variables' => array('form' => NULL), ## you may remove this line in this case
    ),
  );
}
function proba_preprocess_user_login(&$variables) {
	$variables['form'] = drupal_build_form('user_login', user_login(array(),$form_state)); ## I have to build the user login myself.
}
