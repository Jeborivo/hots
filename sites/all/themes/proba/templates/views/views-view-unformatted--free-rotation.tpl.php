<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>
<script type="text/javascript">
jQuery(document).ready(function ($) {
$('.rotation').slick({
   autoplay:true,
   arrows:true,
   prevArrow:'<a class="slick-prev"><i class="fa fa-chevron-left fa-1"></i></a>',
   nextArrow:'<a class="slick-next"><i class="fa fa-chevron-right fa-1"></i></a>',
   infinite: true
  });;
});
</script>
<div class="rotation">
<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>
<?php foreach ($rows as $id => $row): ?>
  <div<?php if ($classes_array[$id]) { print ' class="' . $classes_array[$id] .'"';  } ?>>
    <?php print $row; ?>
  </div>
<?php endforeach; ?>
</div>
