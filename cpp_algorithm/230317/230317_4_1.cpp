#include <iostream>
#include <vector>
using namespace std;

int majority1(const vector<int> &A)
{
   int N = A.size();
   int majority = -1, majorityCount = 0;
   for (int i = 0; i < N; ++i)
   {
      // A에 등장하는 A[i]의 수를 센다
      int V = A[i], count = 0;
      for (int j = 0; j < N; ++j)
      {
         if (A[j] == V)
         {
            ++count;
         }
      }

      // 지금까지 본 최대 빈도보다 많이 출현했다면 답을 갱신
      if (count > majorityCount)
      {
         majorityCount = count;
         majority = V;
      }
   }

   return majority;
}