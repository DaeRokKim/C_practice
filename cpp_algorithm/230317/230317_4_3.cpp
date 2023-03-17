#include <iostream>
#include <vector>
using namespace std;

// 이동평균구하기

// 실수 배열 A가 주어질 때, 각 위치에서 M-이동 평균 값을 구한다.
vector<double> movingAverage1(const vector<double> &A, int M)
{
   vector<double> ret;
   int N = A.size();
   for (int i = M - 1; i < N; ++i)
   {
      // A[i]까지의 이동 평균 값을 구한다
      double partialSum = 0;
      for (int j = 0; j < M; ++j)
      {
         partialSum += A[i - j];
      }
      ret.push_back(partialSum / M);
   }

   return ret;
}