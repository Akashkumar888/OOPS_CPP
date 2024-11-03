// Now the following program overloads MyFunction using different no of parameters

#include <iostream>
using namespace std;
int MyFunction(int i);
double MyFunction(int i, int j);
int main(){
cout <<MyFunction(10)<<"n"; //calls MyFunction(int i);
cout <<MyFunction(1, 2)<<"n"; //calls MyFunction(int i, int j);
return 0;
}
int MyFunction(int i){
return i;
}
double MyFunction(int i , int j){
return i*j;
}