/**
 * @file oa-message-settings.js
 *
 * Provides the tab and check / uncheck all functionality for the user message settings page.
 */
(function ($) {

  Drupal.behaviors.messagesSettings = {
    attach: function (context, settings) {
      $('.select-all').click(function() {
        $('.apply-to').prop('checked', this.checked);
      });
    }
  };

})(jQuery);