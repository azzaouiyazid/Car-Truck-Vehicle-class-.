#include"Vehicle.h"

Vehicle::Vehicle(int year)
{
   this->makeYear = year;
}
void Vehicle::ApplyBreaks()
{
   cout << makeYear << " years old Vehicle Break"<<endl;
}
void Vehicle::ApplyHorns()
{
   cout << makeYear << " years old Vehicle Horns"<<endl;
}