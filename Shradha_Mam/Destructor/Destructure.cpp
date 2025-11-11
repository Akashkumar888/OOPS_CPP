
#include <iostream>
using namespace std;

class Student {
public:
    string name;
    float* cgpaPtr;

    // Student() {
    //   cout<<"Hi, i am constructor"<<endl;
    // }

    // Parameterized constructor
    Student(string name, float cgpa) { // this constructor called s1 create with parametrized 
        this->name = name;
        cgpaPtr = new float;      // allocate memory
        *cgpaPtr = cgpa;          // copy the value
        cout<<"Hi, i am parametrized constructor"<<endl;
    }

    // Destructor
    ~Student() {
      cout<<"Hi, i am destructor"<<endl;
        delete cgpaPtr;   // free memory
    }

    void getInfo() {
        cout << "Name: " << name << endl;
        cout << "CGPA: " << *cgpaPtr << endl;
    }
};

int main() {
    Student s1("Akash", 7.35);
    s1.getInfo(); 
    Student s2("Ankit", 9.00);       
    s2.getInfo();
//     At the end of main(), destructors are called automatically in reverse order of creation:
// First s2 is destroyed → destructor prints:
// Then s1 is destroyed → destructor prints:
    return 0;
}

