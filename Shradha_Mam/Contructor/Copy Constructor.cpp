
// ✅ ✅ 3. Copy Constructor
// Creates a new object by copying another object.

// Interview Line:
// “A copy constructor is used to initialize a new object using an already existing object of the same class.”
// When copy constructor is called automatically:
// When passing object by value
// When returning object from a function
// When creating object from another object


#include <iostream>
using namespace std;

class Student {
public:
    int age;

    Student(int a) {
        age = a;
    }

    // Copy constructor
    Student(const Student &s) {
        age = s.age;
        cout << "Copy Constructor Called" << endl;
    }
};

int main() {
    Student s1(20);
    Student s2 = s1; // copy constructor called
    cout << s2.age << endl;
    return 0;
}
