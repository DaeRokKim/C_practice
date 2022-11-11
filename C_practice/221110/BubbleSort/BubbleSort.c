#include <stdio.h>

void BubbleSort(int arr[], int n)
{
   int i, j;
   int temp;

   for (i = 0; i < n - 1; i++)
   {
      for (j = 0; j < (n - i) - 1; j++)
      {
         if (arr[j] > arr[j + 1])
         {
            temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
         }
      }
   }
}

int main()
{
   int arr[] = {8, 3, 4, 2, 1, 9, 5, 7, 6, 0};
   int i;
   int len = sizeof(arr) / sizeof(int);

   BubbleSort(arr, len);

   for (i = 0; i < len; i++)
   {
      printf("%d ", arr[i]);
   }

   return 0;
}