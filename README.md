# GL Simple Text (glst) [![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)

GL Simple Text (GLST) is the SIMPLEST, single header, single font, hard coded, 2D text class for OpenGL. You can include and start using right away. 

![](screenshot.png)

## Example

```c
#include "simple_text.h"

    /// INITIALIZE: SET STRING
    glst::simple_text numbers( "0123456789" ); // Default size is 1.0f
                      numbers.set_character_size( 20 );
                      numbers.set_color( 1.0, 0.996, 0.678 , 1.0 );
    /// INITIALIZE: SET STRING AND SIZE
    glst::simple_text symbols( "\"'!?,.=/+-*", 20 );
                      symbols.set_color( 0.741, 0.645, 0.568, 1.0 );
    /// INITIALIZE: SET STRING, SIZE AND COLOR
    glst::simple_text credit( "github.com/grizzlei", 20, 1.0 , 0.819, 0.278 , 1.0 );
    glst::simple_text lower_letters( "abcdefghijklmnopqrstuvwxyz", 20, 0.490, 0.588, 0.396, 1.0 );
    glst::simple_text upper_letters( "ABCDEFGHIJKLMNOPQRSTUVWXYZ", 20, 1.0 , 0.819, 0.278 , 1.0 );

    glPushMatrix();
        glTranslatef( 10 , 10 , 0 );
        upper_letters.draw();
        glTranslatef( 0 , 40 , 0 );
        lower_letters.draw();
        glTranslatef( 0 , 40 , 0 );
        numbers.draw();
        glTranslatef( 0 , 40 , 0 );
        symbols.draw();
        glTranslatef( 0 , 40 , 0 );
        credit.draw();
    glPopMatrix();

//    SET PROPERTIES
//    glst::simple_text text;
//    text.set_character_size( 20 );
//    text.set_string("Hello");
//    text.set_color( 1.0, 0.552, 0.521 , 1.0 );
//    text.set_character_spacing( 50 );

//    GET PROPERTIES
//    credit.get_character_size();
//    credit.get_character_spacing();
//    credit.get_text_height();
//    credit.get_text_width();
//    credit.length();
//    credit.get_string();
//    credit.get_color_r();
//    credit.get_color_g();
//    credit.get_color_b();
//    credit.get_color_a();
```

