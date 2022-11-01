#include <stdio.h>
#include "PriorityQueue.h"

int DataPriorityComp(char ch1, char ch2)
{
   return ch2 - ch1;
}

int main()
{
   PQueue ppq;
   PQueueInit(&ppq, DataPriorityComp);

   PEnqueue(&ppq, 'A');
   PEnqueue(&ppq, 'B');
   PEnqueue(&ppq, 'C');
   printf("%c \n", PDequeue(&ppq));

   PEnqueue(&ppq, 'A');
   PEnqueue(&ppq, 'B');
   PEnqueue(&ppq, 'C');
   printf("%c \n", PDequeue(&ppq));

   while (!PQIsEmpty(&ppq))
   {
      printf("%c \n", PDequeue(&ppq));
   }

   return 0;
}