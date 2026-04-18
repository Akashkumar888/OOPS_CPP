// 28. What are friend functions and friend classes?
// Friend Functions: A friend function is a special function that is allowed to access private and protected data of a class, even though it's not a member of the class.

// Friend Class: A friend class is a class that can access the private and protected members of another class. It's like allowing a trusted friend or a group of friends to see and change your personal information, which others cannot.

// 🔷 What are Friend Functions and Friend Classes in C++?
// 🔶 1. Friend Function
// 👉 Definition
// A friend function is a function that is not a member of a class, but it is allowed to access private and protected members of that class.
// 💡 Key Idea
// 👉 Normal functions cannot access private data
// 👉 But a friend function can access it with permission

// 💡 Interview Line
// A friend function is a non-member function that is declared inside a class using the friend keyword and is allowed to access its private and protected members.

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class Box{
  private: // if not write here private then by default all data members and methods privates
  int length;
  
  public:
  Box(int l):length(l){}
  
  // Declare friend function
  friend void printLength(Box b);// Box B pass by value 
};

void printLength(Box b){ // Box B receive by value
    // Can access private member
    cout<<"Box Length: "<<b.length<<endl;// Output: Length of box: 10
}
int main() {
    // Write C++ code here
    Box b1(10);
    printLength(b1);
    return 0;
}




#include <iostream>
using namespace std;

class Box {
    private:
    int length;

public:
    Box(int l) : length(l) {}

    // Declare friend function
    friend void printLength(Box b);
};

// Friend function definition
void printLength(Box b) {
    // Can access private member
    cout << "Length of box: " << b.length << endl;
}

int main() {
    Box b1(10);
    printLength(b1);   // Output: Length of box: 10
    return 0;
}


// 📌 Definition (Interview Ready)
// “A friend function is a non-member function that is declared inside a class using the friend keyword and is allowed to access its private and protected members.”