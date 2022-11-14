#ifndef __POINT_H__
#define __POINT_H__

typedef struct _point
{
   int xpos;
   int ypos;
} Point;

void SetPointPos(Point *ppos, int xpos, int ypos); // xpos, ypos 값 설정
void ShowPointPos(Point *ppos);                    // xpos, ypos 값 출력
int PointComp(Point *pos1, Point *pos2);           // 두 Point 변수 비교

#endif