#include <iostream>
#include <cstring>
using namespace std;

class MyFriendInfo
{
private:
   char *name;
   int age;

public:
   MyFriendInfo(char *fdName, int fdAge) : age(fdAge)
   {
      name = new char[strlen(fdName) + 1];
      strcpy(name, fdName);
   }

   ~MyFriendInfo()
   {
      delete[] name;
   }

   void ShowMyFriendInfo()
   {
      cout << "이름 : " << name << endl;
      cout << "나이 : " << age << endl;
   }
};

class MyFriendDetailInfo : public MyFriendInfo
{
private:
   char *addr;
   char *phone;

public:
   MyFriendDetailInfo(char *fdName, int fdAge, char *fdAddr, char *fdPhone) : MyFriendInfo(fdName, fdAge)
   {
      addr = new char[strlen(fdAddr) + 1];
      phone = new char[strlen(fdPhone) + 1];

      strcpy(addr, fdAddr);
      strcpy(phone, fdPhone);
   }

   ~MyFriendDetailInfo()
   {
      delete[] addr;
      delete[] phone;
   }

   void ShowMyFriendDetailInfo()
   {
      ShowMyFriendInfo();
      cout << "주소 : " << addr << endl;
      cout << "전화 : " << phone << endl
           << endl;
      ;
   }
};

int main()
{
   MyFriendDetailInfo friend1("Kim", 21, "떡잎유치원", "010-1111-1111");
   MyFriendDetailInfo friend2("Lee", 21, "카스카베", "010-2222-2222");

   friend1.ShowMyFriendDetailInfo();
   friend2.ShowMyFriendDetailInfo();

   return 0;
}