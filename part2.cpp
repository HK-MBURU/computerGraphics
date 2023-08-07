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
 glPointSize(6.0f);
  glClear(GL_COLOR_BUFFER_BIT);

  
 glBegin(GL_POINTS);
  
  glVertex2f(0.5f, 0.5f);
    glColor3f(1, 1, 1);
  glVertex2f(0.5f, -0.5f); 
    glColor3f(1, 1, 1);
  glVertex2f(-0.5f, 0.5f); 
    glColor3f(1, 1, 1);
  glVertex2f(-0.5f, -0.5f); 
    glColor3f(1, 1, 1);
    glVertex2f(0.0f, 0.0f);
    glColor3f(1, 1, 1);
  glVertex2f(0.0f, -0.5f); 
    glColor3f(1, 1, 1);
  glVertex2f(0.0f, 0.5f); 
    glColor3f(1, 1, 1);
  glVertex2f(-0.5f, 0.0f); 
    glColor3f(1, 1, 1);
    glVertex2f(0.5f, 0.0f); 
    glColor3f(1, 1, 1);
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