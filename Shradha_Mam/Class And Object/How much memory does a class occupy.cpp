
// 20. How much memory does a class occupy?
// Classes do not use memory. They merely serve as a template from which items are made. Now, objects actually initialize the class members and methods when they are created, using memory in the process.

// 🔷 How much memory does a class occupy?
// 👉 Simple Answer
// A class does not occupy memory.

// 👉 Explanation
// A class is just a blueprint or template
// It defines:
// Variables (data members)
// Functions (methods)

// 👉 But it does not store actual data
// 👉 Where is memory used?
// Memory is used when we create objects of the class.

// 💡 Example
class Student {
public:
    int age;
};

// 👉 Here:
// Student class → no memory used
// When we create object:
// Student s1;

// 👉 Now:
// Memory is allocated for age inside s1
// 💡 Important Point
// Each object gets its own separate memory
// Methods are usually shared among all objects

// 🔥 Final Interview Line
// A class itself does not occupy memory; it is only a blueprint. Memory is allocated only when objects of the class are created.