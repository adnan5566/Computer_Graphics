#include <windows.h>
#include <GL/glut.h>



void display() {
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);

	glBegin(GL_POLYGON);

	glColor3ub(255, 0, 0);
	glVertex2f(2.0f, 2.0f);
	glVertex2f(9.0f, 2.0f);
	glVertex2f(9.0f, 3.0f);
	glVertex2f(2.0f, 3.0f);
	glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(255, 128, 0);
	glVertex2f(2.0f, 3.0f);
	glVertex2f(9.0f, 3.0f);
	glVertex2f(9.0f, 4.0f);
	glVertex2f(2.0f, 4.0f);
	glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(255, 255, 0);
	glVertex2f(2.0f, 4.0f);
	glVertex2f(9.0f, 4.0f);
	glVertex2f(9.0f, 5.0f);
	glVertex2f(2.0f, 5.0f);
	glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(0, 153, 0);
	glVertex2f(2.0f, 5.0f);
	glVertex2f(9.0f, 5.0f);
	glVertex2f(9.0f, 6.0f);
	glVertex2f(2.0f, 6.0f);
	glEnd();

	glBegin(GL_POLYGON);

    glColor3ub(0, 128, 255);
	glVertex2f(2.0f, 6.0f);
	glVertex2f(9.0f, 6.0f);
	glVertex2f(9.0f, 7.0f);
	glVertex2f(2.0f, 7.0f);
	glEnd();

	glBegin(GL_POLYGON);

    glColor3ub(0, 0, 255);
	glVertex2f(2.0f, 7.0f);
	glVertex2f(9.0f, 7.0f);
	glVertex2f(9.0f, 8.0f);
	glVertex2f(2.0f, 8.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(153, 55, 255);
	glVertex2f(2.0f, 8.0f);
	glVertex2f(9.0f, 8.0f);
	glVertex2f(9.0f, 9.0f);
	glVertex2f(2.0f, 9.0f);
	glEnd();


	glFlush();
}


int main(int argc, char** argv) {
	glutInit(&argc, argv);          // Initialize GLUT
	glutCreateWindow("Vertex, Primitive & Color");  // Create window with the given title
	glutInitWindowSize(500, 500); // Set the window's initial width & height
	gluOrtho2D(-15, 15, -15, 15);
	glutInitWindowPosition(50, 50); // Position the window's initial top-left corner
	glutDisplayFunc(display);       // Register callback handler for window re-paint event
	glutMainLoop();                 // Enter the event-processing loop
	return 0;
}
