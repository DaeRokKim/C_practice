#include <iostream>

int main()
{
  int num;

  std::cout << "정수 입력 : ";
  std::cin >> num;

  std::cout << num << "단 출력 \n";
  for (int i = 1; i < 10; i++)
  {
    std::cout << num << " x " << i << " = " << num * i << "\n";
  }

  return 0;
}