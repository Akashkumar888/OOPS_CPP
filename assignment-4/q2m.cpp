#include <iostream>
using namespace std;

int main() {
    // Declare variables to store marks for each subject
    float subject1, subject2, subject3, subject4, subject5, subject6;

    // Input marks for each subject
    cout << "Enter marks for Subject 1: ";
    cin >> subject1;

    cout << "Enter marks for Subject 2: ";
    cin >> subject2;

    cout << "Enter marks for Subject 3: ";
    cin >> subject3;

    cout << "Enter marks for Subject 4: ";
    cin >> subject4;

    cout << "Enter marks for Subject 5: ";
    cin >> subject5;

    cout << "Enter marks for Subject 6: ";
    cin >> subject6;

    // Calculate total marks and percentage
    float totalMarks = subject1 + subject2 + subject3 + subject4 + subject5 + subject6;
    float percentage = (totalMarks / 600) * 100;

    // Display the percentage
    cout << "Percentage: " << percentage << "%" << endl;

return 0;
}