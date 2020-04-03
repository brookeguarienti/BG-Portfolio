          $('.accordion .panel-heading h4').on('click', function () {
              
              var panel = $(this).parents('.panel-heading');

              if (!$(panel).hasClass('active')) {
                // clicking inactive panel
                $('.panel-heading').removeClass('active');
                $(panel).addClass('active');
              } 
              else {
                // reclicking active panel
                $(panel).removeClass('active'); 
              }

          });