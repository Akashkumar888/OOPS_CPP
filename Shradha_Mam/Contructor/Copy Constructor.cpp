
// ✅ ✅ 3. Copy Constructor
// Creates a new object by copying another object.

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
