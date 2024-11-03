#include <iostream>
using namespace std;
class Test
{
 int a, b;
public:
 Test(int x, int y)
 {
 a= x;
 b =y;
 }
 Test(int y) : Test( 7, y) {}
 void displayXY()
 {
 cout <<"a = "<<a<<endl;
 cout <<"b = "<<b<<endl;
 }
};
int main()
{
 Test obj(27);
 obj.displayXY();
 return 0;
}