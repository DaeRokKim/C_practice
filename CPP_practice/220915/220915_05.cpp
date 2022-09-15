#include <iostream>
using namespace std;

namespace AAA
{
   namespace BBB
   {
      namespace CCC
      {
         int num1, num2;
      } // namespace CCC

   } // namespace BBB

} // namespace AAA

int main()
{
   AAA::BBB::CCC::num1 = 20;
   AAA::BBB::CCC::num2 = 30;

   namespace ABC = AAA::BBB::CCC;
   cout << ABC::num1 << endl;
   cout << ABC::num2 << endl;

   return 0;
}