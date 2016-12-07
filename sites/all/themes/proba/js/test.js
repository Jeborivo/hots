
jQuery(document).ready(function($){
    $("button[name='button']").click(function(){
        var cid = $(this).attr('data-cid');
        var nid = $(this).attr('data-nid');
        var url = "http://localhost/hots/comment/reply/" + nid +"/" +cid + " .comment-form";

        var xhttp = new XMLHttpRequest();
        xhttp.onreadystatechange = function() {
          if (this.readyState == 4 && this.status == 200) {
              jQuery("#forma-" + cid).load(url);
            this.responseText;
          }
        }
         event.preventDefault();
        xhttp.open("GET", url ,true);
        xhttp.send();

    });
});
