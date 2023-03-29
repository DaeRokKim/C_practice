#include <iostream>
#include <vector>
using namespace std;

// 자연수 n의 소인수 분해 결과를 담은 정수 배열을 반환
vector<int> factor(int n)
{
   if (n == 1)
      return vector<int>(1, 1); // n=1인 경우는 예외로 한다.
   vector<int> ret;
   for (int div = 2; n > 1; ++div)
   {
      while (n % div == 0)
      {
         n /= div;
         ret.push_back(div);
      }
   }
   return ret;
}