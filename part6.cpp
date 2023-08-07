 #include <stdio.h>
#include <math.h>
#include <time.h>
#include <GL/glut.h>
 #ifdef __APPLE_CC__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif


void display() {
glClearColor(1.0f,0.0f,0.0f,1.0f);

  glClear(GL_COLOR_BUFFER_BIT);

  
  glBegin(GL_POLYGON);
    glColor3f(1, 0.5, 0); 
    glVertex2f(0.5, 0.5);
    glColor3f(0.6, 1, 0); 
    glVertex2f(0.5,-0.5);
    glColor3f(0, 0.7, 1);
     glVertex2f(-0.5,-0.5);
     glColor3f(0.6, 0, 1);
     glVertex2f(-0.5,0.5);
  glEnd();

 
 
  glFlush();
}

int main(int argc, char** argv) {

  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

  glutInitWindowPosition(80, 80);
  glutInitWindowSize(400, 300);
  glutCreateWindow("A Simple Triangle");

  glutDisplayFunc(display);

  glutMainLoop();
}