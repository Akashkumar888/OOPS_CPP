//✅ ✅ 2. Parameterized Constructor
// Constructor with parameters → used to initialize objects with custom values.
#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    // Parameterized constructor
    Student(string n, int a) {
        name = n;
        age = a;
        cout << "Parameterized Constructor Called" << endl;
    }
};

int main() {
    Student s("Akash", 21);
    cout << s.name << " " << s.age << endl;
    return 0;
}
