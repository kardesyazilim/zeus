<?php

/*
 * kardesyazilim.net
 * leo@kardesyazilim
 * 20.Tem.2013-12:54:24 
 * boot
 */
require_once 'config.inc';
require_once 'db.inc';
require_once 'global.inc';

class zBoot {

    public $q; //query
    public $l; //log
    public $c; //cache

    function __construct() {
        //bootstrap 
        
        if ($handle = opendir(CORE)) {

            while (false !== ($entry = readdir($handle))) {
                
                if($entry =='.' || $entry=='..'){
                    
                }
                
                else{
                 
                 $t = filetype(CORE.$entry);
                 if($t=='dir'){
                     $nFolder = CORE.$entry.DS;
                     if($nHandle=opendir($nFolder)){
                     
                         while(false !==($sEntry = readdir($nHandle))){
                             if($sEntry=='.'||$sEntry=='..'){
                                 
                             }
                             else{
                                 $t = filetype($nFolder.$sEntry);
                                 if($t == 'file'){
                                     require_once $nFolder.$sEntry;
                                 }
                                 else{
                                     echo ERRMOD_CORE_1;
                                 }
                                 
                             }
                         }
                         while($sEntry = readdir($nHandle)){
                             if($sEntry=='.'||$sEntry=='..'){
                                 
                             }
                             else{
                                 $t = filetype($nFolder.$sEntry);
                                 if($t == 'file'){
                                     
                                     require_once $nFolder.$sEntry;
                                 }
                                 else{
                                     echo ERRMOD_CORE_1;
                                 }
                                 
                             }
                         }
                         closedir($nHandle);
                     }
                     
                     
                 }
                 else{
                     echo ERRMOD_CORE_1;
                    //echo 'burası';
                 }
                }
            }


            while ($entry = readdir($handle)) {
               
                if($entry =='.' || $entry=='..'){
                    
                }
                
                else{
                 
                 $t = filetype(CORE.$entry);
                 if($t=='dir'){
                     $nFolder = CORE.$entry.DS;
                     if($nHandle=opendir($nFolder)){
                     
                         while(false !==($sEntry = readdir($nHandle))){
                             if($sEntry=='.'||$sEntry=='..'){
                                 
                             }
                             else{
                                 $t = filetype($nFolder.$sEntry);
                                 if($t == 'file'){
                                    // echo $nFolder.$sEntry;
                                     
                                     require_once $nFolder.$sEntry;
                                 }
                                 else{
                                     echo ERRMOD_CORE_1;
                                 }
                                 
                             }
                         }
                         while($sEntry = readdir($nHandle)){
                             if($sEntry=='.'||$sEntry=='..'){
                                 
                             }
                             else{
                                 $t = filetype($nFolder.$sEntry);
                                 if($t == 'file'){
                                     //echo $t;
                                 }
                                 else{
                                     echo ERRMOD_CORE_1;
                                 }
                                 
                             }
                         }
                         closedir($nHandle);
                     }
                     
                     
                 }
                 else{
                     echo ERRMOD_CORE_1;
                 }
                }
            }

            closedir($handle);
        }
    }

    function admin() {
        
    }

    function frontend() {
        
    }

    function mobile() {
        
    }

    function render($q = null) {

        //title 
    }

}

?>
