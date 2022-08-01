#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int StrToInt(char c)
{
  static int diff = 1 - '1';
  return c + diff;
}

int main()
{
  char str[30];
  int len, i, sum = 0;

  printf("문자열 입력 : ");
  fgets(str, sizeof(str), stdin);
  len = strlen(str);

  for (i = 0; i < len; i++)
  {
    if ('1' <= str[i] && str[i] <= '9')
    {
      sum += StrToInt(str[i]);
    }
  }
  printf("sum = %d\n", sum);

  return 0;
}