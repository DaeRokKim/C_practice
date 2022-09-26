#include <stdio.h>
#include "ArrayList.h"

int main() {
   int sum = 0;

   // ArrayList 생성 및 초기화
   List list;
   int data;
   ListInit(&list);

   // 정수 1~9 리스트에 저장하기

   for (int i=1; i<10; i++) {
      LInsert(&list, i);
   }

   // 저장된 값을 순차적으로 참조, 합을 계산해 출력
   if (LFirst(&list, &data)) {
      printf("%d ", data);
      sum += data;

      while (LNext(&list, &data)) {
         printf("%d ", data);
         sum += data;
      }

      printf("\n전체 데이터의 합 : %d \n", sum);
   }

   if (LFirst(&list, &data)) {
      if (data % 2 == 0 || data & 3 == 0) {
         LRemove(&list);
      }

      while (LNext(&list, &data)) {
         if (data % 2 == 0 || data % 3 == 0) {
            LRemove(&list);
         }
      }
   }
   printf("\n\n");


   printf("삭제 이후 남은 데이터 개수 : %d \n", LCount(&list));
   printf("삭제 이후 남은 데이터 : \n");
   if (LFirst(&list, &data)) {
      printf("%d ", data);

      while (LNext(&list, &data)) {
         printf("%d ", data);
      }
   }


   return 0;
}