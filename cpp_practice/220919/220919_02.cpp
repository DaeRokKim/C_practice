#include <iostream>
using namespace std;

void SwapByValue(int num1, int num2)
{
   int temp = num1;
   num1 = num2;
   num2 = temp;
} // call-by-value

void SwapByref(int *ptr1, int *ptr2)
{
   int temp = *ptr1;
   *ptr1 = *ptr2;
   *ptr2 = temp;
} // call-by-reference

int main()
{
   int num1 = 10, num2 = 20;
   int *ptr1 = &num1, *ptr2 = &num2;

   // 변경 전
   cout << "num1 : " << num1 << endl;
   cout << "num2 : " << num2 << endl;
   cout << '\n'
        << endl;

   SwapByValue(num1, num2);

   // call-by-value 사용 후 값 확인
   cout << "num1 : " << num1 << endl;
   cout << "num2 : " << num2 << endl;
   cout << '\n'
        << endl;

   SwapByref(ptr1, ptr2);

   // call-by-reference 사용 후 값 확인
   cout << "num1 : " << num1 << endl;
   cout << "num2 : " << num2 << endl;

   return 0;
}