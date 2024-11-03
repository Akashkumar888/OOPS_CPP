#include<iostream>
using namespace std;

class A {
public:
    void foo() {
        cout << "A::foo()" << endl;
    }
};

class B : public virtual A {
public:
    void bar() {
        cout << "B::bar()" << endl;
    }
};

class C : public virtual A {
public:
    void baz() {
        cout << "C::baz()" << endl;
    }
};

class D : public B, public C {
public:
    // ...
};

int main() {
    D d;
    d.foo(); // Resolves correctly due to virtual inheritance
    d.bar(); // Accessible through B
    d.baz(); // Accessible through C

    return 0;
}