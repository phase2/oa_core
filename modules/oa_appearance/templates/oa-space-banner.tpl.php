<?php
/**
 * @file
 * Provides template for space banner
 *
 * $banner - Banner image.
 * $text - Banner text
 */
?>

<?php if (!empty($banner)): ?>
<div class='oa-banner <?php print $banner_class?>' data-width='<?php print $width?>' data-height='<?php print $height?>'>
  <?php print $banner?>
  <?php if (!empty($text)): ?>
  <div class='oa-banner-text' style='height: 100px'>
    <?php print $text; ?>
  </div>
  <?php endif; ?>
</div>
<?php endif; ?>
