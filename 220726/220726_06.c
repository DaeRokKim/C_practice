#include <stdio.h>

struct point
{
  double xpos;
  double ypos;
  struct point *ptr;
};

int main()
{
  struct point pos1 = {1.1, 1.2};
  struct point pos2 = {2.1, 2.2};
  struct point pos3 = {3.1, 3.2};

  pos1.ptr = &pos2;
  pos2.ptr = &pos3;
  pos3.ptr = &pos1;

  printf("점의 연결관계 \n");
  printf("[%.1f, %.1f]와 [%.1f, %.1f] 연결 \n", pos1.xpos, pos1.ypos, pos1.ptr->xpos, pos1.ptr->ypos);
  printf("[%.1f, %.1f]와 [%.1f, %.1f] 연결 \n", pos2.xpos, pos2.ypos, pos2.ptr->xpos, pos2.ptr->ypos);
  printf("[%.1f, %.1f]와 [%.1f, %.1f] 연결 \n", pos3.xpos, pos3.ypos, pos3.ptr->xpos, pos3.ptr->ypos);

  return 0;
}