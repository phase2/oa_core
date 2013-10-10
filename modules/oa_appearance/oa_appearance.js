/**
 * @file
 * Manage spacing for banners in oa_appearance.
 */

(function ($) {

  Drupal.behaviors.oaAppearance = {
    attach: function(context, settings) {
      var $oa_navbar = $('#oa-navbar');
      var $banner = $('.oa-banner');
      if ($oa_navbar.length && $banner.length) {
        $height = $oa_navbar.height();
        $width = $oa_navbar.width();
        $banner.each( function(index) {
          // set the image sizes before image gets loaded
          $img_width = $(this).attr('data-width');
          $img_height = $(this).attr('data-height');
          if ($img_width > 0) {
            $new_height = $img_height * $width / $img_width;
            $new_width = $new_height * $img_width / $img_height;
            var $image = $('.oa-banner-overlay-img', this);
            $image.css('height', $new_height);
            $image.css('width', '100%');
            $image.addClass('oa-banner-hidden');
          }
        });
      }
    }
  }

  $(window).load(function() {
    var $image = $('.oa-banner-overlay-img');
    if ($image.length) {
      $image.css( 'height', 'auto'); // let the banner resize from now on
      $image.addClass('oa-banner-appeared');
      $image.removeClass('oa-banner-hidden');
    }
    // now that images are loaded, recalculate body offset for images in the
    // static toolbar
    var $oa_navbar = $('#oa-navbar');
    if ($oa_navbar.length) {
      if ($oa_navbar.css('position') !== 'static') {
        $height = $oa_navbar.height();
      }
    }
    if (typeof(Drupal.displace) != "undefined") {
      Drupal.displace();  // recalculate offsets
    }
    else if ($height > 0) {
      // navbar not being used, so just offset the body padding
      $('body').css('padding-top', $height);
    }
  });

}(jQuery));
