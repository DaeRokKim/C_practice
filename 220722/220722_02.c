#include <stdio.h>
#include <string.h>

int main()
{
  char str1[20];
  char str2[20];
  printf("첫 번째 문자열 입력 : ");
  scanf("%s", str1);
  printf("두 번째 문자열 입력 : ");
  scanf("%s", str2);

  if (!strcmp(str1, str2))
  {
    puts("두 문자열은 동일하다");
  }
  else
  {
    puts("두 문자열은 다르다");

    if (!strncmp(str1, str2, 3))
    {
      puts("버뜨 앞 세 글자는 동일");
    }
  }

  return 0;
}