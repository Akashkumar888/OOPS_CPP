#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    int rollNumber;
    char grade;

public:
    // Member function to set student details
    void setDetails(const std::string & n, int roll, char g) {
        name = n;
        rollNumber = roll;
        grade = g;
    }

    // Member function to display student information
    void displayDetails() {
        std::cout << "Name: " << name << "\tRoll No.: " << rollNumber << "\tGrade: " << grade << "\n";
    }

};

int main() {
    const int numberOfStudents = 3;

    // Create an array of Student objects
    Student students[numberOfStudents];

    // Read and set details for each student
    for (int i = 0; i < numberOfStudents; ++i) {
        std::string name;
        int rollNumber;
        char grade;

        std::cout << "Enter details for student " << i + 1 << ":\n";
        std::cout << "Name: ";
        std::cin >> name;
        std::cout << "Roll No.: ";
        std::cin >> rollNumber;
        std::cout << "Grade: ";
        std::cin >> grade;

        students[i].setDetails(name, rollNumber, grade);
    }

    // Display details for each student
    std::cout << "\nStudent Details:\n";
    for (int i = 0; i < numberOfStudents; ++i) {
        students[i].displayDetails();
    }

 return 0;
}