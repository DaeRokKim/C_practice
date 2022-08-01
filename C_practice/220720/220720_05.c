#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int num, i, result = 1;
  int win = 0, mu = 0;
  srand(time(NULL));

  while (result)
  {
    i = rand() % 3 + 1;
    printf("바위는 1, 가위는 2, 보는 3 : ");
    scanf("%d", &num);

    if (num == 1)
    {
      printf("바위 선택, ");
      if (i == 1)
      {
        printf("컴퓨터 바위 선택, ");
        printf("비겼습니다.\n");
        mu++;
      }
      else if (i == 2)
      {
        printf("컴퓨터 가위 선택, ");
        printf("이겼습니다\n.");
        win++;
      }
      else
      {
        printf("컴퓨터 보 선택, ");
        printf("졌습니다.\n");
        result -= 1;
      }
    }
    else if (num == 2)
    {
      printf("가위 선택, ");
      if (i == 1)
      {
        printf("컴퓨터 바위 선택, ");
        printf("졌습니다.\n");
        result -= 1;
      }
      else if (i == 2)
      {
        printf("컴퓨터 가위 선택, ");
        printf("비겼습니다.\n");
        mu++;
      }
      else
      {
        printf("컴퓨터 보 선택, ");
        printf("이겼습니다\n.");
        win++;
      }
    }
    else if (num == 3)
    {
      printf("보 선택, ");
      if (i == 1)
      {
        printf("컴퓨터 바위 선택, ");
        printf("이겼습니다\n.");
        win++;
      }
      else if (i == 2)
      {
        printf("컴퓨터 가위 선택, ");
        printf("졌습니다.\n");
        result -= 1;
      }
      else
      {
        printf("컴퓨터 보 선택, ");
        printf("비겼습니다.\n");
        mu++;
      }
    }
    else
    {
      printf("1,2,3 중에 누르라고 좀!!!");
      return 0;
    }
  }
  printf("게임 결과 : %d승, %d무 \n", win, mu);

  return 0;
}