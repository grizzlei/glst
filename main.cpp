#include <GL/freeglut.h>
#include "simple_text.h"

void display( );
void reshape( int w, int h );

int main( int argc, char ** argv )
{
    glutInit( &argc, argv );
    glutInitWindowSize( 800, 250 );
    glutCreateWindow("GL Simple Text example");
    glutDisplayFunc( display );
    glutReshapeFunc( reshape );
    glutMainLoop();
    return 0;
}

void display( ){
    glClear( GL_COLOR_BUFFER_BIT );

    /// INITIALIZE: SET EVERYTHING MANUALLY
    glst::simple_text letters;
    letters.set_size( 20 );
    letters.set_string("abcdefghijklmnopqrstuvwxyz");
    letters.set_position( 20, 10 );
    letters.draw( );

    /// INITIALIZE: SET STRING AND POSITION
    glst::simple_text numbers("0123456789", 20, 50 );

    /// INITIALIZE: SET STRING, POSITION AND SIZE
    glst::simple_text symbols("\"'!?,.=/+-*", 20, 100, 20 );

    /// INITIALIZE: SET STRING, POSITION, SIZE AND COLOR
    glst::simple_text credit("github.com/peytuk", 20, 220, 20, 0, 1, 0, 1);

    /// GET PROPERTIES
    credit.get_size();
    credit.get_string();
    credit.get_position_x();
    credit.get_position_y();
    credit.get_color_r();
    credit.get_color_g();
    credit.get_color_b();
    credit.get_color_a();

    glFlush();
}

void reshape( int w, int h ){
    glLoadIdentity();
    glViewport( 0 , 0 , w , h );
    gluOrtho2D( 0 , w , h , 0 );
}
