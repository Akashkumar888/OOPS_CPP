#include<iostream>
using namespace std;
class Rectangle {
 public:
 
 int length;
 int width;
 
 Rectangle(int len, int wid) {
 length = len;
 width = wid;
 }
 
 void area() {
 cout << length * width << endl;
 }
 
 //overloading ++ operator
 Rectangle operator++(int) {
 length++;
 width++;
 }
 
 //overloading -- operator
 Rectangle operator--(int) {
 length--;
 width--;
 }
 
};
int main() {
 Rectangle r(3, 2);
 r.area();
 
 r++;
 
 r.area();
 r--;
 r.area();
 return 0;
}
