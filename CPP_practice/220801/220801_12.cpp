#include <iostream>

int SF(int a = 10)
{
  return a + 1;
}

int SF(void)
{
  return 10;
}

int main()
{
  int a = 20;

  // std::cout << SF() << std::endl; // 주석 풀면 에러
  // 함수 두 개가 겹쳐서 에러가 난다

  return 0;
}