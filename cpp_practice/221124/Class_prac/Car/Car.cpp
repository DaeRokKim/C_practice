#include <iostream>
#include <cstring>
#include "Car.h"
using namespace std;

void Car::InitMembers(const char *ID, int fuel)
{
   strcpy(gamerID, ID);
   fuelGauge = fuel;
   curSpeed = 0;
}

void Car::ShowCarState()
{
   cout << "소유자 ID: " << gamerID << endl;
   cout << "연료량: " << fuelGauge << '%' << endl;
   cout << "현재속도: " << curSpeed << "km/s" << '\n'
        << endl;
}

void Car::Accel()
{
   if (fuelGauge <= 0)
   {
      return;
   }
   else
   {
      fuelGauge -= CAR_CONST::FUEL_STEP;
   }

   curSpeed += CAR_CONST::ACC_STEP;
}

void Car::Break()
{
   if (curSpeed < CAR_CONST::BRK_STEP)
   {
      curSpeed = 0;
      return;
   }

   curSpeed -= CAR_CONST::BRK_STEP;
}
