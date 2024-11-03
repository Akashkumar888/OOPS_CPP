#include <iostream>
#include <string>

// Base class
class Person {
protected:
    std::string name;
    int age;

public:
    Person(const std::string& n, int a) : name(n), age(a) {}

    void displayDetails() {
        std::cout << "Name: " << name << "\nAge: " << age << std::endl;
    }
};

// Derived class
class Patient : public Person {
private:
    int patientID;
    std::string ailment;

public:
    Patient(const std::string& n, int a, int id, const std::string& ail) 
        : Person(n, a), patientID(id), ailment(ail) {}

    void displayPatientDetails() {
        displayDetails(); // Accessing the base class method
        std::cout << "Patient ID: " << patientID << "\nAilment: " << ailment << std::endl;
    }
};

int main() {
    // Creating a Patient object
    Patient patient("John Doe", 35, 123456, "Fever");

    // Displaying patient details
    patient.displayPatientDetails();

return 0;
}