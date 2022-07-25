#include <stdio.h>
#include <string.h>

void delNull(char *c)
{
  int len = strlen(c);

  c[len - 1] = 0;
}

int main()
{
  char str1[20];
  char str2[20];
  char str3[20];

  printf("문자열 입력 str1 : ");
  fgets(str1, sizeof(str1), stdin);
  delNull(str1);
  printf("문자열 입력 str2 : ");
  fgets(str2, sizeof(str2), stdin);
  delNull(str2);

  strncpy(str3, str1, sizeof(str1));
  strncat(str3, str1, sizeof(str1));

  printf("복사하고 붙여넣기 한 문자열 : %s \n", str3);

  return 0;
}