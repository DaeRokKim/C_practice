#include <iostream>
using namespace std;

int main()
{
   int val1 = 10;
   int val2 = 20;
   int val3 = 30;

   const int num = 10;
   const int *ptr1 = &val1;
   int *const ptr2 = &val2;
   const int *const ptr3 = &val3;

   cout << "val1 : " << val1 << endl;
   cout << "val2 : " << val2 << endl;
   cout << "val3 : " << val3 << endl;
   cout << "ptr1 : " << *ptr1 << endl;
   cout << "ptr2 : " << *ptr2 << endl;
   cout << "ptr3 : " << *ptr3 << endl;

   val1++;
   val2++;
   val3++;

   cout << '\n';
   cout << "val1 : " << val1 << endl;
   cout << "val2 : " << val2 << endl;
   cout << "val3 : " << val3 << endl;
   cout << "ptr1 : " << *ptr1 << endl;
   cout << "ptr2 : " << *ptr2 << endl;
   cout << "ptr3 : " << *ptr3 << endl;

   // ptr1 = val2;
   // ptr2 = val3;
   // ptr3 = val1;

   return 0;
}