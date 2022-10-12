#include <stdio.h>
#include <stdlib.h>
#include "DLinkedList.h"

int SortFunc(int d1, int d2)
{
   if (d1 < d2)
   {
      return 0;
   }
   else
   {
      return 1;
   }
}

int main()
{
   List list;
   int data;
   ListInit(&list);

   // 정렬 기준 등록
   SetSortRule(&list, SortFunc);

   // 데이터 5개 저장
   LInsert(&list, 11);
   LInsert(&list, 11);
   LInsert(&list, 22);
   LInsert(&list, 22);
   LInsert(&list, 33);

   // 저장된 데이터 전체 출력
   printf("현재 데이터 수 : %d \n", LCount(&list));

   if (LFirst(&list, &data))
   {
      printf("%d ", data);

      while (LNext(&list, &data))
      {
         printf("%d ", data);
      }
   }
   printf("\n\n");

   // 숫자 22 검색해서 모두 삭제
   if (LFirst(&list, &data))
   {
      if (data == 22)
      {
         LRemove(&list);
      }
      while (LNext(&list, &data))
      {
         if (data == 22)
         {
            LRemove(&list);
         }
      }
   }

   // 삭제 후 남아있는 데이터 전체 출력
   printf("현재 데이터 수 : %d \n", LCount(&list));

   if (LFirst(&list, &data))
   {
      printf("%d ", data);

      while (LNext(&list, &data))
      {
         printf("%d ", data);
      }
   }
   printf("\n\n");

   return 0;
}