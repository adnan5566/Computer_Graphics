#include <windows.h>
#include <GL/glut.h>

void display() {
glClearColor(0.0f, 0.0f, 0.0f, 0.95f);
glClear(GL_COLOR_BUFFER_BIT);
//glLineWidth(3.5);

glBegin(GL_LINES);
glColor3f(0.95f, 0.0f, 0.0f);


glVertex2f(-0.5f, -0.5f);

glVertex2f( 0.5f, -0.5f);

glVertex2f( 0.5f,  0.5f);

glVertex2f(-0.5f,  0.5f);


glVertex2f(0.5f, -0.5f);

glVertex2f( 0.5f, 0.5f);

glVertex2f( -0.5f,  0.5f);

glVertex2f( -0.5f,  -0.5f);

glEnd();

glFlush();
}

int main(int argc, char** argv) {
glutInit(&argc, argv);
glutCreateWindow("OpenGL Setup");
glutInitWindowSize(320, 320);
glutInitWindowPosition(50, 50);
glutDisplayFunc(display);
glutMainLoop();
return 0;
}
