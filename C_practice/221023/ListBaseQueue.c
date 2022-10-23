#include <stdio.h>
#include <stdlib.h>
#include "ListBaseQueue.h"

void QueueInit(Queue *pq)
{
   pq->front = NULL;
   pq->rear = NULL;
}

int QIsEmpty(Queue *pq)
{
   if (pq->front == NULL)
   {
      return TRUE;
   }
   else
   {
      return FALSE;
   }
}

void EnQueue(Queue *pq, Data data)
{
   Node *newNode = (Node *)malloc(sizeof(Node));
   newNode->data = data;
   newNode->next = NULL;

   if (QIsEmpty(pq))
   {
      pq->front = newNode;
      pq->rear = newNode;
   }
   else
   {
      pq->rear->next = newNode;
      pq->rear = newNode;
   }
}

Data DeQueue(Queue *pq)
{
   Node *rnode = pq->front;
   Data rdata = rnode->data;

   if (QIsEmpty(pq))
   {
      printf("Queue Memory Error!");
      exit(-1);
   }

   pq->front = pq->front->next;
   free(rnode);

   return rdata;
}

Data QPeek(Queue *pq)
{
   if (QIsEmpty(pq))
   {
      printf("Queue Memory Error!");
      exit(-1);
   }

   return pq->front->data;
}