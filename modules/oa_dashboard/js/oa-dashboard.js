/**
 * @file
 * Manage spacing for dashboard and navbar tray.
 */

(function ($) {

  Drupal.behaviors.oaDashboard = {
    attach: function(context, settings) {
      var $oa_navbar = $('#oa-navbar');
      var $navbar = $('#navbar-bar');

      if ($oa_navbar.length && $navbar.length) {
        // if using OA navbar, hide the navbar module's nav bar and remove its offset
        $navbar.hide();
        $navbar.removeAttr('data-offset-top');
        if (settings.oa_toolbar_sticky == 1 && $oa_navbar.css('position') !== 'static') {
          $oa_navbar.attr('data-offset-top', '');
        }
        Drupal.displace();  // recalculate offsets
      }
    }
  }

}(jQuery));
