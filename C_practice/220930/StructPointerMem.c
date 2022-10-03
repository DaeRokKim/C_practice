#include <stdio.h>

typedef struct point
{
   int xpos;
   int ypos;
} Point;

typedef struct circle
{
   double radius;
   struct point *center;
} Circle;

int main()
{
   Point cen = {2, 7};
   double rad = 5.5;

   Circle ring = {rad, &cen};
   printf("원의 반지름 : %g \n", ring.radius);
   printf("원의 중심 [%d, %d] \n", (ring.center)->xpos, (ring.center)->ypos);

   return 0;
}