#include <stdio.h>

typedef struct point
{
  int xpos;
  int ypos;
} Point;

void SwapPoint(Point pos1, Point pos2)
{
  Point temp;

  temp = pos1;
  pos1 = pos2;
  pos2 = temp;

  printf("\nSwap\n");
  printf("pos1 : %d, %d \n", pos1.xpos, pos1.ypos);
  printf("pos2 : %d, %d \n", pos2.xpos, pos2.ypos);
}

int main()
{
  Point pos1 = {2, 4};
  Point pos2 = {5, 7};

  printf("pos1 : %d, %d \n", pos1.xpos, pos1.ypos);
  printf("pos2 : %d, %d \n", pos2.xpos, pos2.ypos);

  SwapPoint(pos1, pos2);

  return 0;
}