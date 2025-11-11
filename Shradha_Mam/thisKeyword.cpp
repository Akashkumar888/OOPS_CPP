
// ✅ What is this keyword? (Java + C++ explanation)
// ✅ Interview Definition

// this refers to the current object — the object on which the method is being called.
// ✅ Why use this?

// To access current object’s variables
// To resolve naming conflicts (parameter name = variable name)
// ✅ Example (Java/C++ logic is same):

class Student {
private:
    int age;

public:
    Student(int age) {
        this->age = age;  // "this" refers to current object
    }
};

// ✅ Simple Way to Explain in Interview:
// “this is a pointer/reference to the current object.
// It helps differentiate between instance variables and parameters.”