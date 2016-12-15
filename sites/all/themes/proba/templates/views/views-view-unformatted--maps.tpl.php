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

<div data-spy="affix" class="dugmici affix " data-offset-top="325">
<button data-attr-scroll=".Bay"><img src="<?php echo $GLOBALS['base_path']?>sites/default/files/pictures/ikonice/blackheart.png"/><p>Blackheart's Bay</p></button>
<button data-attr-scroll=".Cursed"><img src="<?php echo $GLOBALS['base_path']?>sites/default/files/pictures/ikonice/cursed.png"/><p>Cursed Hollow</p></button>
<button data-attr-scroll=".Warhead"><img src="<?php echo $GLOBALS['base_path']?>sites/default/files/pictures/ikonice/warhead.png"/><p>Warhead Junction</p></button>
<button data-attr-scroll=".Braxis"><img src="<?php echo $GLOBALS['base_path']?>sites/default/files/pictures/ikonice/braxis.png"/><p>Braxis Holdout</p></button>
<button data-attr-scroll=".Dragon"><img src="<?php echo $GLOBALS['base_path']?>sites/default/files/pictures/ikonice/dragon.png"/><p>Dragon Shire</p></button>
<button data-attr-scroll=".Sky"><img src="<?php echo $GLOBALS['base_path']?>sites/default/files/pictures/ikonice/temple.png"/><p>Sky Temple</p></button>
<button data-attr-scroll=".Infernal"><img src="<?php echo $GLOBALS['base_path']?>sites/default/files/pictures/ikonice/infernal.png"/><p>Infernal Shrines</p></button>
<button data-attr-scroll=".Tomb"><img src="<?php echo $GLOBALS['base_path']?>sites/default/files/pictures/ikonice/tomb.png"/><p>Spider Queen</p></button>
<button data-attr-scroll=".Garden"><img src="<?php echo $GLOBALS['base_path']?>sites/default/files/pictures/ikonice/garden.png"/><p>Garden of Terror</p></button>
<button data-attr-scroll=".Haunted"><img src="<?php echo $GLOBALS['base_path']?>sites/default/files/pictures/ikonice/haunted.png"/><p>Haunted Mines</p></button>
<button data-attr-scroll=".Towers"><img src="<?php echo $GLOBALS['base_path']?>sites/default/files/pictures/ikonice/towers.png"/><p>Towers of Doom</p></button>
<button data-attr-scroll=".Battlefield"><img src="<?php echo $GLOBALS['base_path']?>sites/default/files/pictures/ikonice/battlefield.png"/><p>Battlefield</p></button>

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
