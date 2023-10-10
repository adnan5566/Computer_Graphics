#include <GL/glut.h>

void drawChessboard() {
    glClear(GL_COLOR_BUFFER_BIT);

    // Set the initial color to white
    glColor3f(1.0, 1.0, 1.0);

    // Draw the 4x4 chessboard
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if ((i + j) % 2 == 0) {
                glColor3f(1.0, 1.0, 1.0); // White square
            } else {
                glColor3f(0.0, 0.0, 0.0); // Black square
            }

            glBegin(GL_QUADS);
            glVertex2f(i * 0.25, j * 0.25);
             + 1) * 0.25, j * 0.25);
            glVertex2f((i + 1) * 0.25, (j + 1) * 0.25);
            glVertex2f(i * 0.25

                       #include <GL/glut.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++) {
            glColor3f((i + j) % 2, (i + j) % 2, (i + j) % 2);
            glBegin(GL_QUADS);
            glVertex2f(i / 4.0, j / 4.0);
            glVertex2f((i + 1) / 4.0, j / 4.0);
            glVertex2f((i + 1) / 4.0, (j + 1) / 4.0);
            glVertex2f(i / 4.0, (j + 1) / 4.0);
            glEnd();
        }
    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(400, 400);
    glutCreateWindow("4x4 Chessboard");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
 (j + 1) * 0.25);
            glEnd();
        }
    }

    glFlush();
}

void init() {
    glClearColor(0.0, 0.0, 0.0, 1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0, 1, 0, 1);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(400, 400);
    glutCreateWindow("4x4 Chessboard");
    init();
    glutDisplayFunc(drawChessboard);
    glutMainLoop();
    return 0;





}
