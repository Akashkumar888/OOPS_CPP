
// ✅ Simplest Interview Explanation
// ✅ Abstract Class (C++):

// “Abstract class can have both implemented methods and pure virtual functions.”
// ✅ Interface (C++):
// “Interface is a class with only pure virtual functions and no implementation.”
// ✅ Major Difference:
// Abstract class = some methods defined + some undefined.
// Interface = all methods are undefined (pure virtual).

#include <iostream>
using namespace std;

// Interface
class Printable {
public:
    virtual void print() = 0;   // pure virtual
};

// Abstract Class
class Document {
public:
    virtual void save() = 0;    // pure virtual
    void open() {               // normal method
        cout << "Document opened" << endl;
    }
};

// Class implementing both
class PDF : public Document, public Printable {
public:
    void print() override {
        cout << "Printing PDF" << endl;
    }
    void save() override {
        cout << "Saving PDF" << endl;
    }
};

int main() {
    PDF file;
    file.open();
    file.print();
    file.save();
    return 0;
}

// ✅ Final Interview Summary (Say This)
// Interface (C++):
// “Class with only pure virtual functions. No implementation. Used to define behaviour.”

// Abstract Class (C++):
// “Can have both pure virtual and normal methods. Cannot be instantiated.”

// Key Difference:
// “Abstract class can have full or partial implementation.
// Interface has zero implementation.”