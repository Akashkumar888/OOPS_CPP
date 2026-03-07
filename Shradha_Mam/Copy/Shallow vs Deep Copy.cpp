
#include <bits/stdc++.h>
using namespace std;

class Address {
public:
    string city;
    Address(string c) : city(c) {}
};

class Person {
public:
    string name;
    Address* address;

    // Constructor
    Person(string n, string c) {
        name = n;
        address = new Address(c);
    }

    // Deep Copy Constructor
    Person(const Person& p) {
        name = p.name;
        address = new Address(p.address->city); // new memory
    }
};

int main() {
    Person original("Ajay", "Delhi");

    // Shallow copy (same reference)
    Person* shallow = &original;

    // Deep copy (new memory)
    Person deep = original;

    original.address->city = "Mumbai";

    cout << shallow->address->city << endl; // Mumbai
    cout << deep.address->city << endl;     // Delhi
}
