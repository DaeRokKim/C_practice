#include <iostream>
using namespace std;

int main()
{
   int num1 = 1000;
   int &num2 = num1;

   num2 = 2222;
   cout << "val : " << num1 << endl;
   cout << "ref : " << num2 << endl;

   cout << "val : " << &num1 << endl;
   cout << "ref : " << &num2 << endl;

   return 0;
}