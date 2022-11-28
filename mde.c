#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<stdio.h> void main()
{
int gd=DETECT,gm;
long d1,d2;
int x,y,i;
long rx,ry,rxsq,rysq,trxsq,trysq,dx,dy;
printf("\n Enter x and y radius:");
scanf("%ld%ld",&rx,&ry);
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"E:\\tc\\bgi");
rxsq=rx*rx;
rysq=ry*ry; trxsq=2*rxsq;
trysq=2*rysq; x=0;
y=ry;
d1=rysq-rxsq*ry+(0.25*rxsq);
dx=trysq*x;
dy=trxsq*y; do
{
setcolor(25);
putpixel(200+x,200+y,12);
putpixel(200-x,200-y,12);
putpixel(200+x,200-y,10);
putpixel(200-x,200+y,10);
if(d1<10)
{
x=x+1;
y=y;
dx=dx+trysq;
d1=d1+dx+rysq;
}
else
{
x=x+1;
y=y-1;
dx=dx+trysq;
dy=dy-trxsq;
d1=d1+dx-dy+rysq;
}
}
while(dx<dy);
d2=rysq*(x+0.5)*(x+0.5)+rxsq*(y-1)*(y-1)-rxsq*rysq;
do
{
putpixel(200+x,200+y,12);
putpixel(200-x,200-y,12);
putpixel(200+x,200-y,10);
putpixel(200-x,200+y,10);
if(d2>0)
{
x=x;
y=y-1;
dy=dy-trxsq;
d2=d2-dy+rxsq;
}
else
{
x=x+1;
y=y-1;
dy=dy-trxsq;
dx=dx+trysq;
d2=d2+dx-dy+rxsq;
}
}
while(y>0);
getch();
closegraph();
}
