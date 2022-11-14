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
  struct employee emp;

  printf("이름 입력 : ");
  scanf("%s", emp.name);
  printf("주민등록번호 입력 : ");
  scanf("%s", emp.privateNum);
  printf("급여정보 입력 : ");
  scanf("%d", &(emp.money));

  printf("이름 : %s \n", emp.name);
  printf("주민등록번호 : %s \n", emp.privateNum);
  printf("급여정보 : %d \n", emp.money);

  return 0;
}