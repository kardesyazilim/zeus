<?php

/*
 * kardesyazilim.net
 * leo@kardesyazilim
 * 20.Tem.2013-12:54:58 
 * config
 */
$mdbType = 'mysql'; //master db type

$mdbPort = '3358'; //master db default port ex:3358 mysql
$mdbSRV  = 'localhost';//master db default domain localhost
$mdbUSR = 'root';//master db user
$mdbPASS ='root';//master db pass
$mdbNAME = 'markado_master';//master db name
$mdbC = 'true';//master db cache default true !important
$mdbCSIZE = '10';//master db cache size default 10mb
$mdbCTIME = '9600';//master db cache time default 9600 second
$mdbENC = 'utf-8';
$sdbType = 'mysql'; //slave db type 
$sdbPort = '3358'; //slave db default port ex:2558 mysql
$sdbSRV ='localhost';//slave db default domain localhost
$sdbUSR = 'root'; //slave db user
$sdbPASS = 'root';//slave db pass
$sdbNAME = 'markado_slave';//slave db name
$sdbC = 'true';//slave db cache default true !important
$sdbCSIZE = '10';//slave db cache size default 10mb
$sdbCTIME = '9600';//slave db cache size true !important


$mDomain = 'localhost';//default domain
$mPort = '8888';//default port 443,80
$mType = 'http';//default protokol http,https
$cdnDomain = 'localhost';//cdn domain name default localhost
$cdnPort = '8888';//default port 80,443
$cdnType = 'http';//default http (ftp,sftp,http,https);
$cdnFolder = 'media';//default media folder
$demoFolder = 'zeus/';

$adminUrl = '3elma2armut'; //default admin url 
$mobilUrl = 'mobil';
$adminTheme = 'default'; //default admin theme
$frontendTheme = 'markado';//default frontendtheme
$mobileTheme = 'markado';//default mobile theme







?>
