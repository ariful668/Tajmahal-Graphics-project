#include<windows.h>
#include<string.h>
#include<stdarg.h>
#include<stdio.h>
#include <GL/glut.h>
static double x=0.0;


void Taj(double rang)
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();
    glTranslatef(0.0f,0.0f,-13.0f);
    glRotatef(rang,0.0f,1.0f,0.0f);

    /* Draw the bottom box */
	glPushMatrix();
	glScaled(0.8,0.04,0.8);
	glTranslatef(0.0,-30.2,0.0);
	glutSolidCube(7.0);
	glPopMatrix();

    //main cube
    glTranslatef(0.0,-.6,0.0);
	glutSolidCube(2.0);

	//main gumbazz
	glPushMatrix();
	glScaled(0.8,1.0,0.8);
	glTranslatef(0.0,1.5,0.0);
	glutSolidSphere(0.8,80,120);
	glPopMatrix();

	glTranslatef(0.0,1.0,0.0);
	glScaled(1.2,0.25,1.2);
	glutSolidCube(0.9);

	//gumbaz pointer

	glPushMatrix();
	glScaled(0.03,0.5,0.03);
	glTranslatef(0.0,10.8,0.0);
	glutSolidSphere(0.4,80,120);
	glPopMatrix();

	//Minars
	glPushMatrix();
	glTranslated(2,-1.9,2);
	glScaled(.2,10.5,.2);
	glutSolidSphere(0.4,80,120);
	glPopMatrix();

	//minar's sphere
	glPushMatrix();
	glTranslated(2,0.8,2);
	glScaled(0.3,1.5,0.3);
	glutSolidSphere(0.4,80,120);
	glPopMatrix();

	//Minars
	glPushMatrix();
	glTranslated(-2,-1.9,2);
	glScaled(.2,10.5,.2);
	glutSolidSphere(0.4,80,120);
	glPopMatrix();

	//minar's sphere
	glPushMatrix();
	glTranslated(-2,0.8,2);
	glScaled(0.3,1.5,0.3);
	glutSolidSphere(0.4,80,120);
	glPopMatrix();


	//Minars
	glPushMatrix();
	glTranslated(-2,-1.9,-2);
	glScaled(.2,10.5,.2);
	glutSolidSphere(0.4,80,120);
	glPopMatrix();

	//minar's sphere
	glPushMatrix();
	glTranslated(-2,0.8,-2);
	glScaled(0.3,1.5,0.3);
	glutSolidSphere(0.4,80,120);
	glPopMatrix();

	//Minars
	glPushMatrix();
	glTranslated(2,-1.9,-2);
	glScaled(.2,10.5,.2);
	glutSolidSphere(0.4,80,120);
	glPopMatrix();

	//minar's sphere
	glPushMatrix();
	glTranslated(2,0.8,-2);
	glScaled(0.3,1.5,0.3);
	glutSolidSphere(0.4,80,120);
	glPopMatrix();

	//short Minars
	glPushMatrix();
	glTranslated(0.6,-0.5,0.6);
	glScaled(.2,11.5,.2);
	glutSolidSphere(0.2,80,120);
	glPopMatrix();

	//short minar's sphere
	glPushMatrix();
	glTranslated(0.6,0.5,0.6);
	glScaled(0.3,1.5,0.3);
	glutSolidSphere(0.4,80,120);
	glPopMatrix();

	//short Minars
	glPushMatrix();
	glTranslated(0.6,-0.5,-0.6);
	glScaled(.2,11.5,.2);
	glutSolidSphere(0.2,80,120);
	glPopMatrix();

	//short minar's sphere
	glPushMatrix();
	glTranslated(0.6,0.5,-0.6);
	glScaled(0.3,1.5,0.3);
	glutSolidSphere(0.4,80,120);
	glPopMatrix();

	//short Minars
	glPushMatrix();
	glTranslated(-0.6,-0.5,-0.6);
	glScaled(.2,11.5,.2);
	glutSolidSphere(0.2,80,120);
	glPopMatrix();

	//short minar's sphere
	glPushMatrix();
	glTranslated(-0.6,0.5,-0.6);
	glScaled(0.3,1.5,0.3);
	glutSolidSphere(0.4,80,120);
	glPopMatrix();

	//short Minars
	glPushMatrix();
	glTranslated(-0.6,-0.5,0.6);
	glScaled(.2,11.5,.2);
	glutSolidSphere(0.2,80,120);
	glPopMatrix();

	//short minar's sphere
	glPushMatrix();
	glTranslated(-0.6,0.5,0.6);
	glScaled(0.3,1.5,0.3);
	glutSolidSphere(0.4,80,120);
	glPopMatrix();
    glFlush();
    glutSwapBuffers();
}


void wTaj(double rang)
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();
    glTranslatef(0.0f,0.0f,-13.0f);
    glRotatef(rang,0.0f,1.0f,0.0f);

    /* Draw the bottom box */
	glPushMatrix();
	glScaled(0.8,0.04,0.8);
	glTranslatef(0.0,-30.2,0.0);
	glutSolidCube(7.0);
	glPopMatrix();

    //main cube
    glTranslatef(0.0,-.6,0.0);
	glutWireCube(2.0);


	//main gumbazz
	glPushMatrix();
	glScaled(0.8,1.0,0.8);
	glTranslatef(0.0,1.5,0.0);
	glutWireSphere(0.8,80,120);
	glPopMatrix();
	glTranslatef(0.0,1.0,0.0);
	glScaled(1.2,0.25,1.2);
	glutWireCube(0.9);

	//gumbaz pointer
	glPushMatrix();
	glScaled(0.03,0.5,0.03);
	glTranslatef(0.0,10.8,0.0);
	glutWireSphere(0.4,80,120);
	glPopMatrix();

	//Minars
	glPushMatrix();
	glTranslated(2,-1.9,2);
	glScaled(.2,10.5,.2);
	glutWireSphere(0.4,20,25);
	glPopMatrix();

	//minar's sphere
	glPushMatrix();
	glTranslated(2,0.8,2);
	glScaled(0.3,1.5,0.3);
	glutWireSphere(0.4,10,15);
	glPopMatrix();

	//Minars
	glPushMatrix();
	glTranslated(-2,-1.9,2);
	glScaled(.2,10.5,.2);
	glutWireSphere(0.4,20,25);
	glPopMatrix();

	//minar's sphere
	glPushMatrix();
	glTranslated(-2,0.8,2);
	glScaled(0.3,1.5,0.3);
	glutWireSphere(0.4,10,15);
	glPopMatrix();

	//Minars
	glPushMatrix();
	glTranslated(-2,-1.9,-2);
	glScaled(.2,10.5,.2);
	glutWireSphere(0.4,20,25);
	glPopMatrix();

	//minar's sphere
	glPushMatrix();
	glTranslated(-2,0.8,-2);
	glScaled(0.3,1.5,0.3);
	glutWireSphere(0.4,10,15);
	glPopMatrix();

	//Minars
	glPushMatrix();
	glTranslated(2,-1.9,-2);
	glScaled(.2,10.5,.2);
	glutWireSphere(0.4,20,25);
	glPopMatrix();

	//minar's sphere
	glPushMatrix();
	glTranslated(2,0.8,-2);
	glScaled(0.3,1.5,0.3);
	glutWireSphere(0.4,10,15);
	glPopMatrix();

	//short Minars

	glPushMatrix();
	glTranslated(0.6,-0.5,0.6);
	glScaled(.2,11.5,.2);
	glutWireSphere(0.2,7,10);
	glPopMatrix();

	//short minar's sphere
	glPushMatrix();
	glTranslated(0.6,0.5,0.6);
	glScaled(0.3,1.5,0.3);
	glutWireSphere(0.4,10,8);
	glPopMatrix();

	//short Minars
	glPushMatrix();
	glTranslated(0.6,-0.5,-0.6);
	glScaled(.2,11.5,.2);
	glutWireSphere(0.2,7,10);
	glPopMatrix();

	//short minar's sphere
	glPushMatrix();
	glTranslated(0.6,0.5,-0.6);
	glScaled(0.3,1.5,0.3);
	glutWireSphere(0.4,10,8);
	glPopMatrix();

	//short Minars
	glPushMatrix();
	glTranslated(-0.6,-0.5,-0.6);
	glScaled(.2,11.5,.2);
	glutWireSphere(0.2,7,10);
	glPopMatrix();

	//short minar's sphere
	glPushMatrix();
	glTranslated(-0.6,0.5,-0.6);
	glScaled(0.3,1.5,0.3);
	glutWireSphere(0.4,10,8);
	glPopMatrix();

	//short Minars
	glPushMatrix();
	glTranslated(-0.6,-0.5,0.6);
	glScaled(.2,11.5,.2);
	glutWireSphere(0.2,7,10);
	glPopMatrix();

	//short minar's sphere
	glPushMatrix();
	glTranslated(-0.6,0.5,0.6);
	glScaled(0.3,1.5,0.3);
	glutWireSphere(0.4,10,8);
	glPopMatrix();

	//mumtaz ki qabar
	glPushMatrix();
	glTranslated(-0.2,-5.0,0.0);
	glScaled(0.3,0.5,0.3);
	glutSolidCube(1.0);
	glPopMatrix();

	//shahjahan ki qabar
	glPushMatrix();
	glTranslated(0.2,-5.0,0.0);
	glScaled(0.3,0.5,0.3);
	glutSolidCube(1.0);
	glPopMatrix();
    glFlush();
    glutSwapBuffers();
}

void inc_taj()
{
	x += 1.0;
	Taj(x);
}
void dec_taj()
{
	x -= 1.0;
	Taj(x);
}
void inc_wtaj()
{
	x += 1.0;
	wTaj(x);
}
void dec_wtaj()
{
	x -= 1.0;
	wTaj(x);
}


void doInit()
{
	/* Background and foreground color */
    glClearColor(0.0,0.0,0.0,0.0);
    glColor3f(0.0,1.0,1.0);
    glViewport(0,0,640,480);

	/* Select the projection matrix and reset it then setup our view perspective */
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(30.0f,(GLfloat)640/(GLfloat)480,0.1f,200.0f);

    /* Select the modelview matrix, which we alter with rotatef() */
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glClearDepth(2.0f);
    glEnable(GL_DEPTH_TEST);
    glDepthFunc(GL_LEQUAL);
}

void doDisplay()
{

	GLfloat mat_ambient[]={0.0f,1.0f,2.0f,1.0f};
	GLfloat mat_diffuse[]={0.0f,1.5f,.5f,1.0f};
	GLfloat mat_specular[]={5.0f,1.0f,1.0f,1.0f};
	GLfloat mat_shininess[]={50.0f};
	glMaterialfv(GL_FRONT,GL_AMBIENT,mat_ambient);
	glMaterialfv(GL_FRONT,GL_DIFFUSE,mat_diffuse);
	glMaterialfv(GL_FRONT,GL_SPECULAR,mat_specular);
	glMaterialfv(GL_FRONT,GL_SHININESS,mat_shininess);

	/*GLfloat lightIntensity[]={3.7f,0.7f,0.7f,1.0f};     Orange
	GLfloat light_position[]={2.0f,5.0f,3.0f,1.0f};*/

	/*light source properties*/
	GLfloat lightIntensity[]={1.7f,1.7f,1.7f,1.0f};
	GLfloat light_position[]={2.0f,0.0f,0.0f,0.0f};
	glLightfv(GL_LIGHT0,GL_POSITION,light_position);
	GLfloat light_position2[]={0.0f,0.0f,8.0f,0.0f};
	glLightfv(GL_LIGHT0,GL_POSITION,light_position2);
	GLfloat light_position3[]={0.0f,5.0f,2.0f,0.5f};
	glLightfv(GL_LIGHT0,GL_POSITION,light_position3);
	glLightfv(GL_LIGHT0,GL_DIFFUSE,lightIntensity);
	glFlush();
	glutSwapBuffers();

	Taj(x);

}

void menu(int id)
{
	switch(id)
	{
	case 1:glutIdleFunc(inc_taj);
		break;
	case 2:glutIdleFunc(inc_wtaj);
		break;
	case 3: exit(0);
		break;

	}
	glFlush();
	glutSwapBuffers();
	glutPostRedisplay();
}

void mykey(unsigned char key, int x, int y)
{
	if(key=='t'||key=='T')
	{
		glutIdleFunc(inc_taj);
	}

	if(key=='w'||key=='W')
	{
		glutIdleFunc(inc_wtaj);
	}
	if(key=='e'||key=='E')
	{
		glutIdleFunc(dec_taj);
	}
	if(key=='r'||key=='R')
	{
		glutIdleFunc(dec_wtaj);
	}
	if(key=='q'||key=='Q')
	{
		exit(0);
	}

}

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB|GLUT_DEPTH);
    glutInitWindowSize(640,480);
    glutInitWindowPosition(0,0);
    glutCreateWindow("Tajmahal");
    glutDisplayFunc(doDisplay);
	glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0);
	glShadeModel(GL_SMOOTH);
	glEnable(GL_DEPTH_TEST);
	glEnable(GL_NORMALIZE);
	glEnable(GL_DEPTH_TEST);
	glutKeyboardFunc(mykey);
	glutCreateMenu(menu);
    glutAddMenuEntry("Taj",1);
	glutAddMenuEntry("Wired Taj",2);
	glutAddMenuEntry("Exit",3);
	glutAttachMenu(GLUT_RIGHT_BUTTON);
	doInit();
    glutMainLoop();
	return 0;
}
