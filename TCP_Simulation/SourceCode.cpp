// Code Version : 3

#include <windows.h>
#include <stdio.h>
#include <iostream>
#include <GL/glut.h>
#include <math.h>
using namespace std;

void drawcs();
void scene();
void data();
void cbit();
void sbit();

int xd = 0, yd = 0, yc = 0, xs = 0, xc = 0;


void scene()
{

	glBegin(GL_POLYGON); //Sky  
	glColor3f(1.0, 0.6, 0.0);
	glVertex2i(0, 800);
	glVertex2i(1200, 800);
	glColor3f(0.7, 0.7, 1.0);
	glVertex2i(1200, 0);
	glVertex2i(0, 0);
	glEnd();

	glBegin(GL_POLYGON); //Middle ground 
	glColor3f(0.9, 0.7, 0.2);
	glVertex2i(0, 100);
	glVertex2i(0, 280);
	glVertex2i(200, 330);
	glVertex2i(400, 350);
	glVertex2i(600, 330);
	glVertex2i(800, 320);
	glVertex2i(1000, 300);
	glVertex2i(1200, 270);
	glVertex2i(1200, 100);
	glEnd();


	glBegin(GL_POLYGON); // River
	glColor3f(0.9, 0.7, 0.2);
	glVertex2i(0, 150);
	glVertex2i(200, 150);
	glVertex2i(400, 150);
	glVertex2i(600, 150);
	//glColor3f(0.2, 0.3, 1.1);
	glVertex2i(800, 150);
	glVertex2i(1000, 150);
	glVertex2i(1200, 150);
	glVertex2i(1200, 0);
	glVertex2i(0, 0);
	glEnd();

}

void drawcs()
{
	glBegin(GL_POLYGON); // server
	glColor3f(0.8, 0.2, 0.3);
	glVertex2i(100, 300);
	glVertex2i(300, 340);
	glVertex2i(300, 600);
	glVertex2i(100, 600);
	glEnd();

	glBegin(GL_POLYGON); // client
	glColor3f(0.4, 0.4, 0.1);
	glVertex2i(900, 400);
	glVertex2i(1100, 400);
	glVertex2i(1100, 600);
	glVertex2i(900, 600);
	glEnd();

	glBegin(GL_POLYGON); // middle-line
	glColor3f(0.4, 0.4, 0.1);
	glVertex2i(995, 350);
	glVertex2i(1010, 350);
	glVertex2i(1010, 400);
	glVertex2i(995, 400);
	glEnd();

	glBegin(GL_POLYGON); // keyboard
	glColor3f(0.4, 0.4, 0.1);
	glVertex2i(870, 300);
	glVertex2i(1070, 300);
	glVertex2i(1100, 350);
	glVertex2i(900, 350);
	glEnd();

	glBegin(GL_LINE_STRIP);//C
	glColor3f(0.0, 0.0, 0.0);
	glLineWidth(2.0);
	glVertex2f(1020, 750);
	glVertex2f(950, 750);
	glVertex2f(950, 650);
	glVertex2f(1020, 650);
	glEnd();

	glBegin(GL_LINE_STRIP);//S
	glColor3f(0.0, 0.0, 0.0);
	glLineWidth(2.0);
	glVertex2f(110, 650);
	glVertex2f(180, 650);
	glVertex2f(180, 700);
	glVertex2f(110, 700);
	glVertex2f(110, 750);
	glVertex2f(180, 750);
	glEnd();

}

void data()
{
	glBegin(GL_POLYGON); // data
	glColor3f(0.4, 0.4, 0.1);

	glVertex2i(xd + 120, yd + 410);
	glVertex2i(xd + 280, yd + 410);
	glVertex2i(xd + 280, yd + 460);
	glVertex2i(xd + 120, yd + 460);
	glEnd();
}

void sbit()
{
	glBegin(GL_LINE_LOOP); //server-bit
	glColor3f(0, 0, 0);
	glVertex2i(xs + 200, 490);
	glVertex2i(xs + 250, 490);
	glVertex2i(xs + 250, 530);
	glVertex2i(xs + 200, 530);
	glEnd();

}

void cbit()
{
	glBegin(GL_LINE_LOOP); // client - bit
	glColor3f(0, 0, 0);
	glVertex2i(xc + 940, yc + 550);
	glVertex2i(xc + 990, yc + 550);
	glVertex2i(xc + 990, yc + 590);
	glVertex2i(xc + 940, yc + 590);
	glEnd();
}


void square1()
{
	glBegin(GL_POLYGON); // Rectangle Block
	glColor3f(0.4, 0.4, 0.1);
	glVertex2i(930, 540);
	glVertex2i(1000, 540);
	glVertex2i(1000, 595);
	glVertex2i(930, 595);
	glEnd();
}

void square2()
{
	glBegin(GL_POLYGON); //Rectangle Block
	glColor3f(0.8, 0.2, 0.3);
	glVertex2i(200, 470);
	glVertex2i(280, 470);
	glVertex2i(250, 540);
	glVertex2i(200, 540);
	glEnd();
}

void square3()
{
	glBegin(GL_POLYGON); // Rectangle Block 
	glColor3f(0.8, 0.2, 0.3);

	glVertex2i(120, 410);
	glVertex2i(280, 410);
	glVertex2i(280, 460);
	glVertex2i(120, 460);
	glEnd();
}

void square4()
{
	glBegin(GL_POLYGON);
	glColor3f(0.8, 0.2, 0.3);
	glVertex2i(100, 540);
	glVertex2i(300, 540);
	glVertex2i(300, 590);
	glVertex2i(100, 590);
	glEnd();
}

void square5()
{
	glBegin(GL_POLYGON);
	glColor3f(0.4, 0.4, 0.1);
	glVertex2i(900, 470);
	glVertex2i(1100, 470);
	glVertex2i(1100, 540);
	glVertex2i(900, 540);
	glEnd();
}

void myInit(void)
{
	glClearColor(0.0, 0.0, 1.0, 0.0);
	glColor3f(1.0f, 1.0f, 1.0f);
	glPointSize(0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 1200.0, 0.0, 800.0);
}


void myDisplay(void)
{
	scene(); 
	drawcs(); 
	data();
	cbit(); 
	sbit();
	square1(); 
	square2();
	square3();
	square4();
	square5();


	glFlush();
	glutPostRedisplay();
	glutSwapBuffers();
}

void specialkey(int key, int x, int y)
{
	switch (key)
	{
	case GLUT_KEY_LEFT:
		if (xd == 0)
		{
			xd = 0;
		}
		else
		{
			xd = xd - 15;
		}
		glutPostRedisplay();
		break;

	case GLUT_KEY_RIGHT:
		if (xd < 810)
		{
			xd = xd + 15;
		}

		if (xd > 810)
		{
			xd = 810;
			
		}
		glutPostRedisplay();
		break;

	case GLUT_KEY_UP:
		
		if (xc != -750)
		{
			xc = xc - 15;
		}

		if(xc == -750)
		{
			xc = -750;
			if (xs != 720)
			{
				xs = xs + 15;
			}
			else
			{
				xs = 720;
			}
		}
		glutPostRedisplay();
		break;

	case GLUT_KEY_DOWN:

		if (xs != 0)
		{
			xs = xs - 15;
		}

		else
		{
			if (xc != 0)
			{
				xc = xc + 15;
			}
			else
			{
				xc = 0;
			}
			xs = 0;
		}
		glutPostRedisplay();
		break;

	}
}

int main(int argc, char** argv)
{
	printf("Press the arrow keys for simulation\n");
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(1250, 600);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("TCP");
	glutDisplayFunc(myDisplay);
	myInit();
	glutSpecialFunc(specialkey);

	glutMainLoop();
	return 0;
}

