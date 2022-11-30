#include <iostream>
using namespace std;

class Car
{
private:
   int gasolineGauge;

public:
   Car(int oil) : gasolineGauge(oil) {}
   int GetGasGauge()
   {
      return gasolineGauge;
   }
};

class HybridCar : public Car
{
private:
   int electricGauge;

public:
   HybridCar(int oil, int elec) : Car(oil), electricGauge(elec) {}
   int GetElecGauge()
   {
      return electricGauge;
   }
};

class HybridWaterCar : public HybridCar
{
private:
   int waterGauge;

public:
   HybridWaterCar(int oil, int elec, int water) : HybridCar(oil, elec), waterGauge(water) {}
   void ShowCurrentGauge()
   {
      cout << "잔여 가솔린 : " << GetGasGauge() << endl;
      cout << "잔여 전기량 : " << GetElecGauge() << endl;
      cout << "잔여 워터량 : " << waterGauge << endl;
   }
};

int main()
{
   HybridWaterCar hwc(5, 6, 7);
   hwc.ShowCurrentGauge();

   return 0;
}