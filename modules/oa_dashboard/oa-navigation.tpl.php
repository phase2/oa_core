<?php
/**
 * @file
 * Template for OA Navigation.
 */
?>
<?php if (!empty($menu) || !empty($banner)): ?>
  <div class="oa-navigation clearfix">
    <button type="button" class="navbar-toggle" data-toggle="collapse"
            data-target="#oa-navbar-header">
      <span class="sr-only">Toggle navigation</span>
      <span class="icon-bar"></span>
      <span class="icon-bar"></span>
      <span class="icon-bar"></span>
    </button>

    <div class="collapse navbar-collapse" id="oa-navbar-header">
      <nav class="main-menu pull-left" role="navigation">
        <?php if (!empty($banner)): ?>
          <div class='oa-banner oa-menu-banner oa-banner-before'
               data-width='<?php print $width ?>'
               data-height='<?php print $height ?>'>
            <?php print $banner ?>
          </div>
        <?php endif; ?>
        <?php if (!empty($menu)): ?>
          <?php print render($menu); ?>
        <?php endif; ?>
      </nav>
    </div>
  </div>
<?php endif; ?>