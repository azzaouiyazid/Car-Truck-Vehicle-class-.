#ifndef _VEHICLE_H
#define _VEHICLE_H

#include<iostream>
using namespace std;
class Vehicle
{
protected:
   int makeYear;
public:
  
   Vehicle(int);
   virtual void ApplyBreaks();
   virtual void ApplyHorns();
};
#endif