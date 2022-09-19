#include <iostream>
using namespace std;

int main()
{
   // 참조자와 포인터
   int num = 100;
   int *ptr = &num;
   int &num_ref = num;

   cout << "num : " << num << endl;
   cout << "ptr : " << *ptr << endl;
   cout << "num_ref : " << num_ref << endl;
   cout << endl;

   // 포인터 변경
   *ptr = 200;

   cout << "num : " << num << endl;
   cout << "ptr : " << *ptr << endl;
   cout << "num_ref : " << num_ref << endl;
   cout << endl;

   // 참조자 변경
   num_ref = 300;

   cout << "num : " << num << endl;
   cout << "ptr : " << *ptr << endl;
   cout << "num_ref : " << num_ref << endl;

   return 0;
}