#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  srand(time(NULL));
  int user, com, win = 0, draw = 0, lose = 0;
  const char *arr[3] = {"바위", "가위", "보"};
  while (1)
  {
    printf("바위는 1, 가위는 2, 보는 3 : ");
    scanf("%d", &user);
    com = rand() % 3 + 1;

    if (user == com)
    {
      printf("사용자는 %s 선택, 컴퓨터는 %s 선택, 비겼습니다.\n", arr[user - 1], arr[com - 1]);
      draw++;
    }
    else if (((user < com) && (com - user == 1)) || ((user > com) && (user - com == 2)))
    {
      printf("사용자는 %s 선택, 컴퓨터는 %s 선택, 이겼습니다.\n", arr[user - 1], arr[com - 1]);
      win++;
    }
    else
    {
      printf("사용자는 %s 선택, 컴퓨터는 %s 선택, 졌습니다.\n", arr[user - 1], arr[com - 1]);
      lose = 1;
    }

    if (lose == 1)
    {
      break;
    }
  }

  printf("\n게임 결과 : %d승, %d무\n", win, draw);

  return 0;
}