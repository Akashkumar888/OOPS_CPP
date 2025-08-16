
#include <iostream>
using namespace std;

class Demo {
public:
    Demo() {
        cout << "Constructor called" << endl;
    }
};

int main() {
    Demo obj1;   // constructor called 1st time
    Demo obj2;   // constructor called 2nd time
    Demo obj3;   // constructor called 3rd time

    return 0;
}
