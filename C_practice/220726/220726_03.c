#include <stdio.h>
#include <string.h>

struct employee
{
  char name[20];
  char privateNum[20];
  int money;
};

int main()
{
  struct employee arr[3];

  for (int i = 0; i < 3; i++)
  {
    printf("이름 입력 : ");
    scanf("%s", arr[i].name);
    printf("주민등록번호 입력 : ");
    scanf("%s", arr[i].privateNum);
    printf("급여정보 입력 : ");
    scanf("%d", &(arr[i].money));
  }

  for (int i = 0; i < 3; i++)
  {
    printf("이름 : %s \n", arr[i].name);
    printf("주민등록번호 : %s \n", arr[i].privateNum);
    printf("급여정보 : %d \n\n", arr[i].money);
  }
  return 0;
}