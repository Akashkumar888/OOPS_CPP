
#include <iostream>
using namespace std;

class Student {
    string name;
    int marks;

public:
    Student(string n, int m) : name(n), marks(m) {}

    // Declare friend class
    friend class Result;
};

class Result {
public:
    void display(Student s) {
        // Accessing private data of Student
        cout << "Name: " << s.name << ", Marks: " << s.marks << endl;
    }
};

int main() {
    Student s1("Akash", 95);
    Result r1;
    r1.display(s1);
    return 0;
}

