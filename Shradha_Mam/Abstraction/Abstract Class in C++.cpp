// 🔹 What is Abstraction in OOPS?
// ✅ Definition (Interview Standard)
// Abstraction means hiding the internal implementation details and showing only the essential features to the user.

// The user knows WHAT the object does,
// but does NOT know HOW it does it.


// 🔹Encapsulation               vs                      Abstraction (Key Difference)
// Encapsulation                                           Abstraction
// Hides data	                                           Hides implementation
// Achieved using access specifiers + getters/setters	   Achieved using abstract classes & interfaces
// Focus: How data is protected	                           Focus: What functionality is exposed
// Example: private variables	                           Example: ATM, Car


// 🔹 ATM Example (Best Real-Life Example)
// What YOU see (Abstraction)
// Insert card
// Enter PIN
// Withdraw money
// Check balance
// 👉 You don’t know:
// How PIN is verified
// How cash is counted
// How bank server works
// ✔ This is ABSTRACTION

// What BANK hides (Encapsulation)
// Account balance
// PIN
// Internal data
// ✔ This is ENCAPSULATION

// 👉 Hides implementation details, shows only essential features
// ✅ Full Abstraction Code (With main())

#include <iostream>
using namespace std;

// Abstract class (Abstraction)
class ATM {
public:
    // Pure virtual function
    virtual void withdraw(int amount) = 0; // parent or base class methods

    // Virtual destructor (good practice)
    virtual ~ATM() {}
};

// Concrete class (Implementation hidden from user)
class BankATM : public ATM {
public:
    void withdraw(int amount) {//// child or derived class methods
        cout << "Please collect your cash: ₹" << amount << endl;
        cout << "Transaction successful" << endl;
    }
};

int main() {
    ATM* atm;          // base class pointer
    BankATM b;

    atm = &b;          // runtime polymorphism
    atm->withdraw(2000);

    return 0;
}


// ❓ Is Abstraction Possible Without virtual Keyword?
// ✅ Short Answer:
// No — runtime abstraction in C++ requires the virtual keyword.
// Because abstraction in C++ works using:
// Abstract class
// Pure virtual function (= 0)
// Runtime polymorphism
// Dynamic binding
// And all of this depends on virtual.
// 🔥 Why virtual Is Required?
// Let’s understand step by step.

// 🧠 1️⃣ What virtual Actually Does
// When a function is marked virtual:
// ✔ It enables runtime polymorphism
// ✔ It enables dynamic binding
// ✔ It creates a vtable (virtual table)
// Without virtual → C++ uses compile-time binding
// 🔍 What Happens Without virtual?
// If you write:
// class ATM {
// public:
//     void withdraw(int amount) {   // ❌ not virtual
//         cout << "ATM withdraw\n";
//     }
// };

// And use base pointer:
// ATM* atm = &b;
// atm->withdraw(2000);

// 👉 C++ will call base class function, not derived.
// Because:
// Binding happens at compile time
// No polymorphism
// No abstraction behavior
// 🎯 Why Virtual Is Needed for Abstraction
// Abstraction means:
// “Call the method through base class, but execute derived implementation.”
// This is only possible using runtime polymorphism.
// And runtime polymorphism works only when function is virtual.
// 🏗 Internal Working (Important for Interviews)
// When you use virtual, C++:
// Creates a vtable
// Stores function addresses in it
// Base pointer checks object type at runtime
// Calls correct derived function
// Without virtual:
// No vtable
// No runtime resolution
// No abstraction effect

// 🏧 Your Example Explained
// class ATM {
// public:
//     virtual void withdraw(int amount) = 0;
// };
// Why virtual here?
// Because:
// ✔ We want ATM* atm = &b;
// ✔ And we want BankATM::withdraw() to execute
// ✔ That requires dynamic binding
// ✔ Dynamic binding requires virtual
// 💡 What If We Remove virtual But Keep =0?
// You cannot.
// Pure virtual syntax:
// virtual void withdraw(int amount) = 0;
// If you remove virtual, compiler error:
// ❌ “pure-specifier on non-virtual function”
// So abstract class in C++ must use virtual.
// 🛡 How This Relates to Abstraction
// Abstraction hides implementation and exposes interface.
// Example:
// ATM* atm = &b;
// atm->withdraw(2000);
// User sees only:
// withdraw()
// User does NOT know:
// Which class executes it
// How it is implemented
// That behavior works only because of virtual.
// 🧠 Interview-Level Answer

// "In C++, abstraction relies on runtime polymorphism, which requires virtual functions. The virtual keyword enables dynamic binding using a vtable, allowing a base class pointer to call the derived class implementation. Without virtual, function calls are resolved at compile time, and true abstraction cannot be achieved."



// Why do we use * (pointer)?
// Is it because vtable stores addresses of virtual functions?
// ✅ Step-by-Step Explanation
// 1️⃣ What is ATM* atm; ?
// It is a pointer to base class.
// ATM* atm;
// Meaning:
// atm can store address of any object derived from ATM.

// 2️⃣ What happens in:
// BankATM b;
// atm = &b;
// Here:
// b is an object of BankATM
// &b is its memory address
// atm (base class pointer) now points to derived object
// This is called: ✅ Upcasting (Derived → Base pointer)
// This enables runtime polymorphism
// 🧠 Why Pointer Is Used?
// Because runtime polymorphism works only with: Base class pointer OR Base class reference
// Not with normal objects.
// ❌ What If We Do This?
// ATM atm = b;   // ❌ Not allowed (abstract class)
// Even if ATM wasn’t abstract:
// ATM atm = b;   // Object slicing happens

// Only base part copied.
// Derived behavior lost.
// Polymorphism broken.
// 🔥 Now Let’s Talk About vtable
// When you use virtual, C++ does this internally:
// Each object of class with virtual function contains:
// | vptr | data members |
// vptr → points to vtable
// vtable → stores addresses of virtual functions
// 📦 Memory Layout (Conceptually)
// For BankATM b:
// b:
// | vptr | (points to BankATM vtable)
// BankATM vtable:
// withdraw() → BankATM::withdraw

// 🚀 What Happens in:
// atm->withdraw(2000);
// Step by step:
// atm points to b
// Compiler sees withdraw is virtual
// It checks object's vptr
// vptr points to BankATM vtable
// Calls BankATM::withdraw()
// ✔ That is runtime binding
// ✔ That is polymorphism
// ✔ That enables abstraction

// 🎯 Important Clarification
// You asked:
// Is * used because vtable stores addresses?
// Not exactly.
// * is used because: Polymorphism requires base class pointer/reference.
// Virtual mechanism works when accessed through pointer/reference.
// Vtable already stores addresses.
// Pointer just enables runtime resolution.

// 🔥 Why Not Without Pointer?
// If you do:
// b.withdraw(2000);
// This is:
// ✔ Compile-time binding
// ✔ Direct call
// ✔ No polymorphism needed
// But abstraction pattern requires:
// ATM* atm = &b;
// So that:
// User only sees base interface
// Implementation stays hidden

// 🧠 Interview-Level Answer
// "We use a base class pointer because runtime polymorphism in C++ works only through pointers or references. When a virtual function is called through a base class pointer, the compiler uses the object's vptr to look up the correct function in the vtable at runtime. This enables dynamic binding and abstraction."

// ✅ Upcasting (Derived → Base pointer) and vice versa possible?
// Short answer:
// ✔ Upcasting → YES (implicitly allowed)
// ⚠ Downcasting → YES, but not implicitly (must use cast and be careful)
// Now let’s understand properly.

// 🔼 1️⃣ Upcasting (Derived → Base)
class ATM {
public:
    virtual void withdraw(int amount) = 0;
};

class BankATM : public ATM {
public:
    void withdraw(int amount) override {
        cout << "Withdraw ₹" << amount << endl;
    }
};

// Example:
// BankATM b;
// ATM* atm = &b;   // ✅ Upcasting
// Why Allowed?
// Because:
// Every BankATM IS-A ATM
// Derived class contains base class part
// So converting derived → base is safe.
// ✔ Automatic
// ✔ No cast needed
// ✔ No risk
// 📦 Memory View (Conceptually)
// BankATM object:
// | ATM part | BankATM extra part |
// When upcasting:
// ATM* atm = &b;
// Pointer just sees:
// | ATM part |
// Safe ✔

// 🔽 2️⃣ Downcasting (Base → Derived)
// Example:
// ATM* atm = new BankATM();
// Now:
// BankATM* b = atm;  // ❌ Not allowed
// Compiler error.
// Because:
// Not every ATM is BankATM
// It might point to some other derived class
// ✅ Proper Way: Use dynamic_cast
// BankATM* b = dynamic_cast<BankATM*>(atm);
// If object is actually BankATM:
// ✔ Cast succeeds
// Otherwise:
// ✔ Returns nullptr
// ⚠ Dangerous Way: C-style cast
// BankATM* b = (BankATM*)atm;   // ❌ Unsafe
// No checking happens.
// May cause undefined behavior.
// 🔥 Why Downcasting Is Risky?
// Because:
// ATM* atm = new SomeOtherATM();
// BankATM* b = dynamic_cast<BankATM*>(atm);
// Here object is NOT BankATM.
// So:
// b = nullptr
// If you force it → crash 💥

// 🎯 Rule for Interviews
// Casting Type	Allowed?	Safe?	Automatic?
// Upcasting	✅ Yes	✅ Safe	✅ Automatic
// Downcasting	⚠ Yes	❌ Risky	❌ Needs cast

// 🧠 Interview-Level Answer
// "Upcasting from derived to base is always safe and happens implicitly because a derived object contains a base class part. Downcasting is possible but requires explicit casting like dynamic_cast, and it is safe only if the base pointer actually points to the derived object."


// ✅ Statement
// ATM* atm;
// It can store address of any object derived from ATM.
// Yes ✔
// Because of Inheritance + Upcasting + Polymorphism
// 🧠 THEORY
// If two classes inherit from ATM:
class ATM { ... };   // Base class
class BankATM : public ATM { ... };
class SBIATM  : public ATM { ... };
// Then:
// BankATM  IS-A  ATM
// SBIATM   IS-A  ATM
// So base class pointer can point to any derived object.

// This is called:
// ✅ Polymorphism
// ✅ Upcasting
// ✅ Base class pointer flexibility

// 📦 Memory Concept (Very Important)
// Suppose we have:
class ATM {
public:
    virtual void withdraw(int amount) = 0;
};
// Now:
class BankATM : public ATM { ... };
class SBIATM  : public ATM { ... };

// Object Layout (Conceptually)
// BankATM object:
// | vptr | ATM part | BankATM extra data |

// SBIATM object:
// | vptr | ATM part | SBIATM extra data |

// Both contain:
// ✔ ATM part
// ✔ Their own implementation
// ✔ Their own vtable

// 🔥 Full Code Example

#include <iostream>
using namespace std;
class ATM {
public:
    virtual void withdraw(int amount) = 0;  // pure virtual
    virtual ~ATM() {}
};

class BankATM : public ATM {
public:
    void withdraw(int amount) override {
        cout << "BankATM dispensing ₹" << amount << endl;
    }
};

class SBIATM : public ATM {
public:
    void withdraw(int amount) override {
        cout << "SBIATM dispensing ₹" << amount << endl;
    }
};

int main() {

    ATM* atm;     // base class pointer

    BankATM b1;
    SBIATM s1;

    atm = &b1;    // points to BankATM
    atm->withdraw(1000);

    atm = &s1;    // now points to SBIATM
    atm->withdraw(2000);

    return 0;
}

// 🔎 OUTPUT
// BankATM dispensing ₹1000
// SBIATM dispensing ₹2000

// ❓ Your Main Question
// How does it identify which derived class object it is pointing to?
// Answer:
// Because of:
// 🔥 Virtual Table (vtable)
// 🧠 How Identification Happens (Internally)
// When object is created:
// BankATM b1;
// Memory contains:
// b1:
// | vptr → BankATM vtable |

// When:
// SBIATM s1;
// Memory contains:
// s1:
// | vptr → SBIATM vtable |

// 🚀 When You Call:
// atm->withdraw(1000);
// Steps:
// 1️⃣ atm points to object
// 2️⃣ Object has vptr
// 3️⃣ vptr points to that class's vtable
// 4️⃣ vtable contains address of correct withdraw()
// 5️⃣ Correct function executes

// ✔ Runtime decides
// ✔ Not compile time
// That’s how it identifies.
// 🎯 Important Interview Line
// "The base class pointer can point to any derived class object because of upcasting. The correct function is identified at runtime using the object's vptr, which points to that class's vtable."


// 🔥 Important Extra (Very Interview Important)
// dynamic_cast works only if:
// ✔ Base class has at least one virtual function
// That’s why we usually make destructor virtual.

// 🔹 Why This Is Abstraction?
// ✔ User sees only withdraw()
// ✔ Internal logic is hidden
// ✔ Achieved using abstract class + pure virtual function

// 🔹 2️⃣ ENCAPSULATION IN C++ (Account Example)
// 👉 Hides data and provides controlled access
// ✅ Full Encapsulation Code (With main())


#include <iostream>
using namespace std;

class Account {
private:
    int balance;   // data hidden (encapsulation)

public:
    // Setter
    void setBalance(int b) {
        if (b >= 0) balance = b;
        else balance = 0;
    }

    // Getter
    int getBalance() {
        return balance;
    }
};

int main() {
    Account acc;

    acc.setBalance(5000);
    cout << "Account Balance: ₹" << acc.getBalance() << endl;

    return 0;
}


// Interview Answer:
// “An abstract class is a class that contains at least one pure virtual function.
// It cannot be instantiated and is used as a base class.”

#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() = 0;  // pure virtual → abstract class
    virtual ~Shape(){};
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing Circle\n";
    }
};

int main() {
    Shape* s = new Circle();  // using abstract class pointer
    s->draw();
    delete s;
    return 0;
}

// “An abstract class is a class that contains at least one pure virtual function. It cannot be instantiated and is used as a base class.”
// Let’s connect this definition directly to your code.

// 🔹 1️⃣ Why is Shape an Abstract Class?
class Shape {
public:
    virtual void draw() = 0;  // pure virtual
    virtual ~Shape(){};
};

// Because of this line:
// virtual void draw() = 0;
// = 0 makes it a pure virtual function.
// As soon as a class has at least one pure virtual function, it becomes:
// ✅ Abstract Class
// 🔹 2️⃣ What Does “Cannot Be Instantiated” Mean?
// You CANNOT do this:
// Shape obj;        // ❌ ERROR
// Shape* s = new Shape();  // ❌ ERROR

// Why?
// Because Shape does not provide implementation of draw().
// It is incomplete.
// It only defines a contract:
// “Any derived class MUST implement draw()”

// 🔹 3️⃣ Why Is It Used as a Base Class?
// Look at your derived class:
class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing Circle\n";
    }
};

// Here:
// Circle provides implementation of draw()
// Now Circle is a concrete class
// So it can be instantiated
// 🔹 4️⃣ What Happens in main()?
// Shape* s = new Circle();
// Step-by-step:

// 1️⃣ new Circle() → creates Circle object
// 2️⃣ Upcasting happens (Derived → Base pointer)
// 3️⃣ s points to Circle object

// s->draw();
// Because draw() is virtual:
// ✔ Runtime checks object's vtable
// ✔ Calls Circle::draw()
// ✔ Output:
// Drawing Circle

// 🔹 5️⃣ Why Abstract Class Is Useful?
// Abstract class is like a blueprint or contract.
// Example:
// If you create multiple shapes:

class Rectangle : public Shape { ... };
class Triangle  : public Shape { ... };

// All must implement:
// draw();
// So abstraction ensures:
// ✔ Common interface
// ✔ Implementation flexibility
// ✔ Polymorphism

// 🔥 Real Meaning in Simple Words
// Your abstract class:
// class Shape
// Means:
// “I don’t know how to draw a shape, but I guarantee that every shape will know how to draw itself.”

// 🎯 Interview-Ready Explanation
// "In this code, Shape is an abstract class because it contains a pure virtual function draw(). It cannot be instantiated directly. It is used as a base class to enforce that all derived classes like Circle provide their own implementation of draw(), enabling runtime polymorphism."

// // 🔹 What Happens in This Code?
class Shape {
public:
    virtual void draw() = 0;  // pure virtual → abstract class
};

// // 👉 This Means:
// // Shape is an abstract class
// // It cannot be instantiated
// // It forces derived classes to implement draw()

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing Circle\n";
    }
};

// // 👉 This Means:
// // Circle provides implementation of draw()
// // This is Function Overriding
// // override ensures correct overriding
// // Shape* s = new Circle();

// // 👉 What is happening here?
// // 1️⃣ new Circle() → object created in heap
// // 2️⃣ s is base class pointer
// // 3️⃣ Upcasting happens automatically
// // 4️⃣ s points to Circle object
// // s->draw();
// // Because draw() is virtual:
// // ✔ Runtime checks object's vptr

// ✔ Calls Circle::draw()
// ✔ Output:
// Drawing Circle

// 🔹 Why delete s;?
// Since object is created using new,
// we must free memory.
// ⚠ Best practice: base class should have virtual destructor.
// 🔥 What Concept Is This?
// This demonstrates:
// ✔ Abstraction
// ✔ Runtime Polymorphism
// ✔ Function Overriding
// ✔ Dynamic Binding

// 🔹 Now Your Main Question
// Is overloading and overriding possible in abstraction?
// Answer:
// ✔ YES — Both are possible
// But they are different concepts.

// 🔥 1️⃣ Function Overriding (Most Important Here)
// Overriding happens when:
// Base class has virtual function
// Derived class provides same function signature
// Example (Your Code):

class Shape {
public:
    virtual void draw() = 0;
};


class Circle : public Shape {
public:
    void draw() override {   // overriding
        cout << "Drawing Circle";
    }
};


// ✔ This is overriding
// ✔ Works with abstraction
// ✔ Requires inheritance
// ✔ Requires virtual

// 🔥 2️⃣ Function Overloading
// Overloading means:
// Same function name
// Different parameters
// Same class
// Example:

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing Circle\n";
    }

    void draw(int radius) {   // overloaded function
        cout << "Drawing Circle with radius " << radius << endl;
    }
};

// ✔ This is overloading
// ✔ Compile-time polymorphism
// ✔ Works even in abstract class
// 🔥 Can Abstract Class Have Overloading?
// YES.

class Shape {
public:
    virtual void draw() = 0;
    virtual void draw(int size) = 0;  // overloaded pure virtual
};

// Derived must implement both.
// "In abstraction, function overriding is commonly used to provide implementation of pure virtual functions in derived classes. Function overloading is also possible but it represents compile-time polymorphism. Overriding enables runtime polymorphism, which is essential for abstraction."


// 🔐 How Abstraction Provides Security in OOP?
// ✅ 1️⃣ By Hiding Internal Implementation
// Abstraction hides how something works internally and only exposes what it does.
// When internal logic is hidden:
// Users cannot directly access sensitive code
// Users cannot modify internal behavior
// Internal algorithms remain protected
// 👉 This prevents misuse and unauthorized changes.

// What User Can See (Public Interface)
// Insert card
// Enter PIN
// Withdraw money
// Check balance
// What User Cannot See (Hidden Implementation)
// PIN verification algorithm
// Encryption logic

// Server communication
// Cash counting mechanism
// 🔐 Because these are hidden:
// Hackers cannot directly manipulate balance
// Users cannot change withdrawal logic
// Internal security algorithms remain safe
// ✔ That is how abstraction improves security.

// 🔐 2️⃣ Restricts Direct Access to Critical Code
// In C++, abstraction is achieved using:
// Abstract classes
// Pure virtual functions
// Example:
// class ATM {
// public:
//     virtual void withdraw(int amount) = 0;
// };
// User can only call:
// atm->withdraw(2000);
// But user cannot see or change:
// How balance is updated
// How server validates transaction
// How logs are stored
// This protects internal business logic.

// 🔐 3️⃣ Prevents Accidental Damage
// If internal implementation was public:
// atm.balance = 1000000;   // ❌ Dangerous
// But with abstraction:
// Balance update logic stays inside implementation
// Validation checks remain enforced
// ✔ No one can bypass rules.

// 🔐 4️⃣ Helps Apply Controlled Security Policies
// Example inside implementation:
// void withdraw(int amount) {
//     if(amount > balance) {
//         cout << "Insufficient balance";
//     }
// }
// User cannot remove this check.
// Security rules are enforced internally.

// 🔐 5️⃣ Protects Sensitive Algorithms
// Imagine:
// Banking encryption logic
// Payment gateway processing
// Authentication verification
// If exposed:
// Easy to reverse engineer
// Easy to exploit
// Abstraction ensures:
// ✔ Sensitive logic stays hidden
// ✔ Only approved methods are accessible

// 🎯 Interview-Ready Answer (Short & Powerful)
// "Abstraction provides security by hiding internal implementation details and exposing only essential functionalities. This prevents direct access to sensitive data and business logic, reducing the risk of misuse, tampering, or unauthorized modification."

