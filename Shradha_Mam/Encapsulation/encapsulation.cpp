
// ✅ What is Encapsulation? (Interview-Ready Answer)
// Encapsulation means wrapping data (variables) and methods in a single unit (class) and protecting that data using access modifiers like private, public, protected.
// It ensures that the internal details of an object are hidden, and access is controlled through public methods (getters/setters).

// ✅ Simple Explanation (Use this in your interview)
// Encapsulation is like a medicine capsule.
// A capsule contains powder inside, but the powder is protected and you cannot touch it directly.
// You only get the capsule as a single safe unit.
// Similarly, in programming:
// A class is the capsule.
// Its data is hidden inside.
// You allow controlled access only through methods.

// ✅ Real-World Example (Very Simple for Interview)
// Think of a bank ATM:
// You cannot directly access your bank database.
// You can only withdraw or check balance using the ATM interface.
// The internal logic is protected.
// Here:
// Your account data = private
// ATM buttons = public methods
// Bank hides sensitive details = encapsulation

#include <iostream>
using namespace std;

class BankAccount {
private:
    int balance;   // data is hidden

public:
    // Constructor to initialize balance
    BankAccount() {
        balance = 0;
    }

    void deposit(int amount) {
        if (amount > 0) {
            balance += amount;   // controlled access
        }
    }

    int getBalance() {
        return balance;          // safe access
    }
};

int main() {
    BankAccount account;

    account.deposit(500);       // depositing money
    account.deposit(300);

    cout << "Current Balance: " << account.getBalance() << endl;

    return 0;
}


// Encapsulation is the binding of data and methods that manipulate them into a single unit such that the sensitive data is hidden from the users
// It is implemented as the processes mentioned below:

// Data hiding: A language feature to restrict access to members of an object. For example, private and protected members in C++.
// Bundling of data and methods together: Data and methods that operate on that data are bundled together. For example, the data members and member methods that operate on them are wrapped into a single unit known as a class.