#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<graphics.h>
#include<dos.h>
#include<math.h>
void main()
{
int driver,mode,k xa,xb,ya,yb,dx,dy,x,y,i,p,dy2,dydx2;
char str[10];
clrscr();
printf("\nenter starting pt(xa,ya):");
scanf("%d%d",&xa,&ya);
printf("\nenter ending pt(xb,yb):");
scanf("%d,%d",&xb,&yb);
x=xa;
y=ya;
driver=DETECT;
initgraph(&driver,&mode,"C:/TC/BGI");
printf("\nBRESENHAMS LINE ALGORITHM");
dx=abs(xb-xa);
dy=abs(yb-ya);
p=(2*dy)-dx;
dy2=2*dy;
dydx2=2*(dy-dx);
circle(x,y,2);
putpixel(x,y,4);
sprintf(str,"(%d,%d)",xa,ya);
outtextxy(x+5,y,str);
putpixel(x,y,2);
for(i=0;i<=dx;i++)
{
if(p<0)
{
x=x+1;
putpixel(x,y,2); p+=dy2;
}
else
{
x=x+1; y=y+1;
putpixel(x,y,2);
p+=dydx2;
} }
circle(x,y,2);
putpixel(x,y,4);
sprintf(str,"(%d%d)",xb,yb);
outtextxy(x+5,y,str);
getch();
}
