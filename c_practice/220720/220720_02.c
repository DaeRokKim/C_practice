#include <stdio.h>
#include <stdlib.h>

int main()
{

  int i;

  printf("0 이상 99 이하의 난수 5개 생성하기 \n");

  for (i = 0; i < 5; i++)
  {
    printf("난수 출력 : %d\n", rand() % 99 + 1);
  }

  return 0;
}