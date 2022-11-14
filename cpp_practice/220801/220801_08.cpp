#include <iostream>

int main()
{
  int basic = 50;
  int alpha, sold;

  while (true)
  {
    std::cout << "판매 금액 입력 (만원 단위) : ";
    std::cin >> sold;
    if (sold == -1)
    {
      std::cout << "프로그램을 종료합니다.";
      break;
    }
    else
    {
      alpha = basic + sold * 0.12;
      std::cout << "이번달 급여 : " << alpha << "\n";
    }
  }

  return 0;
}