#include <iostream> // Opsional
#include <math.h>
#include <GL/freeglut.h>


int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutInitWindowSize(600, 600);
	glutInitWindowPosition(500, 0);
	glutCreateWindow("Tugas Ketiga ~ Kelvin Kurniawan");

	glutSetKeyRepeat(GLUT_KEY_REPEAT_OFF);

	gluOrtho2D(0, 200, 0, 200);

	glutMainLoop();

	return 0;
}