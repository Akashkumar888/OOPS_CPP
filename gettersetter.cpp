#include <iostream>
using namespace std;

class Human {
    // properties
public:
    int age = 21;  // public
    int wt = 52;
    int ht = 12;

private:
    int salary = 80000;  // private

    // getter for private member `salary`
public:
    int getSalary() {
        return salary;
    }

    // setter for private member `salary`
    void setSalary(int val) {
        salary = val;
    }

    // behavior
public:
    void walking() {
        cout << "I am walking" << endl;
    }

    void running() {
        cout << "I am running" << endl;
    }
};

int main() {
    // Create an object of Human class
    Human object;

    // Access public members
    cout << "Age: " << object.age << endl;
    cout << "Height: " << object.ht << endl;
    cout << "Weight: " << object.wt << endl;

    // Access private member using getter
    cout << "Salary: " << object.getSalary() << endl;

    // Modify private member using setter
    object.setSalary(90000);
    cout << "New Salary: " << object.getSalary() << endl;

    // Call public methods
    object.walking();
    object.running();

    return 0;
}
