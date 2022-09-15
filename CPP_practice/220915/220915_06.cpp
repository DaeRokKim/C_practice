#include <iostream>
using namespace std;

int val = 100;

int SimpleFunc(void)
{
   int val = 20;
   val += 3; // 지역변수 val 값 +3
   // ::val += 7; // 전역변수 val 값 +7

   return val;
}

int main()
{
   cout << SimpleFunc() << endl;
   cout << val << endl;

   return 0;
}