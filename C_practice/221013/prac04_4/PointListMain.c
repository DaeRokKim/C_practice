#include <stdio.h>
#include <stdlib.h>
#include "DLinkedList.h"
#include "Point.h"

int SortFunc(Point *ppos1, Point *ppos2)
{
   if (ppos1->xpos < ppos2->xpos)
   {
      return 0;
   }
   else if (ppos1->xpos == ppos2->xpos)
   {
      if (ppos1->ypos < ppos2->ypos)
      {
         return 0;
      }
      else
      {
         return 1;
      }
   }
   else
   {
      return 1;
   }
}

int main()
{
   List list;
   Point CompPos;
   Point *ppos;

   ListInit(&list);

   SetSortRule(&list, SortFunc);

   // 데이터 저장
   ppos = (Point *)malloc(sizeof(Point));
   SetPointPos(ppos, 3, 1);
   LInsert(&list, ppos);

   ppos = (Point *)malloc(sizeof(Point));
   SetPointPos(ppos, 2, 2);
   LInsert(&list, ppos);

   ppos = (Point *)malloc(sizeof(Point));
   SetPointPos(ppos, 3, 2);
   LInsert(&list, ppos);

   ppos = (Point *)malloc(sizeof(Point));
   SetPointPos(ppos, 2, 1);
   LInsert(&list, ppos);

   // 데이터 출력 확인하기
   printf("현재 데이터의 수 : %d \n", LCount(&list));

   if (LFirst(&list, &ppos))
   {
      ShowPointPos(ppos);

      while (LNext(&list, &ppos))
      {
         ShowPointPos(ppos);
      }
   }
   printf("\n");

   // 데이터 삭제 xpos == 2인 데이터 삭제
   CompPos.xpos = 2;
   CompPos.ypos = 0;

   if (LFirst(&list, &ppos))
   {
      if (PointComp(ppos, &CompPos) == 1)
      {
         ppos = LRemove(&list);
         free(ppos);
      }

      while (LNext(&list, &ppos))
      {
         if (PointComp(ppos, &CompPos) == 1)
         {
            ppos = LRemove(&list);
            free(ppos);
         }
      }
   }

   // 삭제 후 남은 데이터 출력
   printf("현재 데이터의 수 : %d \n", LCount(&list));

   if (LFirst(&list, &ppos))
   {
      ShowPointPos(ppos);

      while (LNext(&list, &ppos))
      {
         ShowPointPos(ppos);
      }
   }
   printf("\n");
   return 0;
}