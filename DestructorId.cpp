
#include <iostream>
using namespace std;

class Student {
public:
    string name;
    float* cgpaPtr;
    int id;                          // unique ID for each object
    static int counter;              // shared counter for assigning IDs

    // Parameterized constructor
    Student(string name, float cgpa) {
        this->name = name;
        cgpaPtr = new float;         
        *cgpaPtr = cgpa;

        id = ++counter;              // assign unique ID
        cout << "Constructor called for Object " << id << endl;
    }

    // Destructor
    ~Student() {
        cout << "Destructor called for Object " << id << endl;
        delete cgpaPtr;
    }

    void getInfo() {
        cout << "Object " << id << " -> Name: " << name << ", CGPA: " << *cgpaPtr << endl;
    }
};

// Initialize static counter
int Student::counter = 0;

int main() {
    Student s1("Akash", 7.35);
    s1.getInfo();

    Student s2("Ankit", 9.00);       
    s2.getInfo();

    Student s3("Vivek", 8.25);
    s3.getInfo();

    // destructors will be called automatically in reverse order: s3, s2, s1
    return 0;
}

