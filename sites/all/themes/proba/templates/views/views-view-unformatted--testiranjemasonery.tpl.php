<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>
<script src="https://unpkg.com/isotope-layout@3.0/dist/isotope.pkgd.min.js"></script>
<script>
jQuery(function ($) {
  var $grid = $('.grid').isotope({
    itemSelector: '.grid-item',
  });
});
</script>
<div class="grid">
<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>
<?php foreach ($rows as $id => $row): ?>
  <div<?php if ($classes_array[$id]) { print ' class="' . $classes_array[$id] .'"';  } ?>>
    <?php print $row; ?>
  </div>
<?php endforeach; ?>
</div>
