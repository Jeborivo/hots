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
LLMASKDJASJDAJSDJASJDAJSDJASJD
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
<button data-attr-scroll=".Warhead"><img src="sites/default/files/pictures//ikonice/warhead.png"/></button>
<button data-attr-scroll=".Braxis"><img src="sites/default/files/pictures//ikonice/braxis.png"/></button>
<button data-attr-scroll=".Dragon"><img src="sites/default/files/pictures//ikonice/dragon.png"/></button>
<button data-attr-scroll=".Sky"><img src="sites/default/files/pictures//ikonice/temple.png"/></button>
<button data-attr-scroll=".Infernal"><img src="sites/default/files/pictures//ikonice/infernal.png"/></button>
<button data-attr-scroll=".Tomb"><img src="sites/default/files/pictures//ikonice/tomb.png"/></button>
<button data-attr-scroll=".Garden"><img src="sites/default/files/pictures//ikonice/garden.png"/></button>
<button data-attr-scroll=".Haunted"><img src="sites/default/files/pictures//ikonice/haunted.png"/></button>
<button data-attr-scroll=".Towers"><img src="sites/default/files/pictures//ikonice/towers.png"/></button>
<button data-attr-scroll=".Battlefield"><img src="sites/default/files/pictures//ikonice/battlefield.png"/></button>
<button data-attr-scroll=".Cursed"><img src="sites/default/files/pictures//ikonice/cursed.png"/></button>
<button data-attr-scroll=".Cursed"><img src="sites/default/files/pictures//ikonice/blackheart.png"/></button>

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
