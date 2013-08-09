<?php

/*
 * kardesyazilim.net
 * leo@kardesyazilim
 * 26.Tem.2013-11:42:37 
 * nav
 */

class zNav {

    function __construct() {
        
    }

    function main($dbm) {
        $groupID='0 ';
        $parent_id='2';
        $list = 'asc';
        $catListQuery = "select * from category_list  where parent_id='$parent_id' and group_id ='$groupID' and status=1  order by id $list limit 0,12";
        $catList = $dbm->get_results($catListQuery);

        //echo '<div id="na" class="hidden-tablet hidden-phone">';
        echo '<div id="na">';
        echo '<div class="container">';
        echo '<div class="row-fluid">';
        echo '<div class="megamenu_container megamenu_dark_bar megamenu_light">';
        echo '    
        <ul class="megamenu"><!-- Begin Mega Menu -->
         ';
        if ($catList) {
            foreach ($catList as $cat) {
                $check = "select * from category_list where parent_id='.$cat->id.'";
                $scatListQuery = "select * from category_list where parent_id='$cat->id' and status=1 limit 0,12";
                $scatList = $dbm->get_results($scatListQuery);
                echo '<li><a href="#_" class="megamenu_drop" >' . $cat->title . '</a>';
                if ($scatList) {
                    echo '<div class="dropdown_fullwidth">
                 <div class="col_12">
                        <h2>' . $cat->title . ' Kategorisine Ait Tüm Alt Kategoriler</h2>
                </div>
                 <div class="col_3 responsive_halfs">
                    
                   <ul class="slist">';


                    foreach ($scatList as $scat) {
                        echo ' <li><a href="#_">' . $scat->title . '</a></li>';
                    }
                    echo '</ul>   
                         
                    </div>
                <div class="col_3 responsive_halfs" >';
                    echo '<ul id="s_' . $scat->id . '">';
                    
                    foreach ($scatList as $scat) {
                        $sTlistquery = "select * from category_list where parent_id='$scat->id' and status=1";
                        $sTlist = $dbm->get_results($sTlistquery);
                        if($sTlist){
                        foreach ($sTlist as $sT) {
                            echo '<li><a href="" title="' . $sT->title . '">' . $sT->title . '</a></li>';
                        }
                        }
                    }
                    echo '</ul>';
                    echo '<p>----</p>';
                    echo '</div>
                
    </div>';
                }
                echo '</li>';
            }
        } else {
            echo '<li><a href="http://kardesyazilim.net/?company=markado&error=1" class="megamenu_drop">'.ERRNAVCENTER_1.'</a></li>';
        }
        echo '</ul>';
        echo '</div>';
        echo '</div>';
        echo '</div>';
    }
    function left($dbm){
        $parent_id='3';
        $group_id='0';
        $list = 'asc';
        $leftNavQuery = "select * from category_list where parent_id='$parent_id' and group_id='$group_id' and status='1' order by id $list limit 0,12 ";
        $leftNav = $dbm->get_results($leftNavQuery);
        if($leftNav){
        echo '<ul class="ln">';
        foreach($leftNav as $left){
            echo '<li><a href="" title="'.$left->title.'">'.$left->title.'</a></li>';
        }
        echo '</ul><!--ln-->';
        }
        else{
           echo '<p style="margin:20px 0 0 10px ;">'.ERRNAVLEFT_1.'</p>';
        }
    }

}

?>
