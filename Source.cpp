#include <GL/glut.h>
#include <stdlib.h>

void display(void)
{
    glClearColor(0, 1, 0, 3);

    glClear(GL_COLOR_BUFFER_BIT);

  


    glBegin(GL_TRIANGLES);
    glColor3f(0.1, 0.2, 0.3);
    glVertex3f(-0.7, -0.7, 0);
    glVertex3f(0.7, -0.7, 0);
    glVertex3f(0, 0.7, 0);
    glEnd();


   

    glFlush();
}

int main(int argc, char* argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(640, 500);
    glutInitWindowPosition(1, 1);

    glutCreateWindow("Triangulo");

    glutDisplayFunc(display);


    glutMainLoop();

    return EXIT_SUCCESS;
}