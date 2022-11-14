#include <stdio.h>
#include <string.h>
#include "PriorityQueue.h"

int DataPriorityComp(const char *str1, const char *str2)
{
   return strlen(str2) - strlen(str1);
}

int main()
{
   PQueue ppq;
   PQueueInit(&ppq, DataPriorityComp);

   PEnqueue(&ppq, "Good Morning");
   PEnqueue(&ppq, "What the fxxk");
   PEnqueue(&ppq, "Priority Queue");
   PEnqueue(&ppq, "Do you know GangNamStyle?");
   PEnqueue(&ppq, "Hello World!");

   while (!PQIsEmpty(&ppq))
   {
      printf("%s \n", PDequeue(&ppq));
   }

   return 0;
}