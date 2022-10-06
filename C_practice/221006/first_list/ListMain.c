#include <stdio.h>
#include "ArrayList.h"

int main()
{
   List list;
   int data;
   ListInit(&list);

   LInsert(&list, 11);
   LInsert(&list, 11);
   LInsert(&list, 22);
   LInsert(&list, 22);
   LInsert(&list, 33);

   printf("현재 데이터 수 : %d ", LCount(&list));

   if (LFirst(&list, &data))
   {
      printf("%d ", data);

      while (LNext(&list, &data))
      {
         printf("%d ", data);
      }
   }
   printf("\n\n");

   // 숫자 22 모두 삭제
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

   printf("현재 데이터 수 : %d ", LCount(&list));

   if (LFirst(&list, &data))
   {
      printf("%d ", data);

      while (LNext(&list, &data))
      {
         printf("%d ", data);
      }
   }
   printf("\n");

   return 0;
}
