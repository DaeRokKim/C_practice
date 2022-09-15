#include <iostream>
using namespace std;

namespace BestComImpl
{
   void SimpleFunc(void);
} // namespace BestComImpl

// 같은 BestComImpl에 PrettyFunc 함수 정의
namespace BestComImpl
{
   void PrettyFunc(void);
} // namespace BestComImpl

namespace ProgComImpl
{
   void SimpleFunc(void);
} // namespace ProgComImpl

int main()
{
   BestComImpl::SimpleFunc();

   return 0;
}

void BestComImpl::SimpleFunc(void)
{
   cout << "BestCom이 정의한 함수" << endl;
   PrettyFunc();              // 같은 namespace 안에 있기에 직접호출 가능
   ProgComImpl::SimpleFunc(); // 다른 namespace에 있기 때문에 이름명시
}

void BestComImpl::PrettyFunc(void)
{
   cout << "So Pretty!!" << endl;
}

void ProgComImpl::SimpleFunc(void)
{
   cout << "ProgCom이 정의한 함수" << endl;
}