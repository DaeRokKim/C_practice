#include <stdio.h>

typedef struct point
{
  int xpos;
  int ypos;
} Point;

typedef struct Rectangle
{
  Point rect;
} Rectangle;

void CalArea(Rectangle *ptr1, Rectangle *ptr2)
{
  int xpoint = (ptr1->rect).xpos - (ptr2->rect).xpos;
  int ypoint = (ptr1->rect).ypos - (ptr2->rect).ypos;

  int area = xpoint * ypoint;

  if (area < 0)
  {
    area *= -1;
  }

  printf("사각형 넓이 : %d \n", area);
}

void FindPoint(Rectangle *ptr1, Rectangle *ptr2)
{
  Point point1 = {(ptr1->rect).xpos, (ptr1->rect).ypos};
  Point point2 = {(ptr1->rect).xpos, (ptr2->rect).ypos};
  Point point3 = {(ptr2->rect).xpos, (ptr1->rect).ypos};
  Point point4 = {(ptr2->rect).xpos, (ptr2->rect).ypos};

  printf("사각형 각 점의 위치\n");
  printf("point : [%d, %d]\n", point1.xpos, point1.ypos);
  printf("point : [%d, %d]\n", point2.xpos, point2.ypos);
  printf("point : [%d, %d]\n", point3.xpos, point3.ypos);
  printf("point : [%d, %d]\n", point4.xpos, point4.ypos);
}

int main()
{
  Rectangle r1 = {0, 0};
  Rectangle r2 = {100, 100};

  CalArea(&r1, &r2);
  FindPoint(&r1, &r2);

  return 0;
}