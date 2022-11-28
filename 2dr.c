#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>
void main()
{
int x1,y1,x2,y2,r;
float rx,xn1,yn1,xn2,yn2;
int ch,gd=DETECT,gm;
initgraph(&gd,&gm,"C:/TC/BGI");
printf("enter the coordinates x1,y1,x2,y2:");
scanf("%d\n%d\n%d\n%d",&x1,&y1,&x2,&y2);
outtextxy(200,100,"ORIGINAL OBJECT");
line(x1,y1,x2,y2);
printf("enter the angle of rotation:");
scanf("%d",&r);
outtextxy(500,200,"ROTATION");
rx=(r*3.14)/180;
xn1=x1*cos(rx)-y1*sin(rx);
yn1=y1*cos(rx)+x1*sin(rx);
xn2=x2*cos(rx)-y2*sin(rx);
yn2=y2*cos(rx)+x2*sin(rx);
line(xn1,yn1,xn2,yn2); getch();
}
