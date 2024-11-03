

#include<iostream>
using namespace std;
class Scooty{
  public:
  int topSpeed;
  float mileage;
  int bootSpace;
 virtual void sound(){
    cout<<"Vroom Vroom"<<endl;
  }
};

class Bike:public Scooty{
public:
int gear;

void sound(){
    cout<<"Dhroom Dhroom"<<endl;
  }

};
int main()
{
  Scooty *b=new Bike();
  b->sound();
  
  delete b;
return 0;
}
