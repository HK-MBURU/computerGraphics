 #include <stdio.h>
#include <math.h>
#include <time.h>
#include <glut.h>
 #ifdef __APPLE_CC__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif


void display() {
glClearColor(1.0f,0.0f,0.0f,1.0f);

  glClear(GL_COLOR_BUFFER_BIT);

  
  glBegin(GL_TRIANGLES);
    glColor3f(1, 1, 1); 
    glVertex2f(0.0, 0.0);
    glColor3f(1, 1, 1); 
    glVertex2f(0.5,0.0);
    glColor3f(1, 1, 1);
     glVertex2f(0.5,0.5);
  glEnd();

  glBegin(GL_TRIANGLES);
    glColor3f(1, 1, 1); 
    glVertex2f(0.0, 0.0);
    glColor3f(1, 1, 1); 
    glVertex2f(0.0,0.5);
    glColor3f(1, 1, 1);
     glVertex2f(-0.5,0.5);
  glEnd();
 glBegin(GL_TRIANGLES);
    glColor3f(1, 1, 1); 
    glVertex2f(0.0, 0.0);
    glColor3f(1, 1, 1); 
    glVertex2f(-0.5,0.0);
    glColor3f(1, 1, 1);
     glVertex2f(-0.5,-0.5);
  glEnd();
   glBegin(GL_TRIANGLES);
    glColor3f(1, 1, 1); 
    glVertex2f(0.0, 0.0);
    glColor3f(1, 1, 1); 
    glVertex2f(0.0,-0.5);
    glColor3f(1, 1, 1);
     glVertex2f(0.5,-0.5);
  glEnd();
 
  glFlush();
}

int main(int argc, char** argv) {

  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

  glutInitWindowPosition(83, 83);
  glutInitWindowSize(450, 350);
  glutCreateWindow("A Simple Triangle");

  glutDisplayFunc(display);

  glutMainLoop();
}