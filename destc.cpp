
#include <iostream>
using namespace std;
class Test {
public:
	// User-Defined Constructor
	Test() { 
        cout <<"\nConstructor executed"; 
        }

	// User-Defined Destructor
	~Test() {
         cout <<"\nDestructor executed"; 
         }
};

 int main()
{
	// Create multiple objects of the Test class
	Test t, t1, t2, t3;
	return 0;
}
