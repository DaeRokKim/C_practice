// 배열 요소도 가능하다면 포인터 변수도 참조가 가능할 것이다.
// 확인해보기

#include <iostream>
using namespace std;

int main()
{
  int num = 12;
  int *ptr = &num;
  int **dptr = &ptr;

  int &ref = num;
  int *(&pref) = ptr;
  int **(&dpref) = dptr;

  cout << ref << endl;
  cout << *pref << endl;
  cout << **dpref << endl;

  return 0;
}