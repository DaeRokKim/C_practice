#include <iostream>
#include <cstring>
#include "CarInline.h"
using namespace std;

void Car::InitMembers(const char *ID, int fuel)
{
   strcpy(gamerID, ID);
   fuelGauge = fuel;
   curSpeed = 0;
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