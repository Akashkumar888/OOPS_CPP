
#include <iostream>
using namespace std;

class A {
public:
    void showA() { cout << "Class A" << endl; }
};

class B : public A {
public:
    void showB() { cout << "Class B" << endl; }
};

class C : public A {
public:
    void showC() { cout << "Class C" << endl; }
};

class D : public B, public C {  // Hybrid (Multiple + Hierarchical)
public:
    void showD() { cout << "Class D" << endl; }
};

int main() {
    D obj;
    // obj.showA();  // ❌ Ambiguity (which path: B->A or C->A?)
}

