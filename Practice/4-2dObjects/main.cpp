#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>


void myDisplay(void)
{
glClear (GL_COLOR_BUFFER_BIT);
glColor3ub (128, 128, 128);
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
glVertex2i(80, 280);
glVertex2i(150, 320);
glVertex2i(20, 320);
glBegin(GL_TRIANGLES);
glVertex2i(80, 320);
glVertex2i(150, 360);
glVertex2i(20, 360);
glEnd();

glBegin(GL_LINES);
glVertex2i(400, 400);
glVertex2i(450, 400);
glBegin(GL_LINES);
glVertex2i(450, 400);
glVertex2i(400, 300);
glBegin(GL_LINES);
glVertex2i(400, 300);
glVertex2i(450, 300);
glBegin(GL_LINES);
glVertex2i(450, 300);
glVertex2i(400, 400);
glEnd();

glBegin(GL_LINES);
glVertex2i(100, 100);
glVertex2i(100, 220);
glBegin(GL_LINES);
glVertex2i(100, 170);
glVertex2i(200, 170);
glBegin(GL_LINES);
glVertex2i(100, 140);
glVertex2i(200, 140);
glBegin(GL_LINES);
glVertex2i(200, 100);
glVertex2i(200, 220);
glEnd();

glBegin(GL_QUADS);
glVertex2i(350, 150);
glVertex2i(450, 150);
glVertex2i(450, 220);
glVertex2i(350, 220);
glBegin(GL_QUADS);
glVertex2i(400, 185);
glVertex2i(400, 120);
glVertex2i(500, 120);
glVertex2i(500, 185);
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
