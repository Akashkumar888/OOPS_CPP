
#include<iostream>
using namespace std;
class Car{
  public:
  string name;
  int price;
  int seats;
  string type;
};

void printdetails(Car c){
  cout<<c.name<<" "<<c.price<<" "<<c.seats<<" "<<c.type<<endl;
}
void changedetails(Car &c){
  c.name="Mercedes";
  c.price=200000000;
}
int main()
{

  Car c1,c2,c3,c4;
  c1.name="BMW";
  c1.price=12000000;
  c1.seats=4;
  c1.type="SUV";
  
  c2.name="Honda City";
  c2.price=1300000;
  c2.seats=6;
  c2.type="Sedan";

  c3.name="Maruti Suziki";
  c3.price=700000;
  c3.seats=4;
  c3.type="Hatchback";

  c4.name="Toyota Fortuner";
  c4.price=2500000;
  c4.seats=6;
  c4.type="SUV";

printdetails(c1);
changedetails(c1);
printdetails(c1);
return 0;
}