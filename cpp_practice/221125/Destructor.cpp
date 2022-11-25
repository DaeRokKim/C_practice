#include <iostream>
#include <cstring>
using namespace std;

class Person
{
private:
   char *name;
   int age;

public:
   Person(char *myName, int myAge)
   {
      int len = strlen(myName) + 1;
      name = new char[len];
      strcpy(name, myName);
      age = myAge;
   }
   void ShowPersonInfo() const
   {
      cout << "Name : " << name << endl;
      cout << "Age : " << age << endl;
   }
   ~Person()
   {
      delete[] name;
      cout << "called destructor!" << endl;
   }
};

int main()
{
   Person man1("이춘봉", 29);
   Person man2("장문복", 41);

   man1.ShowPersonInfo();
   man2.ShowPersonInfo();

   return 0;

   return 0;
}