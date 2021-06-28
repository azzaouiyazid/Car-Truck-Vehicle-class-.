#ifndef _CAR_H
#define _CAR_H

#include"Vehicle.h"

class Car:public Vehicle
{
public:
   //Constructor
   Car(int);
   void ApplyBreaks();
   void ApplyHorns();
};

#endif