#include<bits/stdc++.h>
using namespace std;
class A {
public:
    void show() { cout << "Class A" << endl; }
};

class B : public A {};   // B inherits A
class C : public A {};   // C inherits A
class D : public B, public C {}; // D inherits B and C

int main() {
    D obj;
    obj.show(); // ❌ Ambiguity: from B::A or C::A ?
}

