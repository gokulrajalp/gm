#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void main()
{
int ch,gd=DETECT,gm;
int x1,y1,x2,y2;
int tx,ty,xn1,xn2,yn1,yn2;
initgraph(&gd,&gm,"D:/TC/BGI");
printf("\nEnter the co-ordinates x1,y1,x2,y2:");
scanf("%d\n%d\n%d\n%d",&x1,&y1,&x2,&y2);
outtextxy(200,100,"\nORIGINAL OBJECT");
line(x1,y1,x2,y2);
printf("\nEnter the translation Vector:");
scanf("%d\n%d",&tx,&ty);
cleardevice();
outtextxy(400,100,"TRANSLATION");
xn1=x1+tx;
yn1=y1+ty;
xn2=x2+tx;
yn2=y2+ty;
line(xn1,yn1,xn2,yn2);
getch(); }
