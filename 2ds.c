#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>
void main()
{
int x1,y1,x2,y2,r;
float rx,xn1,yn1,xn2,yn2; float sx,sy;
int ch,gd=DETECT,gm;
initgraph(&gd,&gm,"C:/TC/BGI");
printf("enter the coordinates x1,y1,x2,y2:");
scanf("%d\n%d\n%d\n%d",&x1,&y1,&x2,&y2);
outtextxy(200,100,"ORIGINAL OBJECT");
line(x1,y1,x2,y2);
printf("enter scalling factor:");
scanf("%f\n%f",&sx,&sy); cleardevice();
outtextxy(300,200,"SCALING");
xn1=x1*sx;
yn1=y1*sy;
xn2=x2*sx;
yn2=y2*sy;
line(xn1,yn1,xn2,yn2);
getch();
}
