#include <stdio.h>
#include "DBDLinkedList.h"

int main()
{

   List list;
   int data;
   ListInit(&list);

   LInsert(&list, 8);
   LInsert(&list, 7);
   LInsert(&list, 6);
   LInsert(&list, 5);
   LInsert(&list, 4);
   LInsert(&list, 3);
   LInsert(&list, 2);
   LInsert(&list, 1);

   // 데이터 출력

   printf("전체 데이터의 개수 : %d \n", LCount(&list));

   if (LFirst(&list, &data))
   {
      printf("%d ", data);

      while (LNext(&list, &data))
      {
         printf("%d ", data);
      }
   }
   printf("\n\n");

   // 삭제 진행하기
   // 2의 배수만 삭제
   printf("DELETE \n");

   if (LFirst(&list, &data))
   {
      if (data % 2 == 0)
      {
         LRemove(&list);
      }

      while (LNext(&list, &data))
      {
         if (data % 2 == 0)
         {
            LRemove(&list);
         }
      }
   }
   printf("\n");

   // 다시 전체 데이터 출력

   printf("전체 데이터의 개수 : %d \n", LCount(&list));

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