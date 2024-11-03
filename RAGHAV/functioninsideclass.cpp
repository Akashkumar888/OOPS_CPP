
#include<iostream>
using namespace std;
class Cricketer{
public:
string name;
int runs;
float avg;

Cricketer(string name,int runs,float avg){
  this->name=name; // to identify variable name 
  this->runs=runs; // 'this->name' is the member variable, 'name' is the parameter
  this->avg=avg;
}
// void print(){
//   cout<<name<<" "<<runs<<" "<<avg<<" "<<endl;
// }

void print(int runs){
  cout<<name<<" "<<runs<<" "<<avg<<" "<<endl;
  cout<<runs<<endl;
}

// void print(){
//   cout<<this->name<<" "<<this->runs<<" "<<this->avg<<" "<<endl;
// }

};
int main()
{
  Cricketer c1("Virat kohli",25000,50.7);
  Cricketer c2("Rohit Sharma",18000,47.8);
  c1.print(5);
  cout<<c1.runs<<endl;
  c2.print(8);
return 0;
}