#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <math.h>

#include <stdlib.h>
#include <windows.h>

void display();
void reshape(int w,int h);
void init();



void init()
{
    // glClearColor(0.0,0.0,0.0,1.0);
    glClearColor(19/255.0, 0/255.0, 55/255.0, 1);


}

int main(int argc,char**argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_RGB);

    // window
    glutInitWindowPosition(200,0);
    glutInitWindowSize(1200,800);
    glutCreateWindow("19101076-19102091-19102573");

    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    init();

    glutMainLoop();
}

void circle (float raduis, int x, int y)
{
    for(int i = 0; i < 360; i++)
    {
        float angle = i * 3.14 / 180;
        glVertex2d(raduis* cos(angle)+x,raduis * sin(angle)+y);

    }
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT); //to clear all previous color frames
    glLoadIdentity(); // reset all translation or rotation done


    // circles in the sky
    glBegin(GL_POLYGON);
    glColor4f(81.0/255.0,  1.0/255.0,238.0/255.0, 255.0/255.0);
    circle(2,140,90);
    glEnd();
    //
    glBegin(GL_POLYGON);
    glColor4f(81.0/255.0,  1.0/255.0,238.0/255.0, 255.0/255.0);
    circle(1,145,80);
    glEnd();
    //
    glBegin(GL_POLYGON);
    glColor4f(81.0/255.0,  1.0/255.0,238.0/255.0, 255.0/255.0);
    circle(1,120,80);
    glEnd();
    //
    glBegin(GL_POLYGON);
    glColor4f(81.0/255.0,  1.0/255.0,238.0/255.0, 255.0/255.0);
    circle(0.5,20,60);
    glEnd();
    //
    glBegin(GL_POLYGON);
    glColor4f(81.0/255.0,  1.0/255.0,238.0/255.0, 255.0/255.0);
    circle(1.7,30,80);
    glEnd();
    //
    glBegin(GL_POLYGON);
    glColor4f(81.0/255.0,  1.0/255.0,238.0/255.0, 255.0/255.0);
    circle(1,10,70);
    glEnd();
    //
    glBegin(GL_POLYGON);
    glColor4f(81.0/255.0,  1.0/255.0,238.0/255.0, 255.0/255.0);
    circle(1,9,90);
    glEnd();
    //
    glBegin(GL_POLYGON);
    glColor4f(81.0/255.0,  1.0/255.0,238.0/255.0, 255.0/255.0);
    circle(1,20,95);
    glEnd();
    //
    glBegin(GL_POLYGON);
    glColor4f(81.0/255.0,  1.0/255.0,238.0/255.0, 255.0/255.0);
    circle(0.5,50,90);
    glEnd();
    //
    glBegin(GL_POLYGON);
    glColor4f(81.0/255.0,  1.0/255.0,238.0/255.0, 255.0/255.0);
    circle(0.5,10,80);
    glEnd();
    //
    glBegin(GL_POLYGON);
    glColor4f(81.0/255.0,  1.0/255.0,238.0/255.0, 255.0/255.0);
    circle(0.5,5,90);
    glEnd();
    //
    glBegin(GL_POLYGON);
    glColor4f(81.0/255.0,  1.0/255.0,238.0/255.0, 255.0/255.0);
    circle(0.5,5,50);
    glEnd();
    //
    glBegin(GL_POLYGON);
    glColor4f(81.0/255.0,  1.0/255.0,238.0/255.0, 255.0/255.0);
    circle(0.5,15,70);
    glEnd();
    //
    glBegin(GL_POLYGON);
    glColor4f(81.0/255.0,  1.0/255.0,238.0/255.0, 255.0/255.0);
    circle(0.4,10,95);
    glEnd();
    //
    glBegin(GL_POLYGON);
    glColor4f(81.0/255.0,  1.0/255.0,238.0/255.0, 255.0/255.0);
    circle(0.5,4,97);
    glEnd();
    //
    glBegin(GL_POLYGON);
    glColor4f(81.0/255.0,  1.0/255.0,238.0/255.0, 255.0/255.0);
    circle(0.5,60,70);
    glEnd();
    //

    //shades
    {

        glLineWidth(2);
        glBegin(GL_POLYGON);
        glColor4f(11/255.0, 23/255.0,97/255.0,1);

        double radius1 = 80 ;
        for(int i=0; i<180; i++)
        {
            float angle = i* 3.14 / 180 ;
            glVertex2f((radius1)* cos(angle)+140, radius1 * sin(angle)-20);
        }
        glEnd();

    }


    {

        glLineWidth(2);
        glBegin(GL_POLYGON);
        glColor4f(9.0/255.0,  30/255.0,119.0/255.0, 255.0/255.0);
        double radius1 = 70 ;
        for(int i=0; i<180; i++)
        {
            float angle = i* 3.14 / 180 ;
            glVertex2f((radius1)* cos(angle)+140, radius1 * sin(angle)-20);
        }
        glEnd();

    }


    //Earth
    {

        glLineWidth(2);
        glBegin(GL_POLYGON);
        glColor4f(0.0/255.0,  82/255.0,218.0/255.0, 255.0/255.0);
        double radius16 = 60 ;
        for(int i=0; i<180; i++)
        {
            float angle = i* 3.14 / 180 ;
            glVertex2f((radius16)* cos(angle)+140, radius16 * sin(angle)-20);
        }
        glEnd();

    }

    //inside earth

    glBegin(GL_POLYGON);
    glColor4f(101.0/255.0,  202/255.0,100.0/255.0, 255.0/255.0);
    circle(2.5,99,20);
    glEnd();
    //
    glBegin(GL_POLYGON);
    glColor4f(101.0/255.0,  202/255.0,100.0/255.0, 255.0/255.0);
    circle(2,101,18);
    glEnd();
    //
    glBegin(GL_POLYGON);
    glColor4f(101.0/255.0,  202/255.0,100.0/255.0, 255.0/255.0);
    circle(7,130,30);
    glEnd();
    //
    glBegin(GL_POLYGON);
    glColor4f(101.0/255.0,  202/255.0,100.0/255.0, 255.0/255.0);
    circle(7,135,27);
    glEnd();
    //
    glBegin(GL_POLYGON);
    glColor4f(101.0/255.0,  202/255.0,100.0/255.0, 255.0/255.0);
    circle(3.5,122,30);
    glEnd();
    //
    glBegin(GL_POLYGON);
    glColor4f(1.0f, 1.0f, 1.0f, 0.0f);
    circle(3,128,25);
    glEnd();
    //
    glBegin(GL_POLYGON);
    glColor4f(1.0f, 1.0f, 1.0f, 0.0f);
    circle(2,125,25);
    glEnd();
    //
    glBegin(GL_POLYGON);
    glColor4f(1.0f, 1.0f, 1.0f, 0.0f);
    circle(3,89,5);
    glEnd();
    //
    glBegin(GL_POLYGON);
    glColor4f(1.0f, 1.0f, 1.0f, 0.0f);
    circle(3.5,92,6);
    glEnd();
    //
    glBegin(GL_POLYGON);
    glColor4f(101.0/255.0,  202/255.0,100.0/255.0, 255.0/255.0);
    circle(2.4,149,30);
    glEnd();
    //
    glBegin(GL_POLYGON);
    glColor4f(101.0/255.0,  202/255.0,100.0/255.0, 255.0/255.0);
    circle(2.4,140,34);
    glEnd();
    //
    glBegin(GL_POLYGON);
    glColor4f(101.0/255.0,  202/255.0,100.0/255.0, 255.0/255.0);
    circle(3.6,130,10);
    glEnd();
    //
    glBegin(GL_POLYGON);
    glColor4f(101.0/255.0,  202/255.0,100.0/255.0, 255.0/255.0);
    circle(6,124,10);
    glEnd();
    //
    glBegin(GL_POLYGON);
    glColor4f(1.0f, 1.0f, 1.0f, 0.0f);
    circle(3.3,120,1.5);
    glEnd();
    //
    glBegin(GL_POLYGON);
    glColor4f(101.0/255.0,  202/255.0,100.0/255.0, 255.0/255.0);
    circle(3.3,110,1.5);
    glEnd();
    //
    glBegin(GL_POLYGON);
    glColor4f(101.0/255.0,  202/255.0,100.0/255.0, 255.0/255.0);
    circle(2.6,107,4);
    glEnd();

    glFlush(); // to show drawn object on screen
}

void reshape(int w,int h)
{
    glViewport(0,0,(GLsizei)w,(GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0,150,0,100);
    glMatrixMode(GL_MODELVIEW);
}
