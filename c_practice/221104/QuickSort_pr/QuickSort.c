#include <stdio.h>

void Swap(int arr[], int idx1, int idx2)
{
   int temp = arr[idx1];
   arr[idx1] = arr[idx2];
   arr[idx2] = temp;
}

int Partition(int arr[], int left, int right)
{
   int Lpivot = arr[left];
   int Rpivot = arr[right];
   int Mpivot = arr[(left + right) / 2];
   int low, high;
   int pivot;

   if (Lpivot < Mpivot && Mpivot < Rpivot)
   {
      return (left + right) / 2;
   }
   else if (Mpivot < Lpivot && Lpivot < Rpivot)
   {
      pivot = Lpivot;
      low = left + 1;
      high = right;

      while (low <= high)
      {
         while (pivot >= arr[low] && low <= right)
         {
            low++;
         }

         while (pivot <= arr[high] && high >= (left + 1))
         {
            high--;
         }

         if (low <= high)
         {
            Swap(arr, low, high);
         }
      }

      Swap(arr, left, high);

      return high;
   }
   else
   {
      pivot = Rpivot;
      low = left;
      high = right - 1;

      while (low <= high)
      {
         while (pivot <= arr[low] && low <= (right - 1))
         {
            low++;
         }

         while (pivot >= arr[high] && high >= left)
         {
            high--;
         }

         if (low <= high)
         {
            Swap(arr, low, high);
         }
      }

      printf("피벗 : %d \n", pivot);
      Swap(arr, low, right);

      return low;
   }
}

void QuickSort(int arr[], int left, int right)
{
   if (left <= right)
   {
      int pivot = Partition(arr, left, right);
      QuickSort(arr, left, pivot - 1);
      QuickSort(arr, pivot + 1, right);
   }
}

int main()
{
   int arr[15] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
   int i;
   int len = sizeof(arr) / sizeof(int);

   QuickSort(arr, 0, len - 1);

   for (i = 0; i < len; i++)
   {
      printf("%d ", arr[i]);
   }
   printf("\n");

   return 0;
}