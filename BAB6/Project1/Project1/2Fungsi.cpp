//#include <windows.h>
//#include <glut.h>
//#include <math.h>
//void cylinder(float alas, float atas, float tinggi);
//void kerucut(float bawah, float atas2, float panjang);
//void blok(float tebal, int ratiol, int ratiop);
//
//GLfloat source_light[] = { 0.30, 0.30, 0.30, 0.50 };
//double Loop, LoopAll = 0;
//
//void Mobil(void)
//{
//	glClearColor(1.0, 9.0, 1.0, 0.0); //blackground
//	glShadeModel(GL_SMOOTH);
//	glMatrixMode(GL_PROJECTION);
//	glLoadIdentity();
//	gluPerspective(50.0, 1.5, 10.0, 1000.0);
//	glEnable(GL_DEPTH_TEST);
//	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
//	glEnable(GL_LIGHTING);
//	glLightfv(GL_LIGHT7, GL_DIFFUSE, source_light);
//	glEnable(GL_LIGHT7);
//	glEnable(GL_COLOR_MATERIAL);
//	glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT);
//}
//void display(void)
//{
//	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
//	glMatrixMode(GL_MODELVIEW);
//	glLoadIdentity();
//	glTranslatef(0, 0, -100);// besar kecilnya mobil
//	Loop++;
//	glRotatef(Loop, 0.9, 4.0, 0.6);//mobil yang berotasi
//	glPushMatrix();//body
//	//glpushmatrix();
//	glColor3f(0.0, 0.0, 9.0);
//	blok(10, 3, 2);
//
//	glTranslatef(0, 9, 0);
//	blok(10, 3, 2);
//	glTranslatef(10, -10, 0);
//	blok(10, 5.5, 2);
//	glRotatef(-35, 0, 0, 15);
//	glTranslatef(0, 7, 0);
//	blok(10, 2, 2);
//	glTranslatef(2, 4.9, -2.5);
//	glColor3f(0.9, 0.9, 0.9);// warna kaca
//	blok(0.5, 20, 31);
//	glRotatef(180, 45, -45, 0);
//	glPopMatrix();
//
//	glPushMatrix();//roda
//	glColor3f(0.0, 0.0, 0.0);
//	glTranslatef(20, -8, -7);
//	cylinder(5, 5, 3);
//	glColor3f(0.0, 0.0, 0.0);
//	glTranslatef(-20, 8, 7);
//	glTranslatef(-5, -8, -7);
//	cylinder(5, 5, 3);
//	glColor3f(0.0, 0.0, 0.0);
//	glTranslatef(5, 8, 7);
//	glRotatef(180, 0, 180, 0);
//	glTranslatef(3, -8, -17);
//	cylinder(5, 5, 3);
//	glColor3f(0.0, 0.0, 0.0);
//	glTranslatef(-3, 8, 17);
//	glTranslatef(-22, -8, -17);
//	cylinder(5, 5, 3);
//	glColor3f(1.0, 1.0, 1.0);
//
//	glRotatef(90, 1, 0, 0);
//	glTranslatef(8, 2.5, -15);
//	blok(2, 4, 5);
//
//	glRotatef(90, 0, 1, 0);
//	glTranslatef(0, -0.2, 7);
//	blok(2, 4, 8);
//
//	glRotatef(0, 0, 0, 0);
//	glTranslatef(0, 19.2, 0);
//	blok(2, 4, 8);
//	glRotatef(90, 0, 1, 0);
//	glTranslatef(7, 0, -8);
//	blok(2, 4, 5);
//	glColor3f(9.9, 9.9, 0.0);//lampu
//	glRotatef(90, 0, 1, 0);
//	glTranslatef(0, -3, 20);
//	cylinder(2, 2, 3);
//	glColor3f(9.9, 9.9, 0.0);//lampu
//	glRotatef(0, 0, 0, 0);
//	glTranslatef(0, -12, 0);
//	cylinder(2, 2, 3);
//	glColor3f(0.0, 0.0, 0.0);//knalpot
//	glRotatef(0, 0, 0, 0);
//	glTranslatef(0, 0, -52);
//	cylinder(1, 1, 3);
//	glColor3f(1.0, 1.0, 1.0);
//	glRotatef(90, 1, 0, 0);
//	glTranslatef(-8, 3.5, -12);
//	blok(2, 4, 8);
//	glColor3f(9.0, 0.0, 0.0);//lampu atas
//
//	glRotatef(0, 0, 0, 0);
//	glTranslatef(-8, 28, 0);
//	cylinder(1, 1, 12);
//
//	glPopMatrix();
//
//	glFlush();
//	glutSwapBuffers();
//}
//void kerucut(float bawah, float atas2, float panjang)
//{
//	float i;
//	glPushMatrix();
//	glTranslatef(1.0, 0.0, bawah / 24);
//	glutSolidCone(bawah, 0, 32, 4);
//	for (i = 0; i <= panjang; i += bawah / 24)
//	{
//		glTranslatef(0.0, 0.0, bawah / 24);
//		glutSolidTorus(bawah / 4, bawah - ((i*(bawah - atas2)) / panjang), 16, 16);
//	}
//	glTranslatef(0.0, 0.0, bawah / 4);
//	glutSolidCone(atas2, 0, 20, 1);
//	glColor3f(0., 1., 1.);
//	glPopMatrix();
//}
//void cylinder(float alas, float atas, float tinggi)
//{
//	float i;
//	glPushMatrix();
//	glTranslatef(1.0, 0.0, -alas / 8);
//	glutSolidCone(alas, 0, 32, 4);
//	for (i = 0; i <= tinggi; i += alas / 24)
//	{
//		glTranslatef(0.0, 0.0, alas / 24);
//
//		glutSolidTorus(alas / 4, alas - ((i*(alas -
//
//			atas)) / tinggi), 16, 16);
//	}
//	glTranslatef(0.0, 0.0, alas / 4);
//	glutSolidCone(atas, 0, 20, 1);
//	glColor3f(1., 0., 0.);
//	glPopMatrix();
//}
//void blok(float tebal, int ratiol, int ratiop)
//{
//	float i, j;
//	glPushMatrix();
//	for (i = 0; i<ratiop; i++)
//	{
//		glTranslatef(-(ratiol + 1)*tebal / 2, 0.0,
//
//			0.0);
//
//		for (j = 0; j<ratiol; j++)
//		{
//			glTranslatef(tebal, 0.0, 0.0);
//			glutSolidCube(tebal);
//		}
//		glTranslatef(-(ratiol - 1)*tebal / 2, 0.0,
//
//			tebal);
//	}
//	glPopMatrix();
//}
//void tampil()
//{
//	display();
//}
//int main(int argc, char **argv)
//{
//	glutInit(&argc, argv);
//	glutInitDisplayMode(GLUT_DOUBLE |
//		GLUT_RGB);//|GLUT_DEPTH);
//	glutInitWindowPosition(10, 10);
//	glutInitWindowSize(1000, 700);
//	glutCreateWindow("3D_2018068 - ANGGIE ANGESTI FITRI");
//	glClearColor(0.5, 0.5, 0.0, 0.0);
//
//	glutDisplayFunc(display);
//	gluOrtho2D(-320., 320., -240.0, 240.0);
//	glutIdleFunc(tampil);
//	Mobil();
//	glutMainLoop();
//	return(0);
//}




#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <glut.h>

//Deklarasi Variable
float z_pos = -10.0f;
float rot = 0.0f;
int t = 10;
//Membuat Method resize

void resize(int width, int height)
{
	glViewport(0, 0, width, height);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(45.0, (float)width / (float)height, 1.0, 300.0);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
}
void WireCone(){
	glColor3d(0, 1, 1);
	glutWireCone(5, t, 50, 50); // fungsi disamping adalah bentuk pendeklarasian fungsi “Cone”
}

void WireDodecahedron(){
	glColor3d(1, 0, 0);
	glutWireDodecahedron();
}
//Membuat Method timeout
void myTimeOut(int id)
{
	// called if timer event
	// ...advance the state of animation incrementally...
	rot += 1;
	glutPostRedisplay(); // request redisplay
	glutTimerFunc(100, myTimeOut, 0); // request next timer event
}

//Membuat Method keyboard
void myKeyboard(unsigned char key, int x, int y)
{
	if ((key == '<') || (key == ',')) z_pos -= 0.1f;
	if ((key == '>') || (key == '.')) z_pos += 0.1f;
}

//Membuat Method display
void mydisplay(void)
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();
	glTranslatef(0.0, 0.0f, z_pos);
	glRotatef(rot, 0, 1, 0);
	WireDodecahedron();
	WireCone();
	glutSwapBuffers();
}


//Membuat Method inisialisasi
void init()
{
	glEnable(GL_DEPTH_TEST);
	glClearColor(0.0, 0.0, 0.0, 1.0); // A Background Clear Color
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(45, (GLdouble)500.0 / (GLdouble)500.0, 0, 100);
	glMatrixMode(GL_MODELVIEW);
	return;
}

//Program Utama
int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	//glutInitDisplayMode( GLUT_DOUBLE /*| GLUT_DEPTH*/ );
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("3D");
	// callbacks
	glutDisplayFunc(mydisplay);
	glutKeyboardFunc(myKeyboard);
	glutTimerFunc(100, myTimeOut, 0);
	glutReshapeFunc(resize);
	init();
	glutMainLoop();
	return 0;
}
