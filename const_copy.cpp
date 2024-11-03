// Implicit copy constructor Calling
#include <iostream>
using namespace std;

class Sample {
	int id;

public:
	void copy(int x) { 
        id = x; 
        }
	void display() { 
        cout << endl << "ID=" << id;
         }
};

int main()
{
	Sample obj1;
	obj1.copy(10);
	obj1.display();

	// Implicit Copy Constructor Calling

	Sample obj2(obj1); // or obj2=obj1;
	obj2.display();
	return 0;
}