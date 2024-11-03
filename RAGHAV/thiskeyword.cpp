#include<iostream>
using namespace std;
class Cricketer{
public:
string name;
int runs;
// name ko nhi pta hai kis namr=e ki baat ho rahi local ko priority deta hai
// Cricketer(string name,int runs){
//   name=name;
//   runs=runs;
// }

Cricketer(string name,int runs){
  this->name=name; // to identify variable name 
  this->runs=runs; // 'this->name' is the member variable, 'name' is the parameter
}

};
void print(Cricketer c){
  cout<<c.name<<" "<<c.runs<<" "<<endl;
}
int main()
{
  Cricketer c1("Virat kohli",25000);
  Cricketer c2("Rohit Sharma",18000);
  print(c1);
  print(c2);
return 0;
}