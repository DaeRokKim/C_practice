#include <iostream>
using namespace std;

class SiniveCap
{
public:
   void Take() const { cout << "콧물이 싹 낫는다." << endl; }
};

class SneezeCap
{
public:
   void Take() const { cout << "재채기가 딱 멎는다." << endl; }
};

class SnuffleCap
{
public:
   void Take() const { cout << "코가 뻥 뚫린다." << endl; }
};

class CONTAC600
{
private:
   SiniveCap sin;
   SneezeCap sne;
   SnuffleCap snu;

public:
   void Take() const
   {
      sin.Take();
      sne.Take();
      snu.Take();
   }
};

class ColdPatient
{
public:
   void TakeCONTAC600(const CONTAC600 &cap) const { cap.Take(); }
};

int main()
{
   CONTAC600 cap;
   ColdPatient sufferer;
   sufferer.TakeCONTAC600(cap);

   return 0;
}