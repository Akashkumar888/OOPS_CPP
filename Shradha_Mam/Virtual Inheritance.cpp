#include<bits/stdc++.h>
using namespace std;
class A {
public:
    void show() { cout << "Class A" << endl; }
};

class B : virtual public A {};
class C : virtual public A {};
class D : public B, public C {};

int main() {
    D obj;
    obj.show();  // ✅ Now only one copy of A
}

