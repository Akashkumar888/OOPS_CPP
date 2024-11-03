#include <iostream> 
using namespace std;
int Add(int X, int Y)
{
return X + Y;
}
double Add(double X, double Y)
{
return X + Y;
}
int main()
{
cout << Add(5, 6)<<endl; 
cout << Add(5.5, 6.6);
 return 0;
}