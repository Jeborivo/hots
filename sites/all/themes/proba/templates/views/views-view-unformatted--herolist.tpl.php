<?php


/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
 // jQuery(document).ready(function(){
 //
 //   var $grid = jQuery('.grid').isotope({
 //     // options
 //   });
 //
 //   jQuery('.filter-button-group').on( 'click', 'button', function() {
 //   var filterValue = jQuery(this).attr('data-filter');
 //     $grid.isotope({ filter: filterValue });
 //   });
 // });
 //  <div class="button-group filter-button-group">
 //   <button data-filter="*">show all</button>
 //   <button data-filter=".4">starcraft</button>
 //   <button data-filter=".25">warcraft</button>
 //   <button data-filter="">b</button>
 //   <button data-filter="">diablo</button>
 //   <button data-filter="">overwatch</button>
 // </div>
?>
<script src="https://unpkg.com/isotope-layout@3.0/dist/isotope.pkgd.min.js"></script>
<script>
jQuery(function ($) {


  // init Isotope
  var $grid = $('.grid').isotope({
    itemSelector: '.grid-item'
  });
  // store filter for each group
  var filters = {};

  $('.filters ').on( 'click', 'button', function() {

    var $this = $(this);
    // get group key
    var $buttonGroup = $this.parents('.button-group');
    var filterGroup = $buttonGroup.attr('data-filter-group');
    // set filter for group
    filters[ filterGroup ] = $this.attr('data-filter');
    // combine filters
    var filterValue = concatValues( filters );
    // set filter for Isotope
    $grid.isotope({ filter: filterValue });
  });

  // change is-checked class on buttons
  $('.button-group').each( function( i, buttonGroup ) {
    var $buttonGroup = $( buttonGroup );
    $buttonGroup.on( 'click', 'button', function() {
      $buttonGroup.find('.is-checked').removeClass('is-checked');
      $( this ).addClass('is-checked');
    });
  });

  // flatten object by concatting values
  function concatValues( obj ) {
    var value = '';
    for ( var prop in obj ) {
      value += obj[ prop ];
    }
    return value;
  }

 });
</script>
<div class="filters">
<div class="button-group col-md-6" data-filter-group="universe">
  <button data-filter="">All</button>
  <button data-filter=".Starcraft">Starcraft</button>
  <button data-filter=".Warcraft">Warcraft</button>
  <button data-filter=".Diablo">Diablo</button>
  <button data-filter=".Blizzard">B</button>
  <button data-filter=".Overwatch">Overwatch</button>
</div>
<div class="button-group" data-filter-group="role">
  <button data-filter="">All</button>
  <button data-filter=".Assassin">Assassin</button>
  <button data-filter=".Specialist">Specialist</button>
  <button data-filter=".Warrior">Warrior</button>
  <button data-filter=".Support">Support</button>
</div>
</div>
<div class="freetoplay">
<p><img src="http://us.battle.net/heroes/static/images/heroes/free-icon.png">Free to play </p>
</div>
    <div class="grid" data-isotope='{ "itemSelector": ".grid-item", "layoutMode": "fitRows" }'>
<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>
<?php foreach ($rows as $id => $row): ?>
    <?php print $row;?>
<?php endforeach; ?>
</div>
