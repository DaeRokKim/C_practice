#include <iostream>
using namespace std;

int main()
{
  int arr[3] = {1, 3, 5};
  int &ref1 = arr[0];
  int &ref2 = arr[1];
  int &ref3 = arr[2];

  cout << ref1 << endl;
  cout << ref2 << endl;
  cout << ref3 << endl;

  return 0;
}

// 참조자는 배열의 각 요소별로도 선언이 가능하다