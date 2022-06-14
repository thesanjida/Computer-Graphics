#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>


void myDisplay(void)
{
glClear (GL_COLOR_BUFFER_BIT);
glColor3ub (0, 128, 128);
glPointSize(5.0);
glBegin(GL_LINES);
glVertex2i(0.0, 240);
glVertex2i(640, 240);
glEnd();
glBegin(GL_LINES);
glVertex2i(320, 0.0);
glVertex2i(320, 480);
glEnd();

glBegin(GL_TRIANGLES);
glVertex2i(150, 310);
glVertex2i(220, 350);
glVertex2i(90, 350);
glBegin(GL_TRIANGLES);
glVertex2i(150, 350);
glVertex2i(220, 390);
glVertex2i(90, 390);
glEnd();

glBegin(GL_LINES);
glVertex2i(450, 400);
glVertex2i(500, 400);
glBegin(GL_LINES);
glVertex2i(500, 400);
glVertex2i(450, 300);
glBegin(GL_LINES);
glVertex2i(450, 300);
glVertex2i(500, 300);
glBegin(GL_LINES);
glVertex2i(500, 300);
glVertex2i(450, 400);
glEnd();

glBegin(GL_LINES);
glVertex2i(100, 60);
glVertex2i(100, 180);
glBegin(GL_LINES);
glVertex2i(100, 130);
glVertex2i(200, 130);
glBegin(GL_LINES);
glVertex2i(100, 100);
glVertex2i(200, 100);
glBegin(GL_LINES);
glVertex2i(200, 60);
glVertex2i(200, 180);
glEnd();

glBegin(GL_QUADS);
glVertex2i(400, 100);
glVertex2i(500, 100);
glVertex2i(500, 170);
glVertex2i(400, 170);
glBegin(GL_QUADS);
glVertex2i(450, 135);
glVertex2i(450, 70);
glVertex2i(550, 70);
glVertex2i(550, 135);
glEnd();

glFlush ();
}

void myInit (void)
{
glClearColor(0.0, 0.0, 0.0, 0.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}





int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (640, 480);
glutInitWindowPosition (100, 150);
glutCreateWindow ("");
glutDisplayFunc(myDisplay);
myInit ();
glutMainLoop();
}
