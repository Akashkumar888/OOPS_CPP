
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

void print(Cricketer c){
  cout<<c.name<<" "<<c.avg<<" "<<c.runs<<" "<<endl;
}

int main()
{
  Cricketer c1("Virat kohli",25000,50.7);
  Cricketer* c2=new Cricketer("Rohit Sharma",18000,47.8);

  cout<<c2->name<<endl;
  cout<<c2->avg<<endl;

 
  int x=5; // compile time (also known as static memory allocation)

  // Lifetime: The memory is automatically deallocated when the scope of the variable ends (e.g., when a function returns).

// void foo() {
//     int x = 10;  // Stack memory
// }  // x is deallocated automatically when the function ends.




  int *p=new int(5432);// it access heap memory  
  // at runtime (known as dynamic memory allocation)

  // Lifetime: The memory is manually managed. You must explicitly allocate and deallocate memory using new and delete (or malloc and free in C).
  cout<<*p<<endl;

//   int *p = new int;  // Allocate memory on the heap
// *p = 5432;         // Use the memory
// delete p;          // Free the memory to avoid memory leak


return 0;
}
