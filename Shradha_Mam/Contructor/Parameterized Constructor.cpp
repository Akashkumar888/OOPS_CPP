// 🔶 3. Parameterized Constructor
// 👉 Definition
// A parameterized constructor is a constructor that accepts arguments to initialize objects with specific values.

// 💡 Key Idea
// 👉 Initialize object with custom values

// ✔ Example
#include <iostream>
using namespace std;

class Demo {
public:
    int x;

    Demo(int val) {
        x = val;
    }
};

int main() {
    Demo d(10);
    cout << d.x;
}

// ✔ Output
// 10
// ✔ Advantages
// Flexible initialization
// Avoids multiple assignments


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