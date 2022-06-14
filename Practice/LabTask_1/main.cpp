#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>
#include <math.h>

void myDisplay(void)
{
   double yi= 250;
glClear (GL_COLOR_BUFFER_BIT);
glColor3ub (128, 128, 128);
glPointSize(1.0);
    for(int xi =100 ;xi<200; xi++){

    glBegin(GL_POINTS);
    glVertex2i(xi, yi);
    glEnd();
    yi= round(yi+ 0.5);
    }
glFlush ();
}

void myInit (void)
{
glClearColor(0.0, 0.0, 0.0, 0.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 700.0, 0.0, 600.0);
}





int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (700, 600);
glutInitWindowPosition (100, 150);
glutCreateWindow ("");
glutDisplayFunc(myDisplay);
myInit ();
glutMainLoop();
}
