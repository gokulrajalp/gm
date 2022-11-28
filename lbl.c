#include"graphics.h"
#define ROUND(a) ((int)(a+0.5))
int clipTest (float p,float q, float * tl, float * t2)
{
float r ;
int retVal = TRUE;
if (p < 0.0) {
r = q /p ;
if ( r > *t2 )
retVal = FALSE;
else
if (r > *t1 )
*tl = r;
}
else
if (p>0.0) {
r = q/p ;
if ( r<*t1 )
retVal = FALSE;
else i f (r<*t2)
*t2 = r;
}
else
if (q<0.0)
retVal = FALSE;
return ( retVal ) ;
}
void clipLine (dcPt winMin, dcPt winMax, wcPt2 pl , wcPt2 p2)
{
float t1 = 0.0, t2 = 1.0, dx = p2.x-p1.x, dy;
if(clipTest (-dx, p1.x - winMin.x, &t1, &t2))
if(clipTest (dx, winMax.x - p1.x, &t1, &t2))
{
dy = p2.y - p1.y;
if(clipTest (-dy, p1.y - winMin.y, &t1, &t2))
if(clipTest (dy, winMax.y - p1.y, &t1, &t2)) {
if(t2 < 1.0) {
p2.x = p1.x + t2*dx;
p2.y = p1.y + t2*dy;
}
if(t1 > 0.0) {
p1.x += t1*dx;
p1.y += t1*dy;
}
lineDDA ( ROUND(p1.x), ROUND(p1.y), ROUND(p2.x), ROUND(p2.y) );
}
}
}
