#include <stdio.h>

void InsertSort(int arr[], int n)
{
   int i, j;
   int insData;

   for (i = 1; i < n; i++)
   {
      insData = arr[i];

      for (j = i - 1; j >= 0; j--)
      {
         if (arr[j] > insData)
         {
            arr[j + 1] = arr[j];
         }
         else
         {
            break;
         }
      }
      arr[j + 1] = insData;
   }
}

int main()
{
   int i;
   int arr[] = {5, 3, 2, 4, 1};
   int len = sizeof(arr) / sizeof(int);

   InsertSort(arr, len);

   for (i = 0; i < len; i++)
   {
      printf("%d ", arr[i]);
   }

   return 0;
}
