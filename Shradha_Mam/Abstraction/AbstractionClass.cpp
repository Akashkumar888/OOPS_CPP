
// ✅ 2. What is an Abstract Class? (C++ Version)
// An abstract class is a class that:
// cannot be instantiated
// may contain normal methods + pure virtual methods
// is used as a base class

// ✅ C++ Abstract Class Example


#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() = 0;    // pure virtual → abstract class

    void eat() {                 // normal method
        cout << "Animal eats" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks" << endl;
    }
};

int main() {
    Dog d;
    d.sound();
    d.eat();
    return 0;
}
// ✅ Animal is abstract because of one pure virtual method.
// ✅ It also has a normal method eat().



#include<bits/stdc++.h>
using namespace std;

// Abstract class
class Shape{
 virtual void draw()=0; // pure virtual function
};

class Circle:public Shape{
public:
  void draw(){
    cout<<"Drawing a circle"<<endl;
  }
};

int main()
{
  Circle c1;
  c1.draw();
return 0;
}
