
#include <iostream>
using namespace std;

class Parent {
public:
    virtual void show() {   // virtual → late binding // virtual keyword
        cout << "Parent class" << endl;
    }
};

// class Child : public Parent {
// public:
//     void show() { 
//         cout << "Child class" << endl;
//     }
// };


class Child : public Parent {
public:
    void show() override { // override keyword is optional, but good practice
        cout << "Child class" << endl;
    }
};


int main() {
    Child c1;         // base class pointer
    c1.show();
    // Decided at RUN TIME → prints "Child class"
}

