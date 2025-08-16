#include <iostream>
using namespace std;

class Student {
public:
    string name;
    float* cgpaPtr;

    // Parameterized constructor
    Student(string name, float cgpa) {
        this->name = name;
        cgpaPtr = new float;      // allocate memory
        *cgpaPtr = cgpa;          // copy the value
    }

    // Copy constructor (deep copy)
    Student(Student &orgObj) {
        this->name = orgObj.name;
        this->cgpaPtr=(orgObj.cgpaPtr);  // copy the value
    }

    // Destructor
    ~Student() {
        delete cgpaPtr;           // free dynamic memory
    }

    void getInfo() {
        cout << "Name: " << name << endl;
        cout << "CGPA: " << *cgpaPtr << endl;
    }
};

int main() {
    Student s1("Akash", 7.35);

    Student s2(s1); // deep copy
    s2.getInfo();

    // Modify s2's CGPA to check deep copy
    *s2.cgpaPtr = 9.5;
    cout << "\nAfter modifying s2's CGPA:" << endl;
    s1.getInfo();   // s1 is 9.5

    return 0;
}
