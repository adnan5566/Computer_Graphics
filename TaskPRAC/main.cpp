#include <windows.h>
#include <GL/glut.h>


void drawChessboard() {
    int i, j;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if ((i + j) % 2 == 0) {
                glColor3f(1.0, 1.0, 1.0); // White square
            } else {
                glColor3f(0.5f, 0.5f, 0.5f); // Black square
            }
            glBegin(GL_QUADS);
            glVertex2f(i, j);
            glVertex2f(i + 1, j);
            glVertex2f(i + 1, j + 1);
            glVertex2f(i, j + 1);
            glEnd();
        }
    }
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    drawChessboard();
    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(350, 350); // Adjust the window size as needed
    glutCreateWindow("Chessboard");
    glClearColor(0.0, 0.0, 0.0, 1.0); // Background color
    gluOrtho2D(0, 4, 0, 4); // Set the orthographic projection
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
