#include <stdio.h>

void SelectionSort(int arr[], int n)
{
   int i, j;
   int maxIdx;
   int temp;

   for (i = 0; i < n - 1; i++)
   {
      maxIdx = i;

      for (j = i + 1; j < n; j++)
      {
         if (arr[j] < arr[maxIdx])
         {
            maxIdx = j;
         }
      }
      temp = arr[i];
      arr[i] = arr[maxIdx];
      arr[maxIdx] = temp;
   }
}

int main()
{
   int arr[] = {8, 3, 4, 2, 1, 9, 5, 7, 6, 0};
   int i;
   int len = sizeof(arr) / sizeof(int);

   SelectionSort(arr, len);

   for (i = 0; i < len; i++)
   {
      printf("%d ", arr[i]);
   }

   return 0;
}