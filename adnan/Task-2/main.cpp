#include <windows.h>
#include <GL/glut.h>

void display() {
glClearColor(0.0f, 0.0f, 0.0f, 0.95f);
glClear(GL_COLOR_BUFFER_BIT);
glLineWidth(3.5);

glBegin(GL_QUADS);
glColor3f(0.95f, 0.0f, 0.0f);


glVertex2f(0.3f, 0.4f);
glVertex2f( -0.3f, 0.4f);

glVertex2f( -0.3f, 0.4f);
glVertex2f(-0.4f,  -0.4f);

glVertex2f(-0.4f,  -0.4f);
glVertex2f(0.4f, -0.4f);


glVertex2f(0.4f, -0.4f);
glVertex2f( 0.3f,  0.4f);


glEnd();

glFlush();
}

int main(int argc, char** argv) {
glutInit(&argc, argv);
glutCreateWindow("OpenGL Setup");
glutInitWindowSize(320, 320);
//glutInitWindowPosition(50, 50);
glutDisplayFunc(display);
glutMainLoop();
return 0;
}
