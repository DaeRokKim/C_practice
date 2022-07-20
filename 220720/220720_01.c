#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i;
  printf("난수의 범위 : 0부터 %d까지 \n", RAND_MAX);

  for (i = 0; i < 5; i++)
  {
    printf("난수 출력 : %d \n", rand());
  }

  return 0;
}

// C에서 난수를 생성하는 법
// #include <stdlib.h> 헤더파일 호출
// rand()를 사용해 랜덤한 값 호출
