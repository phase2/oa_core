<?php
/**
 * @file
 * Provides view for favorites button.
 *
 * $spaces_favorite - Rendered list for space favorites.
 */
?>
<ul id="oa_visibility_toolbar">
  <li class="dropdown btn-group">
    <a class="dropdown-toggle btn <?php print $oa_toolbar_btn_class; ?>"
      id="visibility-dropdown" data-toggle="dropdown" href="#"
      title="<?php print $title; ?>">
      <?php if ($public): ?>
        <i class="icon-unlock"></i>
      <?php else: ?>
        <i class="icon-lock"></i>
      <?php endif; ?>
    </a>
    <ul class="dropdown-menu" role="menu" aria-labelledby="visibility-dropdown">
      <li class="dropdown-column">
        <?php if ($public): ?>
          <div class="oa-visibility-public"><?php print $title; ?></div>
        <?php else: ?>
          <div class="oa-visibility-private">
            <i class="icon-lock"></i> <?php print $title; ?>
          </div>
          <?php if (!empty($accessors)): ?>
          <p><em><?php print t('Only members of these can see this page'); ?></em></p>
          <?php foreach ($accessors as $class => $accessor): ?>
            <?php if (!empty($accessor['links'])): ?>
              <div class="oa-visibility-<?php print $class ?>">
                <div class='oa-visibility-header'>
                  <?php print $accessor['label']; ?>
                </div>
                <div class='oa-visibility-list'>
                  <?php print implode(', ', $accessor['links']); ?>
                </div>
              </div>
            <?php endif; ?>
          <?php endforeach ?>
          <?php endif; ?>
        <?php endif; ?>
      </li>
    </ul>
  </li>
</ul>
