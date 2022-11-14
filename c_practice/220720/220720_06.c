#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 컴퓨터 숫자 생성
int *makeNum()
{
  static int arr[3];

  srand(time(NULL));

  for (int i = 0; i < 3; i++)
  {
    if (i == 0)
    {
      arr[i] = rand() % 10;
    }
    else
    {
      arr[i] = rand() % 10;
      for (int j = 0; j < i; j++)
      {
        if (arr[i] == arr[j])
        {
          i--;
          break;
        }
      }
    }
  }

  return arr;
}

// 사용자 숫자 입력
int *getNum()
{
  static int arr[3];
  int num;

  printf("정수 3개 입력 : ");
  for (int i = 0; i < 3; i++)
  {
    scanf("%d", &num);
    arr[i] = num;
  }

  return arr;
}

// 숫자 비교하기
int compare(int *arr1, int *arr2)
{
  int strike = 0, ball = 0;

  for (int i = 0; i < 3; i++)
  {
    if (arr1[i] == arr2[i])
    {
      strike++;
    }

    for (int j = 0; j < 3; j++)
    {
      if (i != j)
      {
        if (arr1[i] == arr2[j])
        {
          ball++;
        }
      }
    }
  }
  printf("%d strike, %d ball \n", strike, ball);

  if (strike == 3)
  {
    return 1;
  }
  else
  {
    return 2;
  }
}

// 메인함수
int main()
{
  int *computer = makeNum();
  // int *user = getNum();
  int flag = 1;
  int result, count = 0;

  while (flag)
  {
    int *user = getNum();
    result = compare(computer, user);
    count++;

    if (result == 1)
    {
      flag = 0;
    }
  }

  printf("컴퓨터가 설정한 숫자 : ");
  for (int i = 0; i < 3; i++)
  {
    printf("%d, ", computer[i]);
  }
  printf("\n%d번만에 승리했습니다\n", count);

  return 0;
}