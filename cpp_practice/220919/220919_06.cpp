#include <iostream>
using namespace std;

void plusone(int &ref)
{
   ref++;
}

void chbuho(int &ref)
{
   ref *= -1;
}

int main()
{
   int num = 10;

   cout << "num : " << num << endl;

   plusone(num);

   cout << "num : " << num << endl;

   chbuho(num);

   cout << "num : " << num << endl;

   return 0;
}