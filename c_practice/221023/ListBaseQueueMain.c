#include <stdio.h>
#include "ListBaseQueue.h"

int main()
{
   Queue q;
   QueueInit(&q);

   EnQueue(&q, 1);
   EnQueue(&q, 2);
   EnQueue(&q, 3);
   EnQueue(&q, 4);
   EnQueue(&q, 5);

   while (!QIsEmpty(&q))
      printf("%d ", DeQueue(&q));
   printf("\n");
   return 0;
}