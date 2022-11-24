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

class ColdPatient
{
public:
   void TakeSinivelCap(const SiniveCap &cap) const { cap.Take(); }
   void TakeSneezeCap(const SneezeCap &cap) const { cap.Take(); }
   void TakeSnuffleCap(const SnuffleCap &cap) const { cap.Take(); }
};

int main()
{
   SiniveCap scap;
   SneezeCap zcap;
   SnuffleCap ncap;

   ColdPatient sufferer;
   sufferer.TakeSinivelCap(scap);
   sufferer.TakeSneezeCap(zcap);
   sufferer.TakeSnuffleCap(ncap);

   return 0;
}