#include <stdio.h>
#include "UsefulHeap.h"

int PriComp(int n1, int n2)
{
   return n2 - n1;
}

void HeapSort(int arr[], int n, PriorityComp pc)
{
   Heap heap;
   int i;

   HeapInit(&heap, pc);

   for (i = 0; i < n; i++)
   {
      HInsert(&heap, arr[i]);
   }

   for (i = 0; i < n; i++)
   {
      arr[i] = HDelete(&heap);
   }
}

int main()
{
   int arr[] = {5, 3, 2, 4, 1};
   int i;
   int len = sizeof(arr) / sizeof(int);

   HeapSort(arr, len, PriComp);

   for (i = 0; i < len; i++)
   {
      printf("%d ", arr[i]);
   }

   printf("\n");

   return 0;
}