
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
   $('.news-slide').slick({
     autoplay:true,
     arrows:false,
     dots:true,
     infinite: true,
     speed: 500,
     fade: true,
     dotsClass:'slick-dots',
     cssEase: 'linear'
    });;
 });
</script>
<div class="news-slide">
<?php foreach ($rows as $id => $row): ?>
  <div<?php if ($classes_array[$id]) { print ' class="' . $classes_array[$id] .'"';  } ?>>
    <?php print $row; ?>
  </div>
<?php endforeach; ?>
</div>
