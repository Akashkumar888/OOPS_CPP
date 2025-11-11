
// ✅ 1. DEFAULT COPY (Compiler-Generated Copy Constructor)
// Theory (Very Important for Interview)
// If you do NOT write a copy constructor, the compiler creates a default copy constructor.
// This default constructor performs member-wise copy.
// For normal data types → works correctly
// For pointers → shallow copy happens, meaning both objects point to the same memory.
// ✅ Example: Default Copy Constructor (Shallow Copy)

#include <iostream>
#include <string.h>
using namespace std;

class Hero {
public:
    char *name;
    int health;
    char level;

    Hero() {                           // constructor
        name = new char[100];
    }

    void setName(char n[]) {
        strcpy(name, n);
    }

    void print() {
        cout << "[ Name: " << name
             << ", Health: " << health
             << ", Level: " << level << " ]" << endl;
    }
};

int main() {
    Hero h1;
    h1.health = 80;
    h1.level = 'A';
    char nm[20] = "Akash";
    h1.setName(nm);

    // ✅ Default copy constructor called (SHALLOW COPY)
    Hero h2 = h1;

    h1.print();
    h2.print();

    // modify original
    h1.name[0] = 'M';

    cout << "\nAfter modifying h1.name[0] = 'M'\n";
    h1.print();
    h2.print();   // h2 ALSO changes → shallow copy

    return 0;
}

// ✅ Interview Line
// “Default copy constructor does a shallow copy. With pointers, both objects share the same memory, so changing one affects the other.”

// ✅ 2. SHALLOW COPY
// Theory
// Copies the pointer value (address), not the actual data.
// Both objects point to the same memory.
// Unsafe → leads to bugs & double delete.
// ✅ Shallow Copy Behavior Example (Same as above)
// Because default copy constructor = shallow copy.
