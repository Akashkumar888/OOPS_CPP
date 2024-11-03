#include <iostream>

class Counter {
private:
    int count;

public:
    Counter() : count(0) {}

    // Overloading the prefix increment operator (++)
    Counter operator++() {
        Counter temp;
        temp.count = ++count;
        return temp;
    }

    // Overloading the prefix decrement operator (--)
    Counter operator--() {
        Counter temp;
        temp.count = --count;
        return temp;
    }

    // Function to display the count
    void display() {
        std::cout << "Count: " << count << std::endl;
    }
};

int main() {
    Counter c1, c2;

    // Using the increment operator
    ++c1;
    c1.display();  // Output: Count: 1

    // Using the decrement operator
    --c1;
    c1.display();  // Output: Count: 0

    // Using the increment operator on a different object
    ++c2;
    c2.display();  // Output: Count: 1

    return 0;
}
