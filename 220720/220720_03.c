#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int i;
  int num = 9999;

  srand(time(NULL));
  for (i = 0; i < 5; i++)
  {
    printf("%3d ", rand() % 9 + 1);
  }

  return 0;
}