<?php

/*
 * kardesyazilim.net
 * leo@kardesyazilim
 * 20.Tem.2013-13:43:24 
 * html
 */

class zHtml {

    function __construct() {
        //auto run bootstrapt
        //html begin
        //default charset 
        //default title
        define('TITLE','MARKADO');
        define('DESCRIPTION','ASDFASDF');
        define('KEYWORD','dafas');
        echo '<!doctype html>';
        echo '<html lang="en">';
        echo '<head>';
        echo '<meta charset="' . LANGCODE . '">';
        echo '<meta http-equiv="X-UA-Compatible" content="IE=edge">';
        echo '<meta name="viewport" content="width=device-width, initial-scale=1.0">';
        echo '<!--[if lt IE 9]>
              <script src="' . CDN . 'core/js/html5shiv.js"></script>
              <![endif]-->';
        echo ' <link rel="shortcut icon" type="image/x-icon" href="favicon.ico" />';
        //title
        echo '<title>' . TITLE . '</title>';
        //default keyword,description 
        
        echo '<meta name="description" content="'.DESCRIPTION.'"/>';
        echo '<meta name="keywords" content="'.KEYWORD.'"/>';
        $this->css(0, 'reset');
     
        //default opengraph
        
    }
    
    public function begin() {

        
        
        //css block render
        echo '</head>';
        echo '<body>';
        
    }

    public function end() {
        //js block render
        //static footer area
        //end html
        define('MACID','asfdasd');
        echo '<!--machine_id:'.MACID.'-->';
        echo '</body>';
        echo '</html>';
       
        
    }

    public function js($type,$file,$cache = false) {
        //render type 
        //query spec
        //base 
         if($type ==0){
            $d = CTDJ;
                    
        }
        elseif($type==1){
            $d = MTDJ;
        }
        elseif($type==2){
            
            $d = ATDJ;
        }
        else{
            $d = FTDJ;
        }
        echo '<script src="'.$d.$file.'.js"></script>';
    }

    public function css($type,$file,$cache = false) {
        //render type
        if($type ==0){
            $d = CTDC;
                    
        }
        elseif($type==1){
            $d = MTDC;
        }
        elseif($type==2){
            
            $d = ATDC;
        }
        else{
            $d = FTDC;
        }
        //CDN
        
        echo '<link href="'.$d.$file.'.css" rel="stylesheet" media="screen" />';
        //query spec
        //base
    }

    private function file() {
        //cache list
        //cache file
        //render type
        //query spec 
        //base
    }

}

?>
