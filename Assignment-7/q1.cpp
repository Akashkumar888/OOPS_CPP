#include <iostream>
using namespace std;

class TimeConverter {
private:
    int hours;
    int minutes;
    int seconds;

public:
    // Parameterized constructor to convert seconds to hours, minutes, and seconds
    TimeConverter(int totalSeconds) {
        hours = totalSeconds / 3600;          // 1 hour = 3600 seconds
        minutes = (totalSeconds % 3600) / 60; // 1 minute = 60 seconds
        seconds = totalSeconds % 60;
    }

    // Function to display the converted time
    void displayTime() {
        cout << "Converted Time: " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds" << endl;
    }
};

int main() {
    // Declare variables to store user input
    int totalSeconds;

    // Input the time in seconds from the user
    cout << "Enter time in seconds: ";
    cin >> totalSeconds;

    // Create an object of the class using the parameterized constructor
    TimeConverter timeConverter(totalSeconds);

    // Display the converted time
    timeConverter.displayTime();

return 0;
}