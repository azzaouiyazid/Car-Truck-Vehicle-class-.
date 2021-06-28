#ifndef _TRUCK_H
#define _TRUCK_H

#include"Vehicle.h"
class Truck:public Vehicle
{
public:
   //Constructor
   Truck(int);
   void ApplyBreaks();
   void ApplyHorns();
};

#endif