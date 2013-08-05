<?php

/*
 * kardesyazilim.net
 * leo@kardesyazilim
 * 20.Tem.2013-12:55:53 
 * global
 */
//domain block
define('DNAME', $mDomain); //default domain name ex:localhost
define('DPORT', $mPort); //default port ex:80 (ssl 443)
define('DTYPE', $mType); //default protokol http (ssl https)
define('DFILE', $cdnDomain); //default file domain name 
define('DFTYPE', $cdnType);
define('DFPATH', $cdnFolder); //default folder ex: media(cdn.exmaple.com/media)
define('DFPORT', $cdnPort);
define('DS', DIRECTORY_SEPARATOR);
define('CN', ':');
define('DEMOFOLDER', $demoFolder);

if (DFPORT == '80' || DPORT == '443') {
    define('DOMAIN', DTYPE . CN . DS . DS . DNAME . DS . DEMOFOLDER . DS);
    define('CDN', DFTYPE . CN . DS . DS . DFILE . DS . DEMOFOLDER . DFPATH . DS);
} else {
    define('DOMAIN', DTYPE . CN . DS . DS . DNAME . CN . DPORT . DS . DEMOFOLDER);
    define('CDN', DFTYPE . CN . DS . DS . DFILE . CN . DFPORT . DS . DEMOFOLDER . DFPATH );
}



//file block
define('ROOT', getcwd() . DS);
define('CORE', ROOT . 'apps' . DS . 'core' . DS);
define('SKINS', DOMAIN . 'skins' . DS);
define('ATHEME', 'default');
define('FTHEME', 'markado');
define('MTHEME', 'markado');

define('ATD', SKINS . 'admin' . DS . ATHEME . DS);
define('ATDC', ATD . 'css' . DS);
define('ATDJ', ATD . 'js' . DS);


define('FTD', SKINS . 'frontend' . DS . FTHEME . DS);
define('FTDC', FTD . 'css' . DS);
define('FTDJ', FTD . 'js' . DS);

define('MTD', SKINS . 'mobil' . DS . MTHEME . DS);
define('MTDC', MTD . 'css' . DS);
define('MTDJ', MTD . 'js' . DS);


define('CTD', CDN . 'core' . DS);
define('CTDC', CTD . 'css' . DS);
define('CTDJ', CTD . 'js' . DS);


//url
define('ADMINURL', $adminUrl);
define('MOBILURL', $mobilUrl);




//global 
define('LANGCODE', 'utf-8');


//hata kodları
//main nav
define('ERRNAVCENTER_1','BU SİSTEMDE KATAGORİLENDİRİME BULUNMAMAKTADIR. DESTEK');
define('ERRNAVLEFT_1','Bu sisteme ait hızlı kategorilendirme bulunmamaktadır.<a href="http://kardesyazilim.net/?company=markado&error=2">Destek</a>');
define('ERRPAGEURL_1','açıklama yazısı');
define('MAINTENANCE_MOD','Sistemde Şuanda Bakmım çalışması Yapılmaktadır.<a href="http://kardesyazilim.net/?company=markado&maintenance=1">Destek</a>');
?>
