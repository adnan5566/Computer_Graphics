#include<windows.h>
#include <GL/glut.h>

int squareIndex = 0;

void drawSquare(float x, float y, int color) {
    glColor3f(color, color, color);
    glBegin(GL_QUADS);
    glVertex2f(x, y);
    glVertex2f(x + 0.25, y);
    glVertex2f(x + 0.25, y + 0.25);
    glVertex2f(x, y + 0.25);
    glEnd();
}

void drawChessboard(float x, float y) {
    if (squareIndex < 16) {
        int row = squareIndex / 4;
        int col = squareIndex % 4;
        drawSquare(x + col * 0.25, y + row * 0.25, (row + col) % 2);
        squareIndex++;
        drawChessboard(x, y);
    }
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    drawChessboard(0, 0);
    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(400, 400);
    glutCreateWindow("4x4 Chessboard");
    glutDisplayFunc(display);
    glOrtho(0, 1, 0, 1, -1, 1);
    glutMainLoop();
    return 0;
}
