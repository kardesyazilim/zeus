/*
 *kardesyazilim.net
 *leo@kardesyazilim
 *25.Tem.2013-15:47:27 
 *main
 */

$(document).ready(function() {
  //$(".carousel").carousel();


 $('.megamenu').megaMenuCompleteSet({
        menu_speed_show : 300, // Time (in milliseconds) to show a drop down
        menu_speed_hide : 200, // Time (in milliseconds) to hide a drop down
        menu_speed_delay : 200, // Time (in milliseconds) before showing a drop down
        menu_effect : 'hover_fade', // Drop down effect, choose between 'hover_fade', 'hover_slide', etc.
        menu_click_outside : 1, // Clicks outside the drop down close it (1 = true, 0 = false)
        menu_show_onload : 0, // Drop down to show on page load (type the number of the drop down, 0 for none)
        menu_responsive:1 // 1 = Responsive, 0 = Not responsive
    });
    /*  Galleria.loadTheme('skins/frontend/markado/js/themes/classic/galleria.classic.min.js');

    // Initialize Galleria
    Galleria.run('#galleria', {
        transition: 'fade',
        imageCrop: true,
        _toggleInfo: false,
        autoplay: 7000,
        thumbnails: false,
        title: false

    });*/
    $('.ftm').click(function(){
        $("html, body").animate({ scrollTop: 0 }, 500);
    });
    //mcarousel
    //$('#s_34').hide();
    $('#s_35').hide();
    $('#s_36').hide();
    $('#s_37').hide();
    $('#s_38').hide();
    $('#s_39').hide();
});
