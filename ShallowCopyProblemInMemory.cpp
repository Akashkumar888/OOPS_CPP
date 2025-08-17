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
        *cgpaPtr = cgpa;          
    }

    // Copy constructor (deep copy)
    Student(Student &orgObj) {
        this->name = orgObj.name;
        this->cgpaPtr=(orgObj.cgpaPtr);  
//         Here you are only copying the address stored in orgObj.cgpaPtr.
// So both objects (s1 and s2) end up pointing to the same memory location.
    }


    void getInfo() {
        cout << "Name: " << name << endl;
        cout << "CGPA: " << *cgpaPtr << endl;
    }
};

int main() {
    Student s1("Akash", 7.35);

    Student s2(s1); 
    s2.getInfo();

    *s2.cgpaPtr = 9.5;// modifies s1.cgpaPtr as well, since both point to same memory
    s1.getInfo();   
    // This is called a shallow copy → only the pointer’s address is copied, not the actual data.
    return 0;
}
