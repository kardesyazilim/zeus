<?php

/*
 * kardesyazilim.net
 * leo@kardesyazilim
 * 20.Tem.2013-12:52:29 
 * index
 */
error_reporting(E_ALL);
ini_set("display_errors", 1);
date_default_timezone_set('Europe/Istanbul');

$betik_zd = date_default_timezone_get();
$q = isset($_GET ['q']) ? $_GET ['q'] : null;
$q = rtrim($q, '/');
$q = explode('/', $q);
//print_r($q);
require_once 'apps/boot.inc';
//bootstrapt
$b = new zBoot();
$p = new zPage();


$dbm = new ezSQL_mysql(MDBUSR, MDBPASS, MDBNAME, MDBSRV, MDBENC);
//render
//define('TITLE','MARKADO');
$c = "select * from config_cookie where id='1' and status='1'";
$c = $dbm->get_row($c);
$killtime = time() + $c->kill_time;
$c_name = $c->c_name;
$c_value = $c->c_value;
setcookie($c_name, $c_value, $killtime);
//html block
$h = new zHtml();

if ($q[0] == '') {
    //main page
    //check mobile header return
    $h->css(0, 'bootstrap');
    $h->css(0, 'bootstrap-responsive');
    $h->css(3, 'base');
    $h->css(3, 'megamenu');
    $h->css(3, 'resize');
    $h->begin();
    $p->home($dbm, $c);

    $h->js(0, 'jquery.min');
    //$h->js(0, 'bootstrap.min');
    $h->js(0, 'bootstrap.min');
    echo '<script>
$(".carousel").carousel();
</script>';
    //slider
    //slide
    //$h->js(3, 'galleria');
    $h->js(3, 'menu');
    $h->js(3, 'main');
    $h->end();
} elseif ($q[0] == ADMINURL) {
    //Admin page
    echo 'admin sayfası';
} elseif ($q[0] == MOBILURL) {
    //Mobil page
    echo 'mobil sayfası';
}
//case
else {
    //order page
    //Frontend


    $h->css(0, 'bootstrap');
    $h->css(0, 'bootstrap-responsive');
    $h->css(3, 'base');
    $h->css(3, 'megamenu');
    $h->begin();
    //$p->home($dbm, $c);
    echo '<div id="err404">';
    echo '<div class="container">';
    echo '<div class="row-fluid">';
    echo '<div class="span12">';
    echo '<div class="alert alert-error">';
    //echo '<button type="button" class="close" data-dismiss="alert">&times;</button>';
    echo '<strong>Uyarı!</strong>';
    echo 'Aradığınız ' . $q[0] . ' urlli sayfa görüntülenemektedir. Açıklama : ' . ERRPAGEURL_1;
    echo '<p><a href="' . DOMAIN . '" title="">Anasayfa</a></p>';
    echo '</div>';
    echo '</div><!--span12-->';
    echo '</div>';
    echo '</div>';
    echo '</div><!--err404-->';




    $h->js(0, 'jquery.min');
    //$h->js(0, 'bootstrap.min');
    $h->js(0, 'bootstrap.min');
    $h->js(0, 'jquery.fittext');
    echo '<script>
$(".carousel").carousel();

$(".megamenu_drop").fitText(1.2);
</script>';
    //slider
    //slide
    //$h->js(3, 'galleria');
    $h->js(3, 'menu');
    $h->js(3, 'main');
    $h->end();
}

//class 
//query
//cache
//log
?>
