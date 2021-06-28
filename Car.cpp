#include"Car.h"

Car::Car(int year)
   :Vehicle(year)
{

}
void Car::ApplyBreaks()
{
   cout << makeYear << " years old Car Break" << endl;
}

void Car::ApplyHorns()
{
   cout << makeYear << " years old Car Horns"<<endl;
}