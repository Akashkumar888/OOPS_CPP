
// Diamond Problem Cpp
// Diamond Problem in C++ (Theory + Code for Interviews)
// Why the Diamond Problem Occurs (Theory Explanation)
// The Diamond Problem occurs in multiple inheritance when a derived class inherits from two classes that share a common base class.
                 A
                / \
                B C
                \ /
                 D
                 Class B and C both inherit from A.

// Class D inherits from both B and C.
// This means D contains two copies of class A.
// As a result, calling members of A from an object of D becomes ambiguous.
// Example: obj.show() → Compiler doesn't know whether to use B::A::show or C::A::show.
// Code Showing Diamond Problem (Ambiguity Error)

#include <iostream>
using namespace std;


class A {
public:
void show() { cout << "Class A" << endl; }
};


class B : public A {}; // B inherits A
class C : public A {}; // C inherits A
class D : public B, public C {}; // D inherits B and C


int main() {
D obj;
// obj.show(); // ❌ Error: ambiguous


// To access, you must specify path
obj.B::show();
obj.C::show();
}


// Why This Creates Ambiguity
// D has two separate A subobjects (one via B, one via C).
// So calling obj.show() is ambiguous.
// The compiler cannot guess which A's method to use.

// ✅ Solution: Virtual Inheritance (Removes Ambiguity)
// Using virtual inheritance, both B and C share one common A base object.
// Corrected Code Using Virtual Inheritance

#include <iostream>
using namespace std;


class A {
public:
void show() { cout << "Class A" << endl; }
};


class B : virtual public A {}; // virtual inheritance
class C : virtual public A {}; // virtual inheritance
class D : public B, public C {}; // Only one A now


int main() {
D obj;
obj.show(); // ✅ No ambiguity
}

// Why Virtual Inheritance Fixes It
// Virtual inheritance ensures that only one shared instance of A exists.
// D now inherits one unified A, removing ambiguity.
// No need to write full path like obj.B::show().
// ✅ Interview-Ready 10-Second Explanation
// "The Diamond Problem occurs in multiple inheritance when a class inherits from two classes that share a common base class. This creates two copies of the base class inside the derived class, causing ambiguity. We solve this using virtual inheritance, which ensures there is only one shared copy of the base class."
// This is the perfect explanation + code for interviews.


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

