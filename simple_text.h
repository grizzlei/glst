//    MIT License
//
//    Copyright (c) 2020 Hasan Karaman
//
//    Permission is hereby granted, free of charge, to any person obtaining a copy
//    of this software and associated documentation files (the "Software"), to deal
//    in the Software without restriction, including without limitation the rights
//    to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//    copies of the Software, and to permit persons to whom the Software is
//    furnished to do so, subject to the following conditions:
//
//    The above copyright notice and this permission notice shall be included in all
//    copies or substantial portions of the Software.
//
//    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//    IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//    FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//    AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//    LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//    OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
//    SOFTWARE.

#include <string>
#include <GL/gl.h>

namespace glst{

    class simple_text
    {
        struct character{
            float size = 20,
                  spacing = size * 0.2;
        } character;

        float position_x,
              position_y,
              color_r = 1.0,
              color_g = 1.0,
              color_b = 1.0,
              color_a = 1.0;
        std::string text;

        void A( ){
            glBegin( GL_LINES );
                glVertex2f( 0 , character.size );
                glVertex2f( character.size * 0.5 , 0 );
                glVertex2f( character.size * 0.5 , 0 );
                glVertex2f( character.size , character.size );
                glVertex2f( character.size * 0.25 , character.size * 0.5 );
                glVertex2f( character.size * 0.75 , character.size * 0.5 );
            glEnd( );
        }

        void B( ){
            glBegin( GL_LINE_LOOP );
                glVertex2f( 0 , 0 );
                glVertex2f( 0 , character.size );
                glVertex2f( character.size * 0.80 , character.size );
                glVertex2f( character.size , character.size * 0.80 );
                glVertex2f( character.size , character.size * 0.60 );
                glVertex2f( character.size * 0.80 , character.size * 0.50 );
                glVertex2f( 0 , character.size * 0.50 );
                glVertex2f( character.size * 0.80 , character.size * 0.50 );
                glVertex2f( character.size , character.size * 0.30 );
                glVertex2f( character.size , character.size * 0.10 );
                glVertex2f( character.size * 0.80 , 0);
            glEnd( );
        }

        void C( ){
            glBegin( GL_LINE_STRIP );
                glVertex2f( character.size , 0 );
                glVertex2f( character.size * 0.10 , 0 );
                glVertex2f( 0 , character.size * 0.25 );
                glVertex2f( 0 , character.size * 0.75 );
                glVertex2f( character.size * 0.10 , character.size );
                glVertex2f( character.size , character.size );
            glEnd();
        }

        void D( ){
            glBegin( GL_LINE_LOOP );
                glVertex2f( 0 , 0 );
                glVertex2f( 0 , character.size );
                glVertex2f( character.size * 0.80 , character.size );
                glVertex2f( character.size , character.size * 0.70 );
                glVertex2f( character.size , character.size * 0.30 );
                glVertex2f( character.size * 0.80 , 0 );
            glEnd();
        }

        void E( ){
            glBegin( GL_LINES );
                glVertex2f( character.size , 0 );
                glVertex2f( 0, 0 );
                glVertex2f( 0, 0 );
                glVertex2f( 0, character.size );
                glVertex2f( 0, character.size );
                glVertex2f( character.size, character.size );
                glVertex2f( 0, character.size * 0.50 );
                glVertex2f( character.size * 0.50 , character.size * 0.50  );
            glEnd( );
        }

        void F( ){
            glBegin( GL_LINES );
                glVertex2f( character.size , 0 );
                glVertex2f( 0, 0 );
                glVertex2f( 0, 0 );
                glVertex2f( 0, character.size );
                glVertex2f( 0, character.size * 0.50 );
                glVertex2f( character.size * 0.50 , character.size * 0.50  );
            glEnd();
        }

        void G( ){
            glBegin( GL_LINE_STRIP );
                glVertex2f( character.size * 0.90 , 0 );
                glVertex2f( character.size * 0.10 , 0 );
                glVertex2f( 0 , character.size * 0.25 );
                glVertex2f( 0 , character.size * 0.75 );
                glVertex2f( character.size * 0.10 , character.size );
                glVertex2f( character.size * 0.90 , character.size );
                glVertex2f( character.size, character.size * 0.75);
                glVertex2f( character.size, character.size * 0.50);
                glVertex2f( character.size * 0.50 , character.size * 0.50);
            glEnd();
        }

        void H( ){
            glBegin( GL_LINES );
                glVertex2f( 0 , 0 );
                glVertex2f( 0 , character.size );
                glVertex2f( 0 , character.size * 0.50 );
                glVertex2f( character.size , character.size * 0.50 );
                glVertex2f( character.size , 0 );
                glVertex2f( character.size , character.size );
            glEnd();
        }

        void I( ){
            glBegin( GL_LINES );
                glVertex2f( character.size * 0.30 , 0 );
                glVertex2f( character.size * 0.70 , 0 );
                glVertex2f( character.size * 0.50 , 0 );
                glVertex2f( character.size * 0.50 , character.size );
                glVertex2f( character.size * 0.30 , character.size );
                glVertex2f( character.size * 0.70 , character.size );
            glEnd();
        }

        void J( ){
            glBegin( GL_LINES );
                glVertex2f( character.size * 0.50 , 0 );
                glVertex2f( character.size * 0.90 , 0 );
                glVertex2f( character.size * 0.70 , 0 );
                glVertex2f( character.size * 0.70 , character.size * 0.80 );
                glVertex2f( character.size * 0.70 , character.size * 0.80 );
                glVertex2f( character.size * 0.50 , character.size );
                glVertex2f( character.size * 0.50 , character.size );
                glVertex2f( character.size * 0.30 , character.size );
                glVertex2f( character.size * 0.30 , character.size );
                glVertex2f( 0 , character.size * 0.80 );
            glEnd();
        }

        void K( ){
            glBegin( GL_LINES );
                glVertex2f( 0 , 0 );
                glVertex2f( 0 , character.size );
                glVertex2f( 0 , character.size * 0.50 );
                glVertex2f( character.size , character.size );
                glVertex2f( 0 , character.size * 0.50 );
                glVertex2f( character.size , 0 );
            glEnd();
        }

        void L( ){
            glBegin( GL_LINE_STRIP );
                glVertex2f( 0 , 0 );
                glVertex2f( 0 , character.size );
                glVertex2f( character.size , character.size );
            glEnd();
        }

        void M( ){
            glBegin( GL_LINE_STRIP );
                glVertex2f( 0 , character.size );
                glVertex2f( 0 , 0 );
                glVertex2f( character.size * 0.50 , character.size * 0.50 );
                glVertex2f( character.size , 0 );
                glVertex2f( character.size , character.size );
            glEnd();
        }

        void N( ){
            glBegin( GL_LINE_STRIP );
                glVertex2f( 0 , character.size );
                glVertex2f( 0 , 0 );
                glVertex2f( character.size , character.size );
                glVertex2f( character.size , 0 );
            glEnd();
        }

        void O( ){
            glBegin( GL_LINE_LOOP );
                glVertex2f( character.size , character.size * 0.20 );
                glVertex2f( character.size * 0.80 , 0 );
                glVertex2f( character.size * 0.20 , 0 );
                glVertex2f( 0 , character.size * 0.20 );
                glVertex2f( 0 , character.size * 0.80 );
                glVertex2f( character.size * 0.20 , character.size );
                glVertex2f( character.size * 0.80 , character.size );
                glVertex2f( character.size , character.size * 0.80 );
            glEnd();
        }

        void P( ){
            glBegin( GL_LINE_STRIP );
                glVertex2f( 0 , character.size );
                glVertex2f( 0 , 0 );
                glVertex2f( character.size * 0.80 , 0 );
                glVertex2f( character.size , character.size * 0.20 );
                glVertex2f( character.size , character.size * 0.40 );
                glVertex2f( character.size * 0.80 , character.size * 0.60 );
                glVertex2f( 0 , character.size * 0.60 );
            glEnd();
        }

        void Q( ){
            glBegin( GL_LINE_LOOP );
                glVertex2f( character.size , character.size * 0.20 );
                glVertex2f( character.size * 0.80 , 0 );
                glVertex2f( character.size * 0.20 , 0 );
                glVertex2f( 0 , character.size * 0.20 );
                glVertex2f( 0 , character.size * 0.80 );
                glVertex2f( character.size * 0.20 , character.size );
                glVertex2f( character.size * 0.80 , character.size );
                glVertex2f( character.size , character.size * 0.80 );
            glEnd();
            glBegin( GL_LINES );
                glVertex2f( character.size , character.size );
                glVertex2f( character.size * 0.60 , character.size * 0.60 );
            glEnd();
        }

        void R( ){
            glBegin( GL_LINE_STRIP );
                glVertex2f( 0 , character.size );
                glVertex2f( 0 , 0 );
                glVertex2f( character.size * 0.80 , 0 );
                glVertex2f( character.size , character.size * 0.20 );
                glVertex2f( character.size , character.size * 0.40 );
                glVertex2f( character.size * 0.80 , character.size * 0.60 );
                glVertex2f( 0 , character.size * 0.60 );
            glEnd();
            glBegin( GL_LINES );
                glVertex2f( character.size , character.size );
                glVertex2f( character.size * 0.80 , character.size * 0.60 );
            glEnd();
        }

        void S( ){
            glBegin( GL_LINE_STRIP );
                glVertex2f( character.size , 0 );
                glVertex2f( character.size * 0.10 , 0 );
                glVertex2f( 0 , character.size * 0.10 );
                glVertex2f( 0 , character.size * 0.40 );
                glVertex2f( character.size * 0.10 , character.size * 0.50 );
                glVertex2f( character.size * 0.90 , character.size * 0.50 );
                glVertex2f( character.size , character.size * 0.60 );
                glVertex2f( character.size , character.size * 0.90 );
                glVertex2f( character.size * 0.90 , character.size );
                glVertex2f( 0 , character.size );
            glEnd();
        }

        void T( ){
            glBegin( GL_LINES );
                glVertex2f( 0 , 0 );
                glVertex2f( character.size , 0 );
                glVertex2f( character.size * 0.50 , 0 );
                glVertex2f( character.size * 0.50 , character.size );
            glEnd();
        }

        void U( ){
            glBegin( GL_LINE_STRIP );
                glVertex2f( 0 , 0 );
                glVertex2f( 0 , character.size * 0.80 );
                glVertex2f( character.size * 0.20 , character.size );
                glVertex2f( character.size * 0.80 , character.size );
                glVertex2f( character.size , character.size * 0.80 );
                glVertex2f( character.size , 0 );
            glEnd();
        }

        void V( ){
            glBegin( GL_LINE_STRIP );
                glVertex2f( 0 , 0 );
                glVertex2f( character.size * 0.50 , character.size );
                glVertex2f( character.size , 0 );
            glEnd();
        }

        void W( ){
            glBegin( GL_LINE_STRIP );
                glVertex2f( 0 , 0 );
                glVertex2f( character.size * 0.20 , character.size );
                glVertex2f( character.size * 0.50 , character.size * 0.20 );
                glVertex2f( character.size * 0.80 , character.size );
                glVertex2f( character.size , 0 );
            glEnd();
        }

        void X( ){
            glBegin( GL_LINES );
                glVertex2f( 0 , 0 );
                glVertex2f( character.size , character.size );
                glVertex2f( character.size , 0 );
                glVertex2f( 0 , character.size );
            glEnd();
        }

        void Y( ){
            glBegin( GL_LINES );
                glVertex2f( 0 , 0 );
                glVertex2f( character.size * 0.50 , character.size * 0.60 );
                glVertex2f( character.size * 0.50 , character.size * 0.60 );
                glVertex2f( character.size, 0 );
                glVertex2f( character.size * 0.50 , character.size * 0.60 );
                glVertex2f( character.size * 0.50 , character.size );
            glEnd();
        }

        void Z( ){
            glBegin( GL_LINE_STRIP );
                glVertex2f( 0 , 0 );
                glVertex2f( character.size , 0);
                glVertex2f( 0 , character.size );
                glVertex2f( character.size , character.size );
            glEnd();
        }

        void N0( ){
            glBegin( GL_LINE_LOOP );
                glVertex2f( character.size , character.size * 0.20 );
                glVertex2f( character.size * 0.80 , 0 );
                glVertex2f( character.size * 0.20 , 0 );
                glVertex2f( 0 , character.size * 0.20 );
                glVertex2f( 0 , character.size * 0.80 );
                glVertex2f( character.size * 0.20 , character.size );
                glVertex2f( character.size * 0.80 , character.size );
                glVertex2f( character.size , character.size * 0.80 );
            glEnd();
            glBegin( GL_LINES );
                glVertex2f( character.size * 0.20 , 0 );
                glVertex2f( character.size * 0.80 , character.size );
            glEnd();
        }

        void N1( ){
            glBegin( GL_LINES );
                glVertex2f( character.size * 0.20 , 0 );
                glVertex2f( character.size * 0.50 , 0 );
                glVertex2f( character.size * 0.50 , 0 );
                glVertex2f( character.size * 0.50 , character.size );
                glVertex2f( character.size * 0.20 , character.size );
                glVertex2f( character.size * 0.80 , character.size );
            glEnd();
        }

        void N2( ){
            glBegin( GL_LINE_STRIP );
                glVertex2f( 0 , character.size * 0.20 );
                glVertex2f( character.size * 0.20 , 0 );
                glVertex2f( character.size * 0.80 , 0 );
                glVertex2f( character.size , character.size * 0.20 );
                glVertex2f( character.size , character.size * 0.40 );
                glVertex2f( 0 , character.size * 0.80 );
                glVertex2f( 0 , character.size );
                glVertex2f( character.size , character.size );
            glEnd();
        }

        void N3( ){
            glBegin( GL_LINE_STRIP );
                glVertex2f( 0 , character.size * 0.20 );
                glVertex2f( character.size * 0.20 , 0 );
                glVertex2f( character.size * 0.80 , 0 );
                glVertex2f( character.size , character.size * 0.20 );
                glVertex2f( character.size , character.size * 0.40 );
                glVertex2f( character.size * 0.80 , character.size * 0.50 );
                glVertex2f( character.size * 0.30 , character.size * 0.50 );
                glVertex2f( character.size * 0.80 , character.size * 0.50 );
                glVertex2f( character.size , character.size * 0.60 );
                glVertex2f( character.size , character.size * 0.80 );
                glVertex2f( character.size * 0.80 , character.size );
                glVertex2f( character.size * 0.20 , character.size );
                glVertex2f( 0 , character.size * 0.80 );
            glEnd();
        }

        void N4( ){
            glBegin( GL_LINE_STRIP );
                glVertex2f( character.size , character.size * 0.80 );
                glVertex2f( 0 , character.size * 0.80 );
                glVertex2f( character.size * 0.80 , 0 );
                glVertex2f( character.size * 0.80 , character.size );
            glEnd();
        }

        void N5( ){
            glBegin( GL_LINE_STRIP );
                glVertex2f( character.size , 0 );
                glVertex2f( 0 , 0 );
                glVertex2f( 0 , character.size * 0.40 );
                glVertex2f( character.size * 0.80 , character.size * 0.40 );
                glVertex2f( character.size , character.size * 0.60 );
                glVertex2f( character.size , character.size * 0.90 );
                glVertex2f( character.size * 0.90 , character.size );
                glVertex2f( 0 , character.size );
                glVertex2f( 0 , character.size * 0.80 );
            glEnd();
        }

        void N6( ){
            glBegin( GL_LINE_STRIP );
                glVertex2f( character.size , character.size * 0.20 );
                glVertex2f( character.size * 0.80 , 0 );
                glVertex2f( character.size * 0.20 , 0 );
                glVertex2f( 0 , character.size * 0.20 );
                glVertex2f( 0 , character.size * 0.80 );
                glVertex2f( character.size * 0.20 , character.size );
                glVertex2f( character.size * 0.80 , character.size );
                glVertex2f( character.size , character.size * 0.80 );
                glVertex2f( character.size , character.size * 0.60 );
                glVertex2f( character.size * 0.80 , character.size * 0.40 );
                glVertex2f( character.size * 0.20 , character.size * 0.40 );
                glVertex2f( 0 , character.size * 0.60 );
            glEnd();
        }

        void N7( ){
            glBegin( GL_LINE_STRIP );
                glVertex2f( 0 , character.size * 0.2 );
                glVertex2f( 0 , 0 );
                glVertex2f( character.size , 0 );
                glVertex2f( character.size * 0.50 , character.size );
            glEnd();
        }

        void N8( ){
            glBegin( GL_LINE_LOOP );
                glVertex2f( character.size * 0.80 , 0 );
                glVertex2f( character.size * 0.20 , 0 );
                glVertex2f( 0 , character.size * 0.20 );
                glVertex2f( 0 , character.size * 0.40 );
                glVertex2f( character.size * 0.20 , character.size * 0.50 );
                glVertex2f( character.size * 0.80 , character.size * 0.50 );
                glVertex2f( character.size , character.size * 0.60 );
                glVertex2f( character.size , character.size * 0.80 );
                glVertex2f( character.size * 0.80 , character.size );
                glVertex2f( character.size * 0.20 , character.size );
                glVertex2f( 0 , character.size * 0.80 );
                glVertex2f( 0 , character.size * 0.60 );
                glVertex2f( character.size * 0.20 , character.size * 0.50 );
                glVertex2f( character.size * 0.80 , character.size * 0.50 );
                glVertex2f( character.size , character.size * 0.40 );
                glVertex2f( character.size , character.size * 0.20 );
            glEnd();
        }

        void N9( ){
            glBegin( GL_LINE_STRIP );
                glVertex2f( 0 , character.size * 0.80 );
                glVertex2f( character.size * 0.20 , character.size );
                glVertex2f( character.size * 0.80 , character.size );
                glVertex2f( character.size , character.size * 0.80 );
                glVertex2f( character.size , character.size * 0.20 );
                glVertex2f( character.size * 0.80 , 0 );
                glVertex2f( character.size * 0.20 , 0 );
                glVertex2f( 0 , character.size * 0.20 );
                glVertex2f( 0 , character.size * 0.40 );
                glVertex2f( character.size * 0.20 , character.size * 0.60 );
                glVertex2f( character.size * 0.80 , character.size * 0.60 );
                glVertex2f( character.size , character.size * 0.40 );
            glEnd();
        }

        void dot( ){
            glBegin( GL_LINE_LOOP );
                glVertex2f( character.size * 0.45 , character.size * 0.90 );
                glVertex2f( character.size * 0.55 , character.size * 0.90 );
                glVertex2f( character.size * 0.55 , character.size );
                glVertex2f( character.size * 0.45 , character.size );
            glEnd();
        }

        void comma( ){
            glBegin( GL_LINE_LOOP );
                glVertex2f( character.size * 0.45 , character.size * 0.90 );
                glVertex2f( character.size * 0.55 , character.size * 0.90 );
                glVertex2f( character.size * 0.55 , character.size );
                glVertex2f( character.size * 0.40 , character.size * 1.3 );
                glVertex2f( character.size * 0.45 , character.size );
            glEnd();
        }

        void single_quote( ){
            glBegin( GL_LINE_LOOP );
                glVertex2f( character.size * 0.45 , 0 );
                glVertex2f( character.size * 0.55 , 0 );
                glVertex2f( character.size * 0.55 , character.size * 0.10 );
                glVertex2f( character.size * 0.50 , character.size * 0.20 );
                glVertex2f( character.size * 0.45 , character.size * 0.20 );
            glEnd();
        }

        void double_quote( ){
            glBegin( GL_LINE_LOOP );
                glVertex2f( character.size * 0.35 , 0 );
                glVertex2f( character.size * 0.45 , 0 );
                glVertex2f( character.size * 0.45 , character.size * 0.10 );
                glVertex2f( character.size * 0.40 , character.size * 0.20 );
                glVertex2f( character.size * 0.35 , character.size * 0.20 );
            glEnd();

            glBegin( GL_LINE_LOOP );
                glVertex2f( character.size * 0.55 , 0 );
                glVertex2f( character.size * 0.65 , 0 );
                glVertex2f( character.size * 0.65 , character.size * 0.10 );
                glVertex2f( character.size * 0.60 , character.size * 0.20 );
                glVertex2f( character.size * 0.55 , character.size * 0.20 );
            glEnd();
        }

        void question_mark( ){
            glBegin( GL_LINE_STRIP );
                glVertex2f( 0 , character.size * 0.20 );
                glVertex2f( character.size * 0.20 , 0 );
                glVertex2f( character.size * 0.80 , 0 );
                glVertex2f( character.size , character.size * 0.20 );
                glVertex2f( character.size , character.size * 0.40 );
                glVertex2f( character.size * 0.50 , character.size * 0.60 );
                glVertex2f( character.size * 0.50 , character.size * 0.70 );
            glEnd();

            glBegin( GL_LINES );
                glVertex2f( character.size * 0.50 , character.size * 0.85 );
                glVertex2f( character.size * 0.50 , character.size );
            glEnd();
        }

        void exclamation_mark( ){
            glBegin( GL_LINES );
                glVertex2f( character.size * 0.50 , 0 );
                glVertex2f( character.size * 0.50 , character.size * 0.70 );
                glVertex2f( character.size * 0.50 , character.size * 0.85 );
                glVertex2f( character.size * 0.50 , character.size );
            glEnd();
        }

        void equals( ){
            glBegin( GL_LINES );
                glVertex2f( character.size * 0.20 , character.size * 0.40 );
                glVertex2f( character.size * 0.80 , character.size * 0.40 );
                glVertex2f( character.size * 0.20 , character.size * 0.60 );
                glVertex2f( character.size * 0.80 , character.size * 0.60 );
            glEnd();
        }

        void slash_fw( ){
            glBegin( GL_LINES );
                glVertex2f( 0 , character.size );
                glVertex2f( character.size , 0 );
            glEnd();
        }

        void plus( ){
            glBegin( GL_LINES );
                glVertex2f( character.size * 0.20 , character.size * 0.50 );
                glVertex2f( character.size * 0.80 , character.size * 0.50 );
            glEnd();
        }

        void minus( ){
            glBegin( GL_LINES );
                glVertex2f( character.size * 0.20 , character.size * 0.50 );
                glVertex2f( character.size * 0.80 , character.size * 0.50 );
                glVertex2f( character.size * 0.50 , character.size * 0.20 );
                glVertex2f( character.size * 0.50 , character.size * 0.80 );
            glEnd();
        }

        void asterisk( ){
            glBegin( GL_LINES );
                glVertex2f( character.size * 0.20 , character.size * 0.30 );
                glVertex2f( character.size * 0.80 , character.size * 0.30 );
                glVertex2f( character.size * 0.75 , 0 );
                glVertex2f( character.size * 0.25 , character.size * 0.60 );
                glVertex2f( character.size * 0.25 , 0 );
                glVertex2f( character.size * 0.75 , character.size * 0.60 );
                glVertex2f( character.size * 0.50 , 0 );
                glVertex2f( character.size * 0.50 , character.size * 0.60 );
            glEnd();
        }

        public:
        simple_text( ){ }

        simple_text( std::string caption ){
            set_string( caption );
            draw( );
        }

        simple_text( std::string caption, float x, float y ){
            set_position( x, y );
            set_string( caption );
            draw( );
        }

        simple_text( std::string caption, float x, float y, int size ){
            set_position( x, y );
            set_string( caption );
            set_size( size );
            draw();
        }

        simple_text( std::string caption, float x, float y, int size, float r, float g, float b, float a ){
            set_position( x, y );
            set_string( caption );
            set_size( size );
            set_color( r, g, b, a );
            draw();
        }

        void draw( ){
            glPushMatrix();
            glPushAttrib( GL_CURRENT_BIT );
                glColor4f( color_r, color_g, color_b, color_a );
                glTranslatef( position_x, position_y, 0 );
                glPushMatrix();
                for ( std::size_t i = 0; i < text.length( ); i++ ){
                    if( text[i] == 0x20 || text[i] == 0x20 ){
                        glTranslatef(character.size + character.spacing, 0, 0);
                    }
                    else if( text[i] == 'A' || text[i] == 'a' ){
                        glTranslatef(character.size + character.spacing, 0, 0);
                        A();
                    }
                    else if( text[i] == 'B' || text[i] == 'b' ){
                        glTranslatef(character.size + character.spacing, 0, 0);
                        B();
                    }
                    else if( text[i] == 'C' || text[i] == 'c' ){
                        glTranslatef(character.size + character.spacing, 0, 0);
                        C();
                    }
                    else if( text[i] == 'D' || text[i] == 'd' ){
                        glTranslatef(character.size + character.spacing, 0, 0);
                        D();
                    }
                    else if( text[i] == 'E' || text[i] == 'e' ){
                        glTranslatef(character.size + character.spacing, 0, 0);
                        E();
                    }
                    else if( text[i] == 'F' || text[i] == 'f' ){
                        glTranslatef(character.size + character.spacing, 0, 0);
                        F();
                    }
                    else if( text[i] == 'G' || text[i] == 'g' ){
                        glTranslatef(character.size + character.spacing, 0, 0);
                        G();
                    }
                    else if( text[i] == 'H' || text[i] == 'h' ){
                        glTranslatef(character.size + character.spacing, 0, 0);
                        H();
                    }
                    else if( text[i] == 'I' || text[i] == 'i' ){
                        glTranslatef(character.size + character.spacing, 0, 0);
                        I();
                    }
                    else if( text[i] == 'J' || text[i] == 'j' ){
                        glTranslatef(character.size + character.spacing, 0, 0);
                        J();
                    }
                    else if( text[i] == 'K' || text[i] == 'k' ){
                        glTranslatef(character.size + character.spacing, 0, 0);
                        K();
                    }
                    else if( text[i] == 'L' || text[i] == 'l' ){
                        glTranslatef(character.size + character.spacing, 0, 0);
                        L();
                    }
                    else if( text[i] == 'M' || text[i] == 'm' ){
                        glTranslatef(character.size + character.spacing, 0, 0);
                        M();
                    }
                    else if( text[i] == 'N' || text[i] == 'n' ){
                        glTranslatef(character.size + character.spacing, 0, 0);
                        N();
                    }
                    else if( text[i] == 'O' || text[i] == 'o' ){
                        glTranslatef(character.size + character.spacing, 0, 0);
                        O();
                    }
                    else if( text[i] == 'P' || text[i] == 'p' ){
                        glTranslatef(character.size + character.spacing, 0, 0);
                        P();
                    }
                    else if( text[i] == 'Q' || text[i] == 'q' ){
                        glTranslatef(character.size + character.spacing, 0, 0);
                        Q();
                    }
                    else if( text[i] == 'R' || text[i] == 'r' ){
                        glTranslatef(character.size + character.spacing, 0, 0);
                        R();
                    }
                    else if( text[i] == 'S' || text[i] == 's' ){
                        glTranslatef(character.size + character.spacing, 0, 0);
                        S();
                    }
                    else if( text[i] == 'T' || text[i] == 't' ){
                        glTranslatef(character.size + character.spacing, 0, 0);
                        T();
                    }
                    else if( text[i] == 'U' || text[i] == 'u' ){
                        glTranslatef(character.size + character.spacing, 0, 0);
                        U();
                    }
                    else if( text[i] == 'V' || text[i] == 'v' ){
                        glTranslatef(character.size + character.spacing, 0, 0);
                        V();
                    }
                    else if( text[i] == 'W' || text[i] == 'w' ){
                        glTranslatef(character.size + character.spacing, 0, 0);
                        W();
                    }
                    else if( text[i] == 'X' || text[i] == 'x' ){
                        glTranslatef(character.size + character.spacing, 0, 0);
                        X();
                    }
                    else if( text[i] == 'Y' || text[i] == 'y' ){
                        glTranslatef(character.size + character.spacing, 0, 0);
                        Y();
                    }
                    else if( text[i] == 'Z' || text[i] == 'z' ){
                        glTranslatef(character.size + character.spacing, 0, 0);
                        Z();
                    }
                    else if( text[i] == '0' ){
                        glTranslatef(character.size + character.spacing, 0, 0);
                        N0();
                    }
                    else if( text[i] == '1' ){
                        glTranslatef(character.size + character.spacing, 0, 0);
                        N1();
                    }
                    else if( text[i] == '2' ){
                        glTranslatef(character.size + character.spacing, 0, 0);
                        N2();
                    }
                    else if( text[i] == '3' ){
                        glTranslatef(character.size + character.spacing, 0, 0);
                        N3();
                    }
                    else if( text[i] == '4' ){
                        glTranslatef(character.size + character.spacing, 0, 0);
                        N4();
                    }
                    else if( text[i] == '5' ){
                        glTranslatef(character.size + character.spacing, 0, 0);
                        N5();
                    }
                    else if( text[i] == '6' ){
                        glTranslatef(character.size + character.spacing, 0, 0);
                        N6();
                    }
                    else if( text[i] == '7' ){
                        glTranslatef(character.size + character.spacing, 0, 0);
                        N7();
                    }
                    else if( text[i] == '8' ){
                        glTranslatef(character.size + character.spacing, 0, 0);
                        N8();
                    }
                    else if( text[i] == '9' ){
                        glTranslatef(character.size + character.spacing, 0, 0);
                        N9();
                    }
                    else if( text[i] == '.' ){
                        glTranslatef(character.size + character.spacing, 0, 0);
                        dot();
                    }
                    else if( text[i] == ',' ){
                        glTranslatef(character.size + character.spacing, 0, 0);
                        comma();
                    }
                    else if( text[i] == '"' ){
                        glTranslatef(character.size + character.spacing, 0, 0);
                        double_quote();
                    }
                    else if( text[i] == '\'' ){
                        glTranslatef(character.size + character.spacing, 0, 0);
                        single_quote();
                    }
                    else if( text[i] == '!' ){
                        glTranslatef(character.size + character.spacing, 0, 0);
                        exclamation_mark();
                    }
                    else if( text[i] == '?' ){
                        glTranslatef(character.size + character.spacing, 0, 0);
                        question_mark();
                    }
                    else if( text[i] == '=' ){
                        glTranslatef(character.size + character.spacing, 0, 0);
                        equals();
                    }
                    else if( text[i] == '/' ){
                        glTranslatef(character.size + character.spacing, 0, 0);
                        slash_fw();
                    }
                    else if( text[i] == '-' ){
                        glTranslatef(character.size + character.spacing, 0, 0);
                        minus();
                    }
                    else if( text[i] == '+' ){
                        glTranslatef(character.size + character.spacing, 0, 0);
                        plus();
                    }
                    else if( text[i] == '*' ){
                        glTranslatef(character.size + character.spacing, 0, 0);
                        asterisk();
                    }
                }
                glPopMatrix();
            glPopAttrib();
            glPopMatrix();
        }
        void set_position( float x, float y){
            position_x = x;
            position_y = y;
        }

        float get_position_x( ){
            return position_x;
        }

        float get_position_y( ){
            return position_y;
        }

        void set_string( std::string s ){
            text = s;
        }

        std::string get_string( ){
            return text;
        }

        void set_size( int s ){
            character.size = s;
        }

        int get_size( ){
            return character.size;
        }

        void set_color( float r , float g, float b, float a){
            color_r = r;
            color_g = g;
            color_b = b;
            color_a = a;
        }

        float get_color_r( ){
            return color_r;
        }

        float get_color_g( ){
            return color_g;
        }

        float get_color_b( ){
            return color_b;
        }

        float get_color_a( ){
            return color_a;
        }
    };
}
