<?php


/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */

?>
<script src="https://unpkg.com/isotope-layout@3.0/dist/isotope.pkgd.min.js"></script>
<script type="text/javascript">
jQuery(document).ready(function(){

  var $grid = jQuery('.grid').isotope({
    // options
  });

  jQuery('.filter-button-group').on( 'click', 'button', function() {
  var filterValue = jQuery(this).attr('data-filter');
    $grid.isotope({ filter: filterValue });
  });
});
</script>

  <div class="button-group filter-button-group">
    <button data-filter="*">show all</button>
    <button data-filter=".4">starcraft</button>
    <button data-filter=".25">warcraft</button>
    <button data-filter="">b</button>
    <button data-filter="">diablo</button>
    <button data-filter="">overwatch</button>
  </div>
<div class="grid" data-isotope='{ "itemSelector": ".grid-item", "layoutMode": "fitRows" }'>
<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>
<?php foreach ($rows as $id => $row): ?>
  <div<?php if ($classes_array[$id]) { print ' class="' . $classes_array[$id] .'"';  } ?>>

    <?php print $row;?>


<?php endforeach; ?>
  </div>
</div>
