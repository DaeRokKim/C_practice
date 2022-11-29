#include <iostream>
using namespace std;

class SoSimple
{
private:
   int num;

public:
   SoSimple(int n) : num(n)
   {
   }

   SoSimple &AddNum(int n)
   {
      num += n;
      return *this;
   }

   void ShowData() const
   {
      cout << "num : " << num << endl;
   }
};

int main()
{
   const SoSimple obj(7);
   // obj.AddNum(20); // const 함수가 아니기 때문에 호출 불가
   // "개체에 멤버 함수 "SoSimple::AddNum"과 호환되지 않는 형식 한정자가 있습니다" 라는 에러 발생
   obj.ShowData();

   return 0;
}