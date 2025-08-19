
#include <iostream>
using namespace std;

class Parent {
public:
    void show() {  // not virtual
        cout << "Parent class" << endl;
    }
};

class Child : public Parent {
public:
    void show() {  // overrides base 
        cout << "Child class" << endl;
    }
};

int main() {
    Child c1;
    c1.show();
  // Output: Parent class (not polymorphic)
}

