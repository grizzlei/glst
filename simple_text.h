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
            float size = 1.0f,
                  spacing_percentage = 20.f,
                  spacing = size * spacing_percentage * 0.01f;
        } character;

        float color_r = 1.0,
              color_g = 1.0,
              color_b = 1.0,
              color_a = 1.0;
        std::string text;

        void a( ){
            glBegin( GL_LINE_LOOP );
                glVertex2f( character.size * 0.80 , character.size * 0.20 );
                glVertex2f( character.size * 0.20 , character.size * 0.20 );
                glVertex2f( 0 , character.size * 0.40 );
                glVertex2f( 0 , character.size * 0.80 );
                glVertex2f( character.size * 0.20 , character.size );
                glVertex2f( character.size * 0.80 , character.size );
                glVertex2f( character.size , character.size * 0.60 );
                glVertex2f( character.size , character.size * 0.60 );
            glEnd();

            glBegin( GL_LINES );
                glVertex2f( character.size , character.size * 0.20 );
                glVertex2f( character.size , character.size  );
            glEnd();
        }

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

        void b( ){
            glBegin( GL_LINE_STRIP );
                glVertex2f( 0 , 0 );
                glVertex2f( 0 , character.size );
                glVertex2f( character.size * 0.80 , character.size );
                glVertex2f( character.size  , character.size * 0.80 );
                glVertex2f( character.size  , character.size * 0.40 );
                glVertex2f( character.size * 0.80 , character.size * 0.20 );
                glVertex2f( character.size * 0.20 , character.size * 0.20 );
                glVertex2f( 0 , character.size * 0.40 );
            glEnd();
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

        void c( ){
            glBegin( GL_LINE_STRIP );
                glVertex2f( character.size , character.size * 0.40 );
                glVertex2f( character.size * 0.80 , character.size * 0.20 );
                glVertex2f( character.size * 0.20 , character.size * 0.20 );
                glVertex2f( 0 , character.size * 0.40 );
                glVertex2f( 0 , character.size * 0.80 );
                glVertex2f( character.size * 0.20 , character.size );
                glVertex2f( character.size * 0.80 , character.size );
                glVertex2f( character.size , character.size * 0.80 );
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

        void d( ){
            glBegin( GL_LINE_STRIP );
                glVertex2f( character.size , 0 );
                glVertex2f( character.size , character.size );
                glVertex2f( character.size * 0.20 , character.size );
                glVertex2f( 0 , character.size * 0.80 );
                glVertex2f( 0 , character.size * 0.40 );
                glVertex2f( character.size * 0.20 , character.size * 0.20 );
                glVertex2f( character.size * 0.80 , character.size * 0.20 );
                glVertex2f( character.size , character.size * 0.40 );
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

        void e( ){
            glBegin( GL_LINE_STRIP );
                glVertex2f( character.size , character.size * 0.80 );
                glVertex2f( character.size * 0.80 , character.size );
                glVertex2f( character.size * 0.20 , character.size );
                glVertex2f( 0 , character.size * 0.80 );
                glVertex2f( 0 , character.size * 0.40 );
                glVertex2f( character.size * 0.20 , character.size * 0.20 );
                glVertex2f( character.size * 0.80 , character.size * 0.20 );
                glVertex2f( character.size , character.size * 0.40 );
                glVertex2f( character.size , character.size * 0.60 );
                glVertex2f( 0 , character.size * 0.60 );
            glEnd();
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

        void f( ){
            glBegin( GL_LINE_STRIP );
                glVertex2f( character.size , 0 );
                glVertex2f( character.size * 0.60 , 0 );
                glVertex2f( character.size * 0.40 , character.size * 0.20 );
                glVertex2f( character.size * 0.40 , character.size );
            glEnd();
            glBegin( GL_LINES );
                glVertex2f( 0 , character.size * 0.60 );
                glVertex2f( character.size * 0.80 , character.size * 0.60 );
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

        void g( ){
            glBegin( GL_LINE_LOOP );
                glVertex2f( character.size * 0.80 , character.size * 0.20 );
                glVertex2f( character.size * 0.20 , character.size * 0.20 );
                glVertex2f( 0 , character.size * 0.40 );
                glVertex2f( 0 , character.size * 0.80 );
                glVertex2f( character.size * 0.20 , character.size );
                glVertex2f( character.size * 0.80 , character.size );
                glVertex2f( character.size , character.size * 0.60 );
                glVertex2f( character.size , character.size * 0.60 );
            glEnd();
            glBegin( GL_LINE_STRIP );
                glVertex2f( character.size , character.size * 0.20 );
                glVertex2f( character.size , character.size * 1.20 );
                glVertex2f( character.size * 0.80 , character.size * 1.40 );
                glVertex2f( character.size * 0.20 , character.size * 1.40 );
                glVertex2f( 0 , character.size * 1.20 );
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

        void h( ){
            glBegin( GL_LINE_STRIP );
                glVertex2f( 0 , 0 );
                glVertex2f( 0 , character.size );
                glVertex2f( 0 , character.size * 0.40 );
                glVertex2f( character.size * 0.20 , character.size * 0.20 );
                glVertex2f( character.size * 0.80 , character.size * 0.20 );
                glVertex2f( character.size , character.size * 0.40 );
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

        void i( ){
            glBegin( GL_LINES );
                glVertex2f( character.size * 0.50 , character.size * 0.15 );
                glVertex2f( character.size * 0.50 , 0 );
                glVertex2f( character.size * 0.50 , character.size * 0.40 );
                glVertex2f( character.size * 0.50 , character.size );
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

        void j( ){
            glBegin( GL_LINES );
                glVertex2f( character.size * 0.80 , character.size * 0.15 );
                glVertex2f( character.size * 0.80 , 0 );
            glEnd();

            glBegin( GL_LINE_STRIP );
                glVertex2f( character.size * 0.80 , character.size * 0.40 );
                glVertex2f( character.size * 0.80 , character.size );
                glVertex2f( character.size * 0.60 , character.size * 1.20 );
                glVertex2f( character.size * 0.20 , character.size * 1.20 );
                glVertex2f( 0 , character.size );
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

        void k( ){
            glBegin( GL_LINES );
                glVertex2f( 0 , 0 );
                glVertex2f( 0 , character.size );
                glVertex2f( 0 , character.size * 0.60 );
                glVertex2f( character.size * 0.60 , character.size * 0.30 );
                glVertex2f( 0 , character.size * 0.60 );
                glVertex2f( character.size , character.size );
            glEnd();
        }

        void L( ){
            glBegin( GL_LINE_STRIP );
                glVertex2f( 0 , 0 );
                glVertex2f( 0 , character.size );
                glVertex2f( character.size , character.size );
            glEnd();
        }

        void l( ){
            glBegin( GL_LINE_STRIP );
                glVertex2f( character.size * 0.40 , 0 );
                glVertex2f( character.size * 0.40 , character.size * 0.90 );
                glVertex2f( character.size * 0.50 , character.size  );
                glVertex2f( character.size * 0.60 , character.size );
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

        void m( ){
            glBegin( GL_LINE_STRIP );
                glVertex2f( 0 , character.size );
                glVertex2f( 0 , character.size * 0.30 );
                glVertex2f( character.size * 0.20 , character.size * 0.20 );
                glVertex2f( character.size * 0.40 , character.size * 0.20 );
                glVertex2f( character.size * 0.50 , character.size * 0.30 );
                glVertex2f( character.size * 0.50 , character.size );
                glVertex2f( character.size * 0.50 , character.size * 0.30 );
                glVertex2f( character.size * 0.60 , character.size * 0.20 );
                glVertex2f( character.size * 0.80 , character.size * 0.20 );
                glVertex2f( character.size , character.size * 0.30 );
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

        void n( ){
            glBegin( GL_LINE_STRIP );
                glVertex2f( 0 , character.size );
                glVertex2f( 0 , character.size * 0.20 );
                glVertex2f( 0 , character.size * 0.40 );
                glVertex2f( character.size * 0.20 , character.size * 0.20 );
                glVertex2f( character.size * 0.80 , character.size * 0.20 );
                glVertex2f( character.size , character.size * 0.40 );
                glVertex2f( character.size , character.size );
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

        void o( ){
            glBegin( GL_LINE_LOOP );
                glVertex2f( character.size * 0.20 , character.size );
                glVertex2f( character.size * 0.80 , character.size );
                glVertex2f( character.size , character.size * 0.80 );
                glVertex2f( character.size , character.size * 0.40 );
                glVertex2f( character.size * 0.80 , character.size * 0.20 );
                glVertex2f( character.size * 0.20 , character.size * 0.20 );
                glVertex2f( 0 , character.size * 0.40 );
                glVertex2f( 0 , character.size * 0.80 );
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

        void p( ){
            glBegin( GL_LINE_LOOP );
                glVertex2f( character.size , character.size * 0.40 );
                glVertex2f( character.size * 0.80 , character.size * 0.20 );
                glVertex2f( character.size * 0.20 , character.size * 0.20 );
                glVertex2f( 0 , character.size * 0.40 );
                glVertex2f( 0 , character.size * 0.80 );
                glVertex2f( character.size * 0.20 , character.size );
                glVertex2f( character.size * 0.80 , character.size );
                glVertex2f( character.size , character.size * 0.80 );
            glEnd();

            glBegin( GL_LINES );
                glVertex2f( 0 , character.size * 0.20 );
                glVertex2f( 0 , character.size * 1.40 );
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

        void q( ){
            glBegin( GL_LINE_LOOP );
                glVertex2f( character.size , character.size * 0.40 );
                glVertex2f( character.size * 0.80 , character.size * 0.20 );
                glVertex2f( character.size * 0.20 , character.size * 0.20 );
                glVertex2f( 0 , character.size * 0.40 );
                glVertex2f( 0 , character.size * 0.80 );
                glVertex2f( character.size * 0.20 , character.size );
                glVertex2f( character.size * 0.80 , character.size );
                glVertex2f( character.size , character.size * 0.80 );
            glEnd();

            glBegin( GL_LINES );
                glVertex2f( character.size , character.size * 0.20 );
                glVertex2f( character.size , character.size * 1.40 );
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

        void r( ){
            glBegin( GL_LINE_STRIP );
                glVertex2f( 0 , character.size );
                glVertex2f( 0 , character.size * 0.40 );
                glVertex2f( character.size * 0.20 , character.size * 0.20 );
                glVertex2f( character.size * 0.80 , character.size * 0.20 );
                glVertex2f( character.size , character.size * 0.50 );
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

        void s( ){
            glBegin( GL_LINE_STRIP );
                glVertex2f( character.size , character.size * 0.20 );
                glVertex2f( character.size * 0.80 , character.size * 0.20 );
                glVertex2f( character.size * 0.20 , character.size * 0.20 );
                glVertex2f( 0 , character.size * 0.40 );
                glVertex2f( 0 , character.size * 0.60 );
                glVertex2f( character.size , character.size * 0.60 );
                glVertex2f( character.size , character.size * 0.80 );
                glVertex2f( character.size * 0.80 , character.size );
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

        void t( ){
            glBegin( GL_LINE_STRIP );
                glVertex2f( character.size * 0.20 , 0 );
                glVertex2f( character.size * 0.20 , character.size * 0.80 );
                glVertex2f( character.size * 0.40 ,  character.size );
                glVertex2f( character.size * 0.80 ,  character.size );
                glVertex2f( character.size ,  character.size * 0.80 );
            glEnd();

            glBegin( GL_LINES );
                glVertex2f( 0 , character.size * 0.40 );
                glVertex2f( character.size * 0.80 , character.size * 0.40 );
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

        void u( ){
            glBegin( GL_LINE_STRIP );
                glVertex2f( 0 , character.size * 0.20 );
                glVertex2f( 0 , character.size * 0.80 );
                glVertex2f( character.size * 0.20 , character.size );
                glVertex2f( character.size * 0.80 , character.size );
                glVertex2f( character.size , character.size * 0.80 );
                glVertex2f( character.size , character.size * 0.20 );
            glEnd();
        }

        void V( ){
            glBegin( GL_LINE_STRIP );
                glVertex2f( 0 , 0 );
                glVertex2f( character.size * 0.50 , character.size );
                glVertex2f( character.size , 0 );
            glEnd();
        }

        void v( ){
            glBegin( GL_LINE_STRIP );
                glVertex2f( character.size * 0.20 , character.size * 0.20 );
                glVertex2f( character.size * 0.50 , character.size );
                glVertex2f( character.size * 0.80 , character.size * 0.20 );
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

        void w( ){
            glBegin( GL_LINE_STRIP );
                glVertex2f( 0 , character.size * 0.20 );
                glVertex2f( character.size * 0.20 , character.size );
                glVertex2f( character.size * 0.50 , character.size * 0.40 );
                glVertex2f( character.size * 0.80 , character.size );
                glVertex2f( character.size , character.size * 0.20 );
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

        void x( ){
            glBegin( GL_LINES );
                glVertex2f( 0 , character.size * 0.20 );
                glVertex2f( character.size , character.size );
                glVertex2f( character.size , character.size * 0.20 );
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

        void y( ){
            glBegin( GL_LINE_STRIP );
                glVertex2f( 0 , character.size * 0.20 );
                glVertex2f( 0 , character.size * 0.80 );
                glVertex2f( character.size * 0.20 , character.size );
                glVertex2f( character.size * 0.80 , character.size );
                glVertex2f( character.size , character.size * 0.60 );
                glVertex2f( character.size , character.size * 0.60 );
            glEnd();
            glBegin( GL_LINE_STRIP );
                glVertex2f( character.size , character.size * 0.20 );
                glVertex2f( character.size , character.size * 1.20 );
                glVertex2f( character.size * 0.80 , character.size * 1.40 );
                glVertex2f( character.size * 0.20 , character.size * 1.40 );
                glVertex2f( 0 , character.size * 1.20 );
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

        void z( ){
            glBegin( GL_LINE_STRIP );
                glVertex2f( 0 , character.size * 0.20 );
                glVertex2f( character.size , character.size * 0.20 );
                glVertex2f( 0 , character.size );
                glVertex2f( character.size , character.size );
            glEnd();
            glBegin( GL_LINES );
                glVertex2f( character.size * 0.20 , character.size * 0.60 );
                glVertex2f( character.size * 0.80 , character.size * 0.60 );
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
                glVertex2f( character.size * 0.80 , 0 );
                glVertex2f( character.size * 0.20 , character.size );
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
        }

        simple_text( std::string caption, int size ){
            set_string( caption );
            set_character_size( size );
            //draw();
        }

        simple_text( std::string caption, int size, float r, float g, float b, float a ){
            set_string( caption );
            set_character_size( size );
            set_color( r, g, b, a );
            //draw();
        }

       void draw( ){
            glPushMatrix();
            glPushAttrib( GL_CURRENT_BIT );
                glColor4f( color_r, color_g, color_b, color_a );
                for ( std::size_t pos = 0; pos < text.length( ); pos++ ){
                    if( text[pos] == 0x20 || text[pos] == 0x20 ){
                        glTranslatef(character.size + character.spacing, 0, 0);
                    }
                    else if( text[pos] == 'A' ){
                        A();
                        glTranslatef(character.size + character.spacing, 0, 0);
                    }
                    else if( text[pos] == 'a' ){
                        a();
                        glTranslatef(character.size + character.spacing, 0, 0);
                    }
                    else if( text[pos] == 'B' ){
                        B();
                        glTranslatef(character.size + character.spacing, 0, 0);
                    }
                    else if( text[pos] == 'b' ){
                        b();
                        glTranslatef(character.size + character.spacing, 0, 0);
                    }
                    else if( text[pos] == 'C' ){
                        C();
                        glTranslatef(character.size + character.spacing, 0, 0);
                    }
                    else if( text[pos] == 'c' ){
                        c();
                        glTranslatef(character.size + character.spacing, 0, 0);
                    }
                    else if( text[pos] == 'D' ){
                        D();
                        glTranslatef(character.size + character.spacing, 0, 0);
                    }
                    else if( text[pos] == 'd' ){
                        d();
                        glTranslatef(character.size + character.spacing, 0, 0);
                    }
                    else if( text[pos] == 'E' ){
                        E();
                        glTranslatef(character.size + character.spacing, 0, 0);
                    }
                    else if( text[pos] == 'e' ){
                        e();
                        glTranslatef(character.size + character.spacing, 0, 0);
                    }
                    else if( text[pos] == 'F' ){
                        F();
                        glTranslatef(character.size + character.spacing, 0, 0);
                    }
                    else if( text[pos] == 'f' ){
                        f();
                        glTranslatef(character.size + character.spacing, 0, 0);
                    }
                    else if( text[pos] == 'G' ){
                        G();
                        glTranslatef(character.size + character.spacing, 0, 0);
                    }
                    else if( text[pos] == 'g' ){
                        g();
                        glTranslatef(character.size + character.spacing, 0, 0);
                    }
                    else if( text[pos] == 'H' ){
                        H();
                        glTranslatef(character.size + character.spacing, 0, 0);
                    }
                    else if( text[pos] == 'h' ){
                        h();
                        glTranslatef(character.size + character.spacing, 0, 0);
                    }
                    else if( text[pos] == 'I' ){
                        I();
                        glTranslatef(character.size + character.spacing, 0, 0);
                    }
                    else if( text[pos] == 'i' ){
                        i();
                        glTranslatef(character.size + character.spacing, 0, 0);
                    }
                    else if( text[pos] == 'J' ){
                        J();
                        glTranslatef(character.size + character.spacing, 0, 0);
                    }
                    else if( text[pos] == 'j' ){
                        j();
                        glTranslatef(character.size + character.spacing, 0, 0);
                    }
                    else if( text[pos] == 'K' ){
                        K();
                        glTranslatef(character.size + character.spacing, 0, 0);
                    }
                    else if( text[pos] == 'k' ){
                        k();
                        glTranslatef(character.size + character.spacing, 0, 0);
                    }
                    else if( text[pos] == 'L' ){
                        L();
                        glTranslatef(character.size + character.spacing, 0, 0);
                    }
                    else if( text[pos] == 'l' ){
                        l();
                        glTranslatef(character.size + character.spacing, 0, 0);
                    }
                    else if( text[pos] == 'M' ){
                        M();
                        glTranslatef(character.size + character.spacing, 0, 0);
                    }
                    else if( text[pos] == 'm' ){
                        m();
                        glTranslatef(character.size + character.spacing, 0, 0);
                    }
                    else if( text[pos] == 'N' ){
                        N();
                        glTranslatef(character.size + character.spacing, 0, 0);
                    }
                    else if( text[pos] == 'n' ){
                        n();
                        glTranslatef(character.size + character.spacing, 0, 0);
                    }
                    else if( text[pos] == 'O' ){
                        O();
                        glTranslatef(character.size + character.spacing, 0, 0);
                    }
                    else if( text[pos] == 'o' ){
                        o();
                        glTranslatef(character.size + character.spacing, 0, 0);
                    }
                    else if( text[pos] == 'P' ){
                        P();
                        glTranslatef(character.size + character.spacing, 0, 0);
                    }
                    else if( text[pos] == 'p' ){
                        p();
                        glTranslatef(character.size + character.spacing, 0, 0);
                    }
                    else if( text[pos] == 'Q' ){
                        Q();
                        glTranslatef(character.size + character.spacing, 0, 0);
                    }
                    else if( text[pos] == 'q' ){
                        q();
                        glTranslatef(character.size + character.spacing, 0, 0);
                    }
                    else if( text[pos] == 'R' ){
                        R();
                        glTranslatef(character.size + character.spacing, 0, 0);
                    }
                    else if( text[pos] == 'r' ){
                        r();
                        glTranslatef(character.size + character.spacing, 0, 0);
                    }
                    else if( text[pos] == 'S' ){
                        S();
                        glTranslatef(character.size + character.spacing, 0, 0);
                    }
                    else if( text[pos] == 's' ){
                        s();
                        glTranslatef(character.size + character.spacing, 0, 0);
                    }
                    else if( text[pos] == 'T' ){
                        T();
                        glTranslatef(character.size + character.spacing, 0, 0);
                    }
                    else if( text[pos] == 't' ){
                        t();
                        glTranslatef(character.size + character.spacing, 0, 0);
                    }
                    else if( text[pos] == 'U' ){
                        U();
                        glTranslatef(character.size + character.spacing, 0, 0);
                    }
                    else if( text[pos] == 'u' ){
                        u();
                        glTranslatef(character.size + character.spacing, 0, 0);
                    }
                    else if( text[pos] == 'V' ){
                        V();
                        glTranslatef(character.size + character.spacing, 0, 0);
                    }
                    else if( text[pos] == 'v' ){
                        v();
                        glTranslatef(character.size + character.spacing, 0, 0);
                    }
                    else if( text[pos] == 'W' ){
                        W();
                        glTranslatef(character.size + character.spacing, 0, 0);
                    }
                    else if( text[pos] == 'w' ){
                        w();
                        glTranslatef(character.size + character.spacing, 0, 0);
                    }
                    else if( text[pos] == 'X' ){
                        X();
                        glTranslatef(character.size + character.spacing, 0, 0);
                    }
                    else if( text[pos] == 'x' ){
                        x();
                        glTranslatef(character.size + character.spacing, 0, 0);
                    }
                    else if( text[pos] == 'Y' ){
                        Y();
                        glTranslatef(character.size + character.spacing, 0, 0);
                    }
                    else if( text[pos] == 'y' ){
                        y();
                        glTranslatef(character.size + character.spacing, 0, 0);
                    }
                    else if( text[pos] == 'Z' ){
                        Z();
                        glTranslatef(character.size + character.spacing, 0, 0);
                    }
                    else if( text[pos] == 'z' ){
                        z();
                        glTranslatef(character.size + character.spacing, 0, 0);
                    }
                    else if( text[pos] == '0' ){
                        N0();
                        glTranslatef(character.size + character.spacing, 0, 0);
                    }
                    else if( text[pos] == '1' ){
                        N1();
                        glTranslatef(character.size + character.spacing, 0, 0);
                    }
                    else if( text[pos] == '2' ){
                        N2();
                        glTranslatef(character.size + character.spacing, 0, 0);
                    }
                    else if( text[pos] == '3' ){
                        N3();
                        glTranslatef(character.size + character.spacing, 0, 0);
                    }
                    else if( text[pos] == '4' ){
                        N4();
                        glTranslatef(character.size + character.spacing, 0, 0);
                    }
                    else if( text[pos] == '5' ){
                        N5();
                        glTranslatef(character.size + character.spacing, 0, 0);
                    }
                    else if( text[pos] == '6' ){
                        N6();
                        glTranslatef(character.size + character.spacing, 0, 0);
                    }
                    else if( text[pos] == '7' ){
                        N7();
                        glTranslatef(character.size + character.spacing, 0, 0);
                    }
                    else if( text[pos] == '8' ){
                        N8();
                        glTranslatef(character.size + character.spacing, 0, 0);
                    }
                    else if( text[pos] == '9' ){
                        N9();
                        glTranslatef(character.size + character.spacing, 0, 0);
                    }
                    else if( text[pos] == '.' ){
                        dot();
                        glTranslatef(character.size + character.spacing, 0, 0);
                    }
                    else if( text[pos] == ',' ){
                        comma();
                        glTranslatef(character.size + character.spacing, 0, 0);
                    }
                    else if( text[pos] == '"' ){
                        double_quote();
                        glTranslatef(character.size + character.spacing, 0, 0);
                    }
                    else if( text[pos] == '\'' ){
                        single_quote();
                        glTranslatef(character.size + character.spacing, 0, 0);
                    }
                    else if( text[pos] == '!' ){
                        exclamation_mark();
                        glTranslatef(character.size + character.spacing, 0, 0);
                    }
                    else if( text[pos] == '?' ){
                        question_mark();
                        glTranslatef(character.size + character.spacing, 0, 0);
                    }
                    else if( text[pos] == '=' ){
                        equals();
                        glTranslatef(character.size + character.spacing, 0, 0);
                    }
                    else if( text[pos] == '/' ){
                        slash_fw();
                        glTranslatef(character.size + character.spacing, 0, 0);
                    }
                    else if( text[pos] == '-' ){
                        minus();
                        glTranslatef(character.size + character.spacing, 0, 0);
                    }
                    else if( text[pos] == '+' ){
                        plus();
                        glTranslatef(character.size + character.spacing, 0, 0);
                    }
                    else if( text[pos] == '*' ){
                        asterisk();
                        glTranslatef(character.size + character.spacing, 0, 0);
                    }
                }
            glPopAttrib();
            glPopMatrix();
        }

        void set_string( std::string s ){
            text = s;
        }

        std::string get_string( ){
            return text;
        }

        void set_character_size( int s ){
            character.size = s;
            set_character_spacing( character.spacing_percentage );
        }

        float get_character_size( ){
            return character.size;
        }

        void set_character_spacing( float percentage ){
            character.spacing_percentage = percentage;
            character.spacing = character.size * character.spacing_percentage * 0.01;
        }

        float get_character_spacing( ){
            return character.spacing;
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

        float get_text_width( ){
            return ( text.length() ) * (character.size + character.spacing);
        }

        float get_text_height( ){
            return character.size;
        }

        std::size_t length( ){
            return text.length( );
        }
    };
}
