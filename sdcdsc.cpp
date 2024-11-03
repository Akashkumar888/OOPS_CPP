#include <iostream>
using namespace std;
int MyFunction(int i);
double MyFunction(double d);
int main(){
cout <<MyFunction(10)<<"n"; //calls MyFunction(int i);
cout <<MyFunction(5.4)<<"n"; //calls MyFunction(double d);
return 0;
}
int MyFunction(int i){
return i*i;
}
double MyFunction(double d){
return d*d;
}