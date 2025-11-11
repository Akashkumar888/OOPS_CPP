
// ✅ 2. Multilevel Inheritance
// Parent → Child → Grandchild.

#include <iostream>
using namespace std;

class GrandParent {
public:
    void showGP() { cout << "GrandParent" << endl; }
};

class Parent : public GrandParent {
public:
    void showP() { cout << "Parent" << endl; }
};

class Child : public Parent { // Multilevel inheritance
public:
    void showC() { cout << "Child" << endl; }
};

int main() {
    Child c;
    c.showGP();
    c.showP();
    c.showC();
}
 