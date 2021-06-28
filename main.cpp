#include"Car.cpp"
#include"Truck.cpp"
#include "Vehicle.cpp"

int main()
{
   Vehicle* v1 = new Vehicle(5);
   v1->ApplyBreaks();
   v1->ApplyHorns();

   Vehicle* v2 = new Truck(6);
   v2->ApplyBreaks();
   v2->ApplyHorns();

   Vehicle* v3 = new Car(7);
   v3->ApplyBreaks();
   v3->ApplyHorns();
   return 0;

}