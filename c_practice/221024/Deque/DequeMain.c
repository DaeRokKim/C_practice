#include <stdio.h>
#include "Deque.h"

int main()
{
   Deque dq;
   DequeInit(&dq);

   // 앞으로 넣기
   DQAddFirst(&dq, 1);
   DQAddFirst(&dq, 2);
   DQAddFirst(&dq, 3);

   // 뒤로 넣기
   DQAddLast(&dq, 9);
   DQAddLast(&dq, 8);
   DQAddLast(&dq, 7);

   // 데이터 앞으로 꺼내서 삭제하기
   printf("데이터 앞에서 꺼내기 \n");
   while (!DQIsEmpty(&dq))
   {
      printf("%d ", DQRemoveFirst(&dq));
   }
   printf("\n\n");

   // 데이터 다시 넣기
   DQAddFirst(&dq, 1);
   DQAddFirst(&dq, 2);
   DQAddFirst(&dq, 3);
   DQAddLast(&dq, 9);
   DQAddLast(&dq, 8);
   DQAddLast(&dq, 7);

   printf("데이터 뒤로 꺼내기 \n");
   while (!DQIsEmpty(&dq))
   {
      printf("%d ", DQRemoveLast(&dq));
   }
   printf("\n\n");

   return 0;
}