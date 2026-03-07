// ✅ What is a Constructor? (Interview-Ready Answer)
// A constructor is a special function inside a class that is called automatically when an object is created.
// Its purpose is to initialize data members.
// It has same name as the class
// It has no return type (not even void)
// Called automatically


// ✅ Types of Constructors in C++
//1. Default / Non-parameterized constructor
//2. Parameterized constructor
//3. Copy constructor
//4. (Bonus) Constructor Overloading


// ✅ ✅ 1. Default / Non-Parameterized Constructor
// Called automatically when you create an object without arguments.

// ✅ Rule:
// If you don’t write any constructor, C++ provides its own default constructor.
// If you define any constructor, C++ will not provide the default one automatically.


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
    l=r.l;                 //Used to create a new object as a copy of an existing object:
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

// 4️⃣ Constructor Overloading (Bonus)
// You have three constructors with the same name Rectangle but different parameters:
// Rectangle()
// Rectangle(int, int)
// Rectangle(Rectangle&)

// This is called Constructor Overloading.
// Interview Line:
// “Constructor overloading allows multiple constructors in a class with different parameter lists to initialize objects in different ways.”
