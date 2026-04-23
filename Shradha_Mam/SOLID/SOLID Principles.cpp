
// ✅ SOLID Principles — Simple Interview Explanation
// S – Single Responsibility Principle (SRP)
// A class should have only one reason to change.
// Meaning: One class should do only one job.
// Simple line to say:
// “If a class has more than one responsibility, changes in one may break the other. SRP avoids that.”

// O – Open/Closed Principle (OCP)
// Open for extension, closed for modification.
// Meaning: You should be able to add new features without changing existing code.
// Simple line to say:
// “We extend behavior using inheritance or composition instead of modifying tested code.”

// L – Liskov Substitution Principle (LSP)
// Child class must be substitutable for parent class.
// Meaning: Wherever a base class object works, a derived class object should work without breaking logic.
// Simple line to say:
// “A derived class must behave like the base class, without changing expected behavior.”

// I – Interface Segregation Principle (ISP)
// Clients should not be forced to depend on interfaces they don't use.
// Meaning: Prefer smaller and specific interfaces rather than one large interface.
// Simple line to say:
// “A class should only implement what it actually needs.”

// D – Dependency Inversion Principle (DIP)
// High-level modules should depend on abstractions, not concrete classes.
// Meaning: Use interfaces/abstract classes instead of tightly coupling classes.
// Simple line to say:
// “DIP reduces dependency between modules and makes code flexible for changes.”

// ✅ How to present in interview (30–40 seconds)
// “SOLID is a set of five OOP design principles for writing clean, maintainable, and scalable code.
// Single responsibility keeps each class focused.
// Open/Closed allows adding new features without modifying existing classes.
// Liskov substitution ensures derived classes work wherever base classes are used.
// Interface segregation prevents forcing classes to implement unused methods.
// Dependency inversion makes high-level modules depend on abstractions, improving flexibility.”


// 🔥 1. SOLID – Perfect Opening Answer
// 👉 If asked “What is SOLID?”
// “SOLID is a set of five object-oriented design principles that help in building maintainable, scalable, and loosely coupled software systems.”

// 🔥 2. How to Answer ANY Principle (Template)
// Always follow:

// 1. Definition  
// 2. Why needed  
// 3. Real-world example  
// 4. Code example  
// 5. What if violated  


// 🔥 3. SRP (Single Responsibility Principle)
// ✅ Definition
// A class should have only one reason to change.

// ✅ Why?
// Reduces complexity
// Easier debugging
// Better maintainability
// ❌ Violation Example

class Employee {
public:
    void calculateSalary() {}
    void saveToDatabase() {}
};

// 👉 Problem:
// Business logic + DB logic mixed
// ✅ Correct (Follow SRP)

class Employee {
public:
    void calculateSalary() {}
};

class EmployeeDB {
public:
    void save(Employee e) {}
};

// 🔥 Real-life Example
// 👉 ATM:

// Withdraw
// Deposit
// Separate responsibilities

// 🔥 Cross Question
// 👉 “Is one function = one responsibility?”
// ✔ Answer:
// “No, responsibility means reason to change, not number of methods.”

// 🔥 4. OCP (Open Closed Principle)
// ✅ Definition
// Open for extension, closed for modification
// ❌ Violation

class Payment {
public:
    void pay(string type) {
        if(type == "card") {}
        else if(type == "upi") {}
    }
};

// 👉 Adding new type → modify code ❌
// ✅ Correct (Using polymorphism)

class Payment {
public:
    virtual void pay() = 0;
};

class CardPayment : public Payment {
public:
    void pay() { cout << "Card\n"; }
};

class UPIPayment : public Payment {
public:
    void pay() { cout << "UPI\n"; }
};

// 🔥 Why?
// No need to modify existing code
// Easy to extend

// 🔥 Cross Question
// 👉 “How implemented?”
// ✔ Answer:
// “Using inheritance and runtime polymorphism.”

// 🔥 5. LSP (Liskov Substitution Principle)
// ✅ Definition
// Derived class should replace base class without breaking behavior.
// ❌ Violation

class Bird {
public:
    virtual void fly() {}
};

class Penguin : public Bird {
public:
    void fly() { throw "Error"; }
};

// 👉 Penguin cannot fly ❌
// ✅ Fix

class Bird {};

class FlyingBird : public Bird {
public:
    virtual void fly() {}
};

// 🔥 Why?
// Ensures reliability
// Prevents runtime errors

// 🔥 Cross Question
// 👉 “Can child override?”
// ✔ Answer:
// “Yes, but must preserve expected behavior.”

// 🔥 6. ISP (Interface Segregation Principle)
// ✅ Definition
// Clients should not depend on methods they don’t use.
// ❌ Violation

class Machine {
public:
    virtual void print() = 0;
    virtual void scan() = 0;
};

// 👉 Printer forced to implement scan ❌
// ✅ Fix

class Printer {
public:
    virtual void print() = 0;
};

class Scanner {
public:
    virtual void scan() = 0;
};

// 🔥 Why?
// Avoid unnecessary implementation
// Clean design

// 🔥 Cross Question
// 👉 “Why not one interface?”
// ✔ Answer:
// “It forces classes to implement unused methods.”

// 🔥 7. DIP (Dependency Inversion Principle)
// ✅ Definition
// High-level modules should depend on abstraction, not concrete classes.
// ❌ Violation

class Bulb {
public:
    void turnOn() {}
};

class Switch {
    Bulb b;
};
✅ Fix
class Device {
public:
    virtual void turnOn() = 0;
};

class Bulb : public Device {
public:
    void turnOn() {}
};

class Switch {
    Device* d;
public:
    Switch(Device* dev) {
        d = dev;
    }
};
// 🔥 Why?
// Loose coupling
// Easy testing
// Flexible system
// 🔥 Cross Question
// 👉 “Why abstraction?”
// ✔ Answer:
// “To reduce dependency between modules.”

// 🔥 8. Comparison Questions (VERY IMPORTANT)
// Question	Answer
// SRP vs ISP	SRP → class level, ISP → interface level
// OCP vs DIP	OCP → extension, DIP → abstraction
// LSP vs OCP	LSP ensures safe inheritance

// 🔥 9. Advanced Questions (Prime Level)
// 👉 “Which reduces coupling most?”
// ✔ DIP
// 👉 “Which improves testing?”
// ✔ SRP + DIP
// 👉 “Which uses polymorphism?”
// ✔ OCP

// 🔥 10. Coding Question (VERY COMMON)
// 👉 “Fix using SOLID”

class Payment {
public:
    void payWithCard();
    void payWithUPI();
};

// ✔ Answer:
// Violates SRP
// Split into classes

// 🔥 11. Real Interview Flow (IMPORTANT)
// Interviewer will go like:

// What is SOLID?
// Explain SRP
// Give example
// What if violated?
// Code it
// Cross-question
// 👉 This loop repeats

// 🔥 12. Final Golden Answer
// “SOLID principles help in designing maintainable, scalable, and loosely coupled systems by promoting separation of concerns and abstraction.”

// 🔥 13. Ultimate Strategy (REMEMBER)
// What → definition  
// Why → benefit  
// How → implementation  
// Example → real-world  
// Violation → problem  

// 🚀 You are now ready for TCS Prime
// You can handle:
// ✔ Theory
// ✔ Code
// ✔ Cross questions
// ✔ Deep reasoning
