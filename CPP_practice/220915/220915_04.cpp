#include <iostream>
using namespace std;

namespace Hybrid
{
   void HybFunc(void)
   {
      cout << "So Simple Function!" << endl;
      cout << "In namespace Hybrid!" << endl;
   }
} // namespace Hybrid

int main()
{
   using Hybrid::HybFunc;
   HybFunc();

   return 0;
}