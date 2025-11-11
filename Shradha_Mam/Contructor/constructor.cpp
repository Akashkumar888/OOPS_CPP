// ✅ What is a Constructor? (Interview-Ready Answer)
// A constructor is a special function inside a class that is called automatically when an object is created.
// Its purpose is to initialize data members.

// It has same name as the class
// It has no return type (not even void)
// Called automatically

// ✅ Types of Constructors in C++
// Default / Non-parameterized constructor
// Parameterized constructor
// Copy constructor
// (Bonus) Constructor Overloading

// ✅ ✅ 1. Default / Non-Parameterized Constructor
// Called automatically when you create an object without arguments.

// ✅ Rule:
// If you don’t write any constructor, C++ provides its own default constructor.


#include<iostream>
using namespace std;
    class Rectangle{
    public:
    int l;
    int b;
    Rectangle(){  // default constructor no arguments passed
        l=0;
        b=0;
    }
    Rectangle(int x, int y){ // parameterised constructor passong argument
        l=x;
        b=y;
    }
    Rectangle(Rectangle& r){//copy constructor intialize an object by another exit object
    l=r.l;
    b=r.b;
    }
    };
int main(){
    Rectangle r1;
    cout<<r1.l<<" "<<r1.b<<endl;
    Rectangle r2(4,3);
    cout<<r2.l<<" "<<r2.b<<endl;
    Rectangle r3=r2;
    cout<<r3.l<<" "<<r3.b<<endl;
    return 0;
}