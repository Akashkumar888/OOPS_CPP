
#include<iostream>
using namespace std;
class Scooty{
  public:
  int topSpeed;
  float mileage;
private:
int bootSpace;
};
class Bike:public Scooty{
public:
int gear;

};
int main()
{
  Bike b1;
  b1.mileage=45.8;
  b1.topSpeed=100;
  
return 0;
}