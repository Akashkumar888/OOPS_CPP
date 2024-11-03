#include <iostream>

// Definition of the class
class MyClass {
private:
    int privateData;

public:
    // Constructor
    MyClass(int data) : privateData(data) {}

    // Friend function declaration
    void print(){
        std::cout<<privateData;
    }
    friend void display( MyClass &obj);
};

// Definition of the friend function
void display( MyClass &obj) {
    std::cout << "Friend Function Display: " << obj.privateData << std::endl;
}

int main() {
    // Creating an object of MyClass
    MyClass myObject(42);

    // Calling the friend function using the object
    display(myObject);
    myObject.print();
    return 0;
}