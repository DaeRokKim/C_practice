#include <stdio.h>
#include "CircularQueue.h"

int main()
{
   // Queue 초기화
   Queue q;
   QueueInit(&q);

   EnQueue(&q, 1);
   EnQueue(&q, 2);
   EnQueue(&q, 3);
   EnQueue(&q, 4);
   EnQueue(&q, 5);

   printf("QPeek 먼저 사용해보기 : %d \n", QPeek(&q));

   while (!QIsEmpty(&q))
   {
      printf("%d ", DeQueue(&q));
   }

   return 0;
}