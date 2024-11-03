

#include<iostream>
using namespace std;
class Cricketer{
public:
string name;
int runs;
float avg;

Cricketer(string name,int runs,float avg){
  this->name=name; // to identify variable name 
  this->runs=runs; 
  this->avg=avg;
}

};
int main()
{
  Cricketer c1("Virat kohli",25000,50.7);
  Cricketer c2("Rohit Sharma",18000,47.8);
  Cricketer* p1=&c1; // object pointer 
  cout<<(*p1).runs<<endl;
  (*p1).runs=30000;
  cout<<(*p1).runs<<endl;

return 0;
}
