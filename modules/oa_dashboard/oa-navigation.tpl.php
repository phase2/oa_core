<?php
/**
 * @file
 * Template for OA Navigation.
 */
?>
<?php if (!empty($menu)): ?>
<div class="oa-navigation clearfix">
  <!-- .btn-navbar is used as the toggle for collapsed navbar content -->
  <a class="btn btn-navbar btn-navbar-menu">
    <span class="icon-bar"></span>
    <span class="icon-bar"></span>
    <span class="icon-bar"></span>
  </a>

  <div class="nav-collapse nav-menu-collapse">
    <?php if ($menu): ?>
      <nav class="main-menu pull-left" role="navigation">
        <?php print render($menu); ?>
      </nav>
    <?php endif; ?>
  </div>
</div>
<?php endif; ?>
