/**
 * Created by nata on 30.06.17.
 */
function openCity(cityName) {
    var i;
    var x = document.getElementsByClassName("field-name-field-description");
    for (i = 0; i < x.length; i++) {
        x[i].style.display = "none";
    }
    var x = document.getElementsByClassName("field-name-comments-from-block");
    for (i = 0; i < x.length; i++) {
        x[i].style.display = "none";
    }
    var x = document.getElementsByClassName("field-name-checkout-info-block");
    for (i = 0; i < x.length; i++) {
        x[i].style.display = "none";
    }

    x = document.getElementsByClassName(cityName);
    for (i = 0; i < x.length; i++) {
        x[i].style.display = "block";
    }
    var element1 = document.getElementById("field-name-field-description");
    element1.classList.remove("active");

    var element = document.getElementById("field-name-comments-from-block");
    element.classList.remove("active");

    var element = document.getElementById("field-name-checkout-info-block");
    element.classList.remove("active");

    var element = document.getElementById(cityName);
    element.classList.add("active");
}
(function ($) {
    Drupal.behaviors.exampleModule = {
        attach: function (context, settings) {
            $(".cars-row").each(function (index, data) {
                $(data).click(function () {
                    $('.little-car').css({
                        display: 'none'
                    });
                    $('.cars-row').removeClass('open').css({
                        display: 'none'
                    });
                    $(data).css({
                        display: 'block'
                    });

                    var elements = data.getElementsByClassName('little-car');
                    $(elements).css({
                        display: 'block'
                    });
                    $(data).addClass('open');
                });

            });
        }
    };
}(jQuery));