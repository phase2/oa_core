/**
 * @file
 * Javascript for oa_core's 'Space type' functionality.
 */
(function ($) {
  Drupal.behaviors.oaCoreSpaceType = {
    attach: function (context, settings) {
      var self = this;

      $(settings.oaCoreSpaceTypeSelector, context).change(function() {
        self.updateSection(context, settings);
      });

      $('input:[name="field_oa_section_override[und]"]', context).change(function() {
        self.updateSection(context, settings);
        self.setLayoutVisibility(this);
      });

      self.updateSection(context, settings);
      self.setLayoutVisibility($('input:[name="field_oa_section_override[und]"]', context));

      // The default response to oaCoreSpaceTypeChange: select the Panelizer
      // default for this Space type.
      $(document).on('oaCoreSpaceTypeChange', function (e) {
        var $layout_selector = $('select:[name="panelizer[page_manager][name]"]', context);

        if (!e.override && e.options.layout) {
          // Override panelizer layout selector.
          $layout_selector.val(e.options.layout);
        }
      });
    },

    setLayoutVisibility: function(element) {
      $('.pane-panelizer-form-default').toggle($(element).is(':checked'));
    },

    updateSection: function(context, settings) {
      var spaceType = $(settings.oaCoreSpaceTypeSelector, context).val();
      if (spaceType && settings.oaCoreSpaceTypeOptions[spaceType]) {
        // Trigger the 'oaCoreSpaceTypeChange' event which other modules can
        // respond to.
        $.event.trigger({
          type: 'oaCoreSpaceTypeChange',
          spaceType: spaceType,
          options: settings.oaCoreSpaceTypeOptions[spaceType],
          override: $('input:[name="field_oa_section_override[und]"]:checked', context).length
        });
      }
    }
  };
})(jQuery);
