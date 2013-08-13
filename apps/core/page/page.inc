<?php

/*
 * kardesyazilim.net
 * leo@kardesyazilim
 * 25.Tem.2013-15:44:56 
 * page
 */

class zPage {

    function __construct() {
        
    }

    function home($dbm, $c) {
        //cokie chcek
        //setcookie("uye", "hakki_can", time()+3600);
        //3600*24*30

        if (isset($_COOKIE)) {
            if (isset($_COOKIE['m_privacy'])) {


                if ($_COOKIE['m_privacy'] == 'ok') {
                    
                } else {
                    echo '<div id="cpi" >';
                    echo '<div class="container">';
                   echo '<div class="row-fluid">';
                    echo '<div class="span12" style="margin:0;">';
                    echo '<div class="alert alert-block">';
                    echo '<button type="button" class="close" data-dismiss="alert">&times;</button>';
                    echo '<strong>Bilgi!</strong>';

                    echo $c->body;
                    //<strong>Bilgi!</strong> Sizlere daha iyi hizmet verebilmek adına markado.com bilgisayarınızda kolaylık sağlayacak bir kaç cookie (Çerez) kaydetmek istiyor. Detaylı bilgi için <a href = "">cookie yazısı.</a>
                    echo '</div>';
                    echo '</div>';
                    echo '</div>';
                    echo '</div>';
                    echo '</div>';
                }
            } else {
                echo '<div id="cpi">';
                echo '<div class="container">';
                echo '<div class="row-fluid">';
                echo '<div class="span12" style="margin:0;">';
                echo '<div class="alert alert-block">';
                echo '<button type="button" class="close" data-dismiss="alert">&times;</button>';
                echo '<strong>!Bilgi </strong>';
                echo $c->body;
                //<strong>Bilgi!</strong> Sizlere daha iyi hizmet verebilmek adına markado.com bilgisayarınızda kolaylık sağlayacak bir kaç cookie (Çerez) kaydetmek istiyor. Detaylı bilgi için <a href = "">cookie yazısı.</a>
                echo '</div>';
                echo '</div>';
                echo '</div>';
                echo '</div>';
                echo '</div>';
            }
        }
        $demomod='0';
        if($demomod=='1'){
            echo '<div id="dm">';
            echo '<div class="container">';
            echo '<div class="row-fluid">';
            echo '<div class="alert alert-error">';
            echo '<button type="button" class="close" data-dismiss="alert">&times;</button>';
            echo '<strong>!Uyarı : </strong>';
            echo MAINTENANCE_MOD;
            
            echo '</div><!--alert-->';
            echo '</div>';
            echo '</div><!--container-->';
            echo '</div><!--dm-->';
        }
        $web_site = "select * from web_site where id=1";
        $web_site = $dbm->get_row($web_site);
        $web_config = "select * from web_config where co_id='$web_site->id'";
        $web_config = $dbm->get_row($web_config);

        //echo '<div id="ha" class="hidden-tabet hidden-phone">';
        echo '<div id="ha">';
        echo '<div class="container">';
        echo '<div class="row-fluid">';
        echo '<div class="span4">';

        echo '<a href="' . $web_site->co_url . 'ref/logo"><img src="' . $web_site->co_fileurl . 'media/main/img/' . $web_config->co_logo_web . '" alt="' . $web_config->co_name . '"/></a>';
        echo '</div>';
        echo '<div class="span8">';
        /* echo '<select class="qs">';
          $catListQuery = "select * from category_list where parent_id=0";
          $catList = $dbm->get_results($catListQuery);
          echo '<option value="all" select>Tüm Kategoriler</option>';
          foreach ($catList as $cat){
          echo '<option value="'.$cat->id.'">'.$cat->title.'</option>';
          }
          echo '</select>';
          echo '<input type="text" id="qsq" name="qsq" placeholder="Hızlı Arama" />';
         */

        echo '</div>';

        echo '</div><!--row-fluid-->';
        echo '</div><!--container-->';
        echo '</div><!--ha-->';
        $n = new zNav();
        $n->main($dbm);
        $this->center($dbm);
    }

    function center($dbm) {
        echo '<div id="ca">';
        echo '<div class="container cab">';
        echo '<div class="row-fluid">';
        echo '<div class="span3">';
        $n = new zNav();
        $n->left($dbm);
        echo '</div><!--span3-->';
        echo '  <div class="span9" style="margin:20px 0 0 15px;">
        
          
<div id="mcarousel" class="carousel slide" data-interval="2000">
  <!-- Dot Indicators -->
  <ol class="carousel-indicators">
    <li data-target="#mcarousel" data-slide-to="0" class="active"></li>
    <li data-target="#mcarousel" data-slide-to="1"></li>
    <li data-target="#mcarousel" data-slide-to="2"></li>
  </ol>
  <!-- Items -->
  <div class="carousel-inner">
    <div class="active item"><a href="adsf"><img src="' . DOMAIN . 'media/main/slider/slide2.jpg" alt="" /></a></div>
    <div class="item"><img src="' . DOMAIN . 'media/main/slider/slide1.jpg" alt="" /></div>
    <div class="item"><img src="' . DOMAIN . 'media/main/slider/slide2.jpg" alt="" /></div>
  </div>
  <!-- Navigation -->
  <a class="carousel-control left" href="#mcarousel" data-slide="prev">&lsaquo;</a>
  <a class="carousel-control right" href="#mcarousel" data-slide="next">&rsaquo;</a>
</div>




          <div class="span12" style="margin:0px 0 0 0;">
          <div class="span3 sbox ">
          <img src="media/main/img/Elektronik.png" alt="" />
          </div><!--span3-->
          <div class="span3 sbox">
          <img src="media/main/img/oyuncak.png" alt="" />
          </div><!--span3-->
          <div class="span3 sbox">
          <img src="media/main/img/spor.png" alt="" />
          </div><!--span3-->
          <div class="span3 sbox">
          <img src="media/main/img/ev.png" alt="" />
          </div><!--span3-->
          
          </div><!--span12-->
          
          <div class="span12 shr" style="margin:10px 0 0 0;">
          <h1>İndirimli Ürünler</h1>
          </div><!--span12-->
          
          <div class="span12" style="margin:10px 0 0 0;">
          <div class="span3 gbox ">
          <div class="prg">error</div>
          
          </div><!--span3-->
          <div class="span3 gbox">
          error
          </div><!--span3-->
          <div class="span3 gbox">
          error
          </div><!--span3-->
          <div class="span3 gbox">
          error
          </div><!--span3-->
          
          </div><!--span12-->
          

<div class="span12 shr" style="margin:0">
          <h1>Vitrinimize Bakmadan Geçmeyin</h1>
          </div><!--span12-->
          
          <div class="span12" style="margin:10px 0 0 0;">
          <div class="span3 gbox">
          error
          </div><!--span3-->
          <div class="span3 gbox">
          error
          </div><!--span3-->
          <div class="span3 gbox">
          error
          </div><!--span3-->
          <div class="span3 gbox">
          error
          </div><!--span3-->
          
          </div><!--span12-->
         
          
          </div><!--span9-->';



        echo '</div>';
        echo '</div><!--container-->';
        echo '</div><!--ca-->';



        echo '<div id="fa">';
        echo '<div class="container">';
        echo '<div class="row-fluid ft">';
        echo '<div class="span3 ftm">';
        echo '</div><!--span3-->';
        echo '<div class="span9" style="margin:0;">';
        echo '<div class="span3 fbox">';
        echo '<h1>Kurumsal</h1>';
        echo '<ul>';
        $parent_id='5';
        $group_id='0';
        $list = 'asc';
        $kq = "select * from category_list where group_id='$group_id' and parent_id='$parent_id' and status=1  order by id $list limit 0,12";
        
        
        $k = $dbm->get_results($kq);
        if ($k) {
            foreach ($k as $t) {
                echo '<li><a href="" title="' . $t->title . '">' . $t->title . '</a></li>';
            }
        }
        else{
            echo '<li><a href="http://kardesyazilim.net/?company=markado&error=3">Veri tabanı hatası</a></li>';
        }
        echo '</ul>';
        echo '</div><!--span3-->';

        echo '<div class="span3 fbox">';
        echo '<h1>Kategoriler</h1>';
        echo '<ul>';
        $parent_id='2';
        $group_id='0';
        $list = 'asc';
        $disable_id='428';
        $kq = "select * from category_list where group_id='$group_id' and parent_id='$parent_id' and status=1 and id<>'$disable_id' order by id $list limit 0,12";
        $k = $dbm->get_results($kq);
        if ($k) {
            foreach ($k as $t) {
                echo '<li><a href="" title="' . $t->title . '">' . $t->title . '</a></li>';
            }
        }
          else{
            echo '<li><a href="http://kardesyazilim.net/?company=markado&error=3">Veri tabanı hatası</a></li>';
        }
        echo '</ul>';
        echo '</div><!--span3-->';

        echo '<div class="span3 fbox">';

        echo '<h1>Sipariş ve Ödeme</h1>';
        echo '<ul>';
        $parent_id='6';
        $group_id='0';
        $list = 'asc';
        $kq = "select * from category_list where group_id='$group_id' and parent_id='$parent_id' and status=1  order by id $list limit 0,12";
        $k = $dbm->get_results($kq);
        if ($k) {
            foreach ($k as $t) {
                echo '<li><a href="" title="' . $t->title . '">' . $t->title . '</a></li>';
            }
        }
          else{
            echo '<li><a href="http://kardesyazilim.net/?company=markado&error=3">Veri tabanı hatası</a></li>';
        }
        echo '</ul>';
        echo '</div><!--span3-->';

        echo '<div class="span3 fbox">';


        echo '<h1>İletişim ve Yardım</h1>';
        echo '<ul>';
        
        $parent_id='7';
        $group_id='0';
        $list = 'asc';
        $kq = "select * from category_list where group_id='$group_id' and parent_id='$parent_id' and status=1  order by id $list limit 0,12";
        
        $k = $dbm->get_results($kq);
        if ($k) {
            foreach ($k as $t) {
                echo '<li><a href="" title="' . $t->title . '">' . $t->title . '</a></li>';
            }
        }
          else{
            echo '<li><a href="http://kardesyazilim.net/?company=markado&error=3">Veri tabanı hatası</a></li>';
        }
        echo '</ul>';
        echo '</div><!--span3-->';
        echo '<div class="span12 bjk" style="margin:0;">';
        echo '<div class="security"></div>';
        echo '<div class="yapikredi ml10" ></div>';
        echo '<div class="maximum ml10" ></div>';
        echo '<div class="bonus ml10" ></div>';
        echo '<div class="axess ml10" ></div>';
        echo '<div class="advantage ml10" ></div>';
        echo '<div class="cardfinans ml10" ></div>';
        echo '<div class="paraf ml10" ></div>';
        echo '<div class="visa ml10" ></div>';
        echo '<div class="master ml10" ></div>';
        echo '<div class="american ml10" ></div>';
        echo '</div><!--span12-->';
        echo '<div class="span12 terms" style="margin:0">';
        echo '<strong>Yasal Uyarı : </strong> markado.com\'da kullanılan görseller, yazılı metinler ve diğer tüm içeriklerin telif hakları Markado Elektronik Hizmetler ve Tic. A.Ş.\'ye aittir. Bu sitede yer alan içerikler Markado Elektronik Hizmetler ve Tic. A.Ş\'nin izni olmadan basılı veya elektronik ortamda kesinlikle kullanılamaz ve çoğaltılamaz.';
        echo '</div><!--span12-->';
        
        
        echo '</div><!--span9-->';

        echo '</div><!--row-fluid-->';
        echo '</div><!--container-->';
        echo '<div class="container">';
        echo '<div class="row-fluid">';
        echo '<div class="span12">';
        echo '<p class="text-left copy">© Copyright 2012-'.date('Y').' Markado.com</p>';
        echo '<p class="text-right" style="margin:-20px 0 0 0;"><img src="'.DOMAIN.'media/main/img/gs.gif" /><img src="'.DOMAIN.'media/main/img/etrustlogo.gif" /></p>';
        echo '</div>';
        echo '</div>';
        echo '</div>';
        echo '</div><!--fa-->';
    }
    function login(){
        echo '  

    <div class="container-fluid">

        <div id="header">

            <div class="row-fluid">

                <div class="navbar">
                    <div class="navbar-inner">
                      <div class="container">
                            <a class="brand" href="'.DOMAIN.ADMINURL.'">Markado<span class="slogan">erp v.03b</span></a>
                      </div>
                    </div><!-- /navbar-inner -->
                  </div><!-- /navbar -->
                

            </div><!-- End .row-fluid -->

        </div><!-- End #header -->

    </div><!-- End .container-fluid -->    

    <div class="container-fluid">

        <div class="loginContainer">
            <form class="form-horizontal" action="'.DOMAIN.ADMINURL.'" id="loginForm" >
                <div class="form-row row-fluid">
                    <div class="span12">
                        <div class="row-fluid">
                            <label class="form-label span12" for="username">
                                Kullanıcı Adı:
                                <span class="icon16 icomoon-icon-user-3 right gray marginR10"></span>
                            </label>
                            <input class="span12" id="username" type="text" name="username" placeholder="Kullanıcı Adı" />
                        </div>
                    </div>
                </div>

                <div class="form-row row-fluid">
                    <div class="span12">
                        <div class="row-fluid">
                            <label class="form-label span12" for="password">
                                Şifre:
                                <span class="icon16 icomoon-icon-locked right gray marginR10"></span>
                                <span class="forgot"><a href="#">Şifremi Unuttum?</a></span>
                            </label>
                            <input class="span12" id="password" type="password" name="password" placeholder="Şifre"/>
                        </div>
                    </div>
                </div>
                <div class="form-row row-fluid">                       
                    <div class="span12">
                        <div class="row-fluid">
                            <div class="form-actions">
                            <div class="span12 controls">
                                <input type="checkbox" id="keepLoged" value="Value" class="styled" name="logged" /> Beni Hatırla
                                <button type="submit" class="btn btn-info right" id="loginBtn"><span class="icon16 icomoon-icon-enter white"></span> Giriş</button>
                            </div>
                            </div>
                        </div>
                    </div> 
                </div>

            </form>
        </div>

    </div><!-- End .container-fluid -->';
    }
}

?>
