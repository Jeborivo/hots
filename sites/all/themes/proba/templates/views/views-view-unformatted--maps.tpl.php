<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
 // $(".button10").click(function() {
 //     $('html,body').animate({
 //         scrollTop: $(".Battlefield").offset().top},
 //         'slow');
?>
<script>
jQuery(document).ready(function($) {
    $("button").click(function(event) {
        event.preventDefault();
        var anchor = $(this).attr('data-attr-scroll');
        $('html,body').animate({
          scrollTop: $(anchor).offset().top},
                 'slow');
    });
});
</script>
<div data-spy="affix" class="dugmici affix " data-offset-top="400">
<button data-attr-scroll=".Warhead">Warhead Junction</button>
<button data-attr-scroll=".Braxis">Braxis Holdout</button>
<button data-attr-scroll=".Dragon">Dragon Shire</button>
<button data-attr-scroll=".Sky">Sky Temple</button>
<button data-attr-scroll=".Infernal">Infernal Shrines</button>
<button data-attr-scroll=".Tomb">Tomb of the Spider Queen</button>
<button data-attr-scroll=".Garden">Garden of Terror</button>
<button data-attr-scroll=".Haunted">Haunted Mines</button>
<button data-attr-scroll=".Towers">Towers of Doom</button>
<button data-attr-scroll=".Battlefield">Battlefield of Eternity</button>
<button data-attr-scroll=".Cursed">Cursed Hollow</button>
</div>
<div class="panel-group" id="accordion" role="tablist" aria-multiselectable="true">
<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>
<?php foreach ($rows as $id => $row): ?>
  <div<?php if ($classes_array[$id]) { print ' class="' . $classes_array[$id] .'"';  } ?>>
    <?php print $row; ?>
<?php endforeach; ?>
</div>
</div>
