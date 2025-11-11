
// ✅ 2. What is a Friend Class? (Detailed Explanation)
// A friend class is a class that has permission to access private and protected members of another class.
// The entire class becomes a friend
// All its methods get access
// Declared using friend class ClassName;
// ✅ Friend Class Example in C++

#include <iostream>
using namespace std;

class Student {
    string name;
    int marks;

public:
    Student(string n, int m) : name(n), marks(m) {}

    // Declare friend class
    friend class Result;
};

class Result {
public:
    void display(Student s) {
        // Accessing private data of Student
        cout << "Name: " << s.name << ", Marks: " << s.marks << endl;
    }
};

int main() {
    Student s1("Akash", 95);
    Result r1;
    r1.display(s1);
    return 0;
}

#include <iostream>
using namespace std;

class A {
private:
    int secret = 123;

public:
    // declare B as a friend class
    friend class B;
};

class B {
public:
    void reveal(A obj) {
        cout << "Secret is: " << obj.secret << endl;   // accessing private member
    }
};

int main() {
    A a;
    B b;
    b.reveal(a);    // friend class B can access private data of A
    return 0;
}

// ✅ How to explain to interviewer
// “A friend class means all methods of that class can access private and protected members of another class. It is useful when two classes are tightly coupled and need to share internal data.”

// ✅ Interview-Ready Summary

// Friend Function:
// Not a class member
// Can access private/protected members
// Declared using friend keyword inside class

// Friend Class:
// One class gives full access to another class
// All methods of the friend class can access private/protected members
// Declared using friend class ClassName;