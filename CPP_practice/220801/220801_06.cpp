#include <iostream>

int main()
{
  char name[100];
  char address[100];

  std::cout << "이름 입력 : ";
  std::cin >> name;
  std::cout << "주소 입력 : ";
  std::cin >> address;

  std::cout << "이름 : " << name << "\n";
  std::cout << "주소 : " << address << "\n"
            << std::endl;

  return 0;
}