#include <iostream>
using namespace std;

void PlusOne(int &num);
void ChangeSign(int &num);

int main()
{
  int number = 10;

  PlusOne(number);
  cout << "number : " << number << endl;

  ChangeSign(number);
  cout << "number : " << number << endl;

  return 0;
}

void PlusOne(int &num)
{
  num += 1;
}

void ChangeSign(int &num)
{
  num *= -1;
}