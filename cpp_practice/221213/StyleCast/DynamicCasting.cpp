#include <iostream>
using namespace std;

class Car
{
private:
   int fuelGauge;

public:
   Car(int fuel) : fuelGauge(fuel) {}

   void ShowCarState()
   {
      cout << "잔여 연료량 : " << fuelGauge << endl;
   }
};

class Truck : public Car
{
private:
   int freightWeight;

public:
   Truck(int fuel, int weight) : Car(fuel), freightWeight(weight) {}

   void ShowTruckState()
   {
      ShowCarState();
      cout << "화물의 무게 : " << freightWeight << endl;
   }
};

int main()
{
   // Car *pcar1 = new Truck(80, 200);
   // Truck * ptruck1 = dynamic_cast<Truck*>(pcar1);

   // Car *pcar2 = new Car(120);
   // Truck * ptruck2 = dynamic_cast<Truck*>(pcar2);

   /*
   위 네 줄의 코드는 컴파일 에러가 발생한다.
   dynamic_cast 연산자의 의미는 상속관계에 있는 유도 클래스의 포인터 및 참조형 데이터를 기초 클래스의 포인터 및 참조형 데이터로 형변환 한다.
   위 dynamic_cast에 부합하지 않는 위의 코드는 컴파일 에러가 발생하고, 부합하는 아래의 코드는 정상적으로 실행된다.
   */

   Truck *ptruck3 = new Truck(70, 150);
   Car *pcar3 = dynamic_cast<Car *>(ptruck3);

   return 0;
}