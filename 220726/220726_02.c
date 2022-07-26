#include <stdio.h>

struct person
{
  char name[20];
  char phoneNum[20];
  int age;
};

int main()
{
  struct person arr[3] = {
      {"이승기", "010-1111-1111", 21},
      {"정진영", "010-2222-2222", 22},
      {"한시훌", "010-3333-3333", 28}};

  int i;
  for (i = 0; i < 3; i++)
  {
    printf("%s %s %d \n", arr[i].name, arr[i].phoneNum, arr[i].age);
  }

  return 0;
}