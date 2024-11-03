#include <iostream>
using namespace std;
int main() {
 int int_var;
 float float_var = 20.5;
 int_var = float_var;
 // trying to store the value of float_var in int_var
 cout << "The value of int_var is: " << int_var << endl;
 cout << "The value of float_var is: " << float_var << endl;
 return 0;
}