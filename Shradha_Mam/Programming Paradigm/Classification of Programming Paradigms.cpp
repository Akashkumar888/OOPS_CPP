
// 🔷 2. Classification of Programming Paradigms
// Programming paradigms are broadly divided into:

// Programming Paradigms
//    ├── Imperative (HOW to do)
//    └── Declarative (WHAT to do)
// 🔶 1. Imperative Programming Paradigm (HOW)
// 📌 Core Idea:

// You describe step-by-step instructions for the computer to follow.
// 👉 Focus:
// Control flow (loops, conditions)
// State changes (variables)

// 💡 Interview Definition:
// Imperative programming focuses on describing how a program operates by explicitly specifying each step.

// 🔹 Characteristics
// Uses variables and assignments
// Changes program state
// Uses loops (for, while)
// Uses conditionals (if-else)
// 🔹 Types of Imperative Paradigm

// 🔸 1. Procedural Programming
// 📌 Concept:
// Program is divided into functions (procedures)
// Functions are executed sequentially
// 💡 Key Idea:
// Divide and conquer using functions.

// ✔ Example:
#include <stdio.h>

void greet() {
    printf("Hello");
}

int main() {
    greet();
    return 0;
}

// ✔ Features:
// Step-by-step execution
// Code reuse via functions
// Simple and structured
// ❌ Limitations:
// Weak data security
// Global data can be modified easily
// Difficult to scale for large systems
// ✔ Real-world Usage:
// System programming
// Embedded systems

// 🔸 2. Object-Oriented Programming (OOP)
// 📌 Concept:
// Program is organized around objects
// Objects contain:
// Data (attributes)
// Functions (methods)
// 💡 Interview Definition:

// OOP is a paradigm that models real-world entities using objects that combine data and behavior.
// ✔ Example:

class Car {
public:
    void drive() {
        cout << "Driving";
    }
};

int main() {
    Car c;
    c.drive();
}

// ✔ Core Concepts (VERY IMPORTANT)
// Encapsulation
// Wrapping data + methods together
// Data hiding
// Inheritance
// Reusing code from parent class
// Polymorphism
// Same function, different behavior
// Abstraction
// Hiding implementation details
// ✔ Advantages:
// High reusability
// Easy maintenance
// Better security
// Real-world modeling
// ❌ Disadvantages:
// Complex design
// Larger code size
// Requires planning
// ✔ Real-world Usage:
// Web applications
// Mobile apps
// Enterprise systems

// 🔸 3. Parallel Programming
// 📌 Concept:
// Multiple tasks run simultaneously

// 💡 Interview Definition:
// Parallel programming is a paradigm where multiple computations are executed at the same time to improve performance.

// ✔ Features:
// Multi-threading
// Faster execution
// Efficient CPU usage
// ✔ Examples:
// GPU computing
// Multi-core processors
// ✔ Real-world Usage:
// AI/ML models
// Big data processing
// Scientific simulations

// 🔶 2. Declarative Programming Paradigm (WHAT)
// 📌 Core Idea:
// You describe what result you want, not how to achieve it.

// 💡 Interview Definition:
// Declarative programming focuses on specifying the desired output without explicitly defining control flow.

// 🔹 Characteristics
// No explicit control flow
// Less code
// High-level abstraction
// 🔹 Types of Declarative Paradigm

// 🔸 1. Functional Programming
// 📌 Concept:
// Based on pure functions
// Avoids changing data (immutable)
// ✔ Example:
// const add = (a, b) => a + b;
// ✔ Features:
// No side effects
// Immutability
// First-class functions
// Easier debugging
// ✔ Advantages:
// Predictable behavior
// Easier testing
// Less bugs
// ❌ Disadvantages:
// Hard for beginners
// Performance overhead sometimes
// ✔ Languages:
// Haskell
// Scala
// JavaScript (partial)

// 🔸 2. Logic Programming
// 📌 Concept:
// Based on facts and rules
// ✔ Example (Prolog style):
// Human(Socrates)
// Mortal(X) :- Human(X)
// 💡 Explanation:
// If X is human → X is mortal
// ✔ Features:
// Rule-based
// Used in AI reasoning
// ✔ Usage:
// Expert systems
// AI
// Knowledge-based systems

// 🔸 3. Database Programming
// 📌 Concept:
// Focus on data querying
// ✔ Example:
// SELECT * FROM students;
// ✔ Features:
// Data manipulation
// Query-based operations
// ✔ Usage:
// Databases
// Backend systems
