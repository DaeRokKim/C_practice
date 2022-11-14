#include <iostream>

namespace Hybrid
{
  void HybFunc(void)
  {
    std::cout << "So Simple Function!" << std::endl;
    std::cout << "In namespace Hybrid!" << std::endl;
  }
} // namespace Hybrid

int main()
{
  using Hybrid::HybFunc;
  HybFunc();

  return 0;
}