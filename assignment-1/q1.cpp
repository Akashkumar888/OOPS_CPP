#include <iostream>
#include <string>

class Employee {
public:
    std::string name;
    int id;
    double salary;

    // Constructor to initialize the object
    Employee(std::string n, int i, double s){
        name=n;
        id=i;
        salary=s;
    }

};

int main() {
    // Create instances of the Employee class
    Employee employee1("John Doe", 1, 50000);
    Employee employee2("Jane Smith", 2, 60000);
    Employee employee3("Bob Johnson", 3, 55000);

    // Display employee information
    std::cout << "Employee 1:" << std::endl;
    std::cout << "Name: " << employee1.name << std::endl;
    std::cout << "ID: " << employee1.id << std::endl;
    std::cout << "Salary: " << employee1.salary << std::endl << std::endl;

    std::cout << "Employee 2:" << std::endl;
    std::cout << "Name: " << employee2.name << std::endl;
    std::cout << "ID: " << employee2.id << std::endl;
    std::cout << "Salary: " << employee2.salary << std::endl << std::endl;

    std::cout << "Employee 3:" << std::endl;
    std::cout << "Name: " << employee3.name << std::endl;
    std::cout << "ID: " << employee3.id << std::endl;
    std::cout << "Salary: " << employee3.salary << std::endl;

   return 0;
}