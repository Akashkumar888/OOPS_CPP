#include <iostream>

// Function to calculate total salary
double calculateTotalSalary(double basicSalary, double allowances, double deductions) {
    return basicSalary + allowances - deductions;
}

int main() {
    // Example values for basic salary, allowances, and deductions
    double basicSalary = 50000.0;
    double allowances = 2000.0;
    double deductions = 1500.0;

    // Calculate total salary using the function
    double totalSalary = calculateTotalSalary(basicSalary, allowances, deductions);

    // Display the total salary
    std::cout << "Total Salary: " << totalSalary << std::endl;

return 0;
}