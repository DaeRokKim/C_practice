#include <stdio.h>

void FunFun(void)
{
  printf("그냥 함수");
}

int main(void)
{
  int num = 20;
  void *ptr;

  ptr = &num;
  printf("%p \n", ptr);
  printf("%d \n", ptr);

  ptr = FunFun;
  printf("%p \n", ptr);
  printf("%s \n", ptr);

  return 0;
}