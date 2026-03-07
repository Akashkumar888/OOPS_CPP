
// 🔹 What virtual Keyword Does
// virtual enables runtime polymorphism and ensures the correct function is called at runtime, not compile time.
// 🔴 Problem WITHOUT virtual

class Base {
public:
    void show() {
        cout << "Base show" << endl;
    }
};

class Derived : public Base {
public:
    void show() {
        cout << "Derived show" << endl;
    }
};

int main() {
    Base* b;
    Derived d;

    b = &d;
    b->show();   // ❌ calls Base version
}

// ❌ Output
// Base show


// Wrong behavior for abstraction ❌
// ✅ Solution WITH virtual

class Base {
public:
    virtual void show() {
        cout << "Base show" << endl;
    }
};

class Derived : public Base {
public:
    void show() {
        cout << "Derived show" << endl;
    }
};

int main() {
    Base* b;
    Derived d;

    b = &d;
    b->show();   // ✅ correct
}

// ✅ Output
// Derived show

// 🔹 Why virtual Is REQUIRED for Abstraction
// 1️⃣ Abstraction works at runtime
// User doesn’t know actual object
// Only knows base class reference
// ATM* atm = new BankATM();
// atm->withdraw(2000);


// ✔ Correct method must be called at runtime
// 2️⃣ virtual Enables Dynamic Binding
// Function call decided at runtime
// Not at compile time

// 3️⃣ Pure Virtual Function (= 0)
// virtual void withdraw(int amount) = 0;
// ✔ Forces child class to implement method
// ✔ Makes class abstract
// ✔ Used to create interfaces

// 🔹 One-Line Interview Answers ⭐
// Why virtual keyword?
// The virtual keyword enables runtime polymorphism by ensuring that the correct overridden function is called based on the object type, not pointer type.
// Why virtual in abstraction?
// Virtual functions allow abstraction by hiding implementation details and enabling dynamic method dispatch at runtime.
// 🔹 Golden Interview Line 🧠🔥
// Without virtual, abstraction is impossible in C++.

