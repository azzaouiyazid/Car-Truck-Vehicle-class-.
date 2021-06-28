#include"Truck.h"

Truck::Truck(int year)
   :Vehicle(year)
{

}
void Truck::ApplyBreaks()
{
   cout << makeYear << " years old Truck Break"<<endl;
}

void Truck::ApplyHorns()
{
   cout << makeYear << " years old Truck Horns" << endl;
}