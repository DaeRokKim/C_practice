// 열혈 C 도전프로그래밍3 문제 1번

#include <stdio.h>

int main()
{
  const int arr[4][4] = {
      {1, 2, 3, 4},
      {5, 6, 7, 8},
      {9, 10, 11, 12},
      {13, 14, 15, 16}};

  int copyarr[4][4];

  int i = 0, j = 0;

  printf("변환 전 배열\n");

  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      printf("%3d ", arr[i][j]);
    }
    printf("\n");
  }
  printf("\n");

  for (i = 0; i < 4; i++)
  {
    for (j = 0; j < 4; j++)
    {
      copyarr[j][3 - i] = arr[i][j];
    }
  }

  printf("변환 후 배열\n");

  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      printf("%3d ", copyarr[i][j]);
    }
    printf("\n");
  }
  printf("\n");

  return 0;
}