(function ($) {
  Drupal.behaviors.customHeader = {
    attach: function (context, settings) {

      if(window.outerWidth <= 768) {
        $(".region-header-top-right").append("<div class='go-to-search'><a href='#header'>Search</a></div>");
        $('.go-to-search').click(function () {
          $('#header').toggle();
        });
      }
    }
  };
}(jQuery));
