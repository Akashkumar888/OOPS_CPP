
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
        this->cgpaPtr = new float;     // allocate new memory
        *this->cgpaPtr = *orgObj.cgpaPtr;  // copy the value
    }

    // Destructor
    ~Student() {
        delete cgpaPtr;   // free memory
    }

    void getInfo() {
        cout << "Name: " << name << endl;
        cout << "CGPA: " << *cgpaPtr << endl;
    }
};

int main() {
    Student s1("Akash", 7.35);

    Student s2(s1); 
    s1.getInfo();        
    s2.getInfo();

    *s2.cgpaPtr = 9.5;   // only s2 changes
    s2.name="Neha";
    cout<<"After changing the s2 value"<<endl;
    s1.getInfo();        // s1 remains unchanged
    s2.getInfo();        // s2 

    return 0;
}


