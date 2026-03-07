
// 🔹 3. Shallow Copy (Theory + Code)
// 🔥 Theory
// Shallow Copy:
// Copies data as it is.
// Pointer address is copied.
// Both objects point to SAME memory.
// Dangerous if using dynamic memory.
// Default copy constructor does shallow copy.
// ❌ Shallow Copy Code Example

#include <iostream>
using namespace std;

class Demo {
public:
    int* data;   // pointer → stores address of integer

    // Constructor
    Demo(int value) {
        // Heap memory created for integer
        // data (pointer) is stored in stack
        // data points to heap memory
        data = new int(value);
    }

    // Destructor
    ~Demo() {
        // delete is used to free heap memory
        // because we used new to allocate memory
        delete data;
        cout << "Destructor called\n";
    }
};

int main() {

    // 1️⃣ Stack Object
    Demo d1(10);  
    // d1 is created in stack
    // data inside d1 points to heap memory

    // 2️⃣ Heap Object
    Demo* d2 = new Demo(20);  
    // d2 is pointer stored in stack
    // object is created in heap

    // 3️⃣ Shallow Copy (Default Copy Constructor)
    Demo d3 = d1;  
    // d3.data and d1.data point to SAME heap memory

    // stack object access using .
    // Modify d1
    *d1.data = 30;

    cout << "d1 data: " << *d1.data << endl;
    cout << "d3 data (shallow copy): " << *d3.data << endl;

    // 4️⃣ Shallow Copy of heap object (copying object, not pointer)
    Demo d4 = *d2;  
    // d4.data and d2->data point to SAME heap memory

    cout << "\nBefore modification:\n";
    cout << "d2 data: " << *d2->data << endl;
    cout << "d4 data: " << *d4.data << endl;

    // heap object access using ->
    // Modify d2
    *d2->data = 100;

    cout << "\nAfter modifying d2:\n";
    cout << "d2 data: " << *d2->data << endl;
    cout << "d4 data (affected due to shallow copy): " << *d4.data << endl;

    // Delete heap object
    delete d2;
    //This does TWO things:
    // 1️⃣ Calls destructor of heap object
    // 2️⃣ Frees memory of heap object

    return 0;
}


/*
🔹 1️⃣ Stack Object Access
When object is created normally:
Demo d1(10);
Here:
d1 is a normal object
It is NOT a pointer
So we use dot operator (.)

Access syntax:
d1.data        // access member
*d1.data       // access value inside pointer

So in your code:
*d1.data = 30;
Because:
d1 is object
data is pointer
So *d1.data gives value stored in heap

🔹 2️⃣ Heap Object Access
When object is created using new:
Demo* d2 = new Demo(20);
Here:
d2 is a pointer
It stores address of object
So we use arrow operator (->)

Access syntax:
d2->data        // access member
*d2->data       // access value inside pointer

Because:
d2->data
means:
(*d2).data

🔥 Simple Rule
Object Type	Created How	Access Using
Stack object	Demo d1(10);	.
Heap object (pointer)	Demo* d2 = new Demo(20);	->
🔥 Very Important Concept
Dot Operator (.)
Used when you have actual object.
Arrow Operator (->)
Used when you have pointer to object.

🔹 3️⃣ What Is Happening In Memory?

1. Stack Object
Demo d1(10);

Memory:

Stack:
d1
 └── data → address 5000

Heap:
5000 → 10

Access:

d1.data      → 5000
*d1.data     → 10

2. Heap Object
Demo* d2 = new Demo(20);

Memory:

Stack:
d2 → address 6000

Heap:
6000 → object
        └── data → 7000

7000 → 20

Access:

d2->data      → 7000
*d2->data     → 20

🔥 Why This Line Works
Demo d4 = *d2;
Because:
d2 is pointer to object
*d2 gives actual object
Then copy constructor runs

🔥 Important Shortcut
Arrow operator:
ptr->member Is same as: (*ptr).member
But arrow is cleaner.

🔥 Interview Ready Explanation
If interviewer asks:
When do we use dot and arrow operator?
You say:
“Dot operator is used to access members of an object. Arrow operator is used when we have a pointer to an object. Arrow internally dereferences the pointer and accesses the member.”

🔥 One More Important Thing
If you write:
Demo d1(10);
Demo* p = &d1;
Then:
p->data   // valid
Because now p is pointer.

🔥 Final Simple Summary
Stack object → use .
Heap object → use ->
Pointer to stack object → use ->
Object itself → use .
*/

/*🔥 Visual Timeline
Execution:
delete d2;        -> Destructor called (1)
main ends
d4 destructor     -> Destructor called (2)
delete same memory again
💥 crash here

After crash:

d3 destructor ❌ not executed
d1 destructor ❌ not executed
*/

/*
🔹 1️⃣ Normal Object (Stack Allocation)
Demo d1(10);
✅ When to Use This?
Use stack object when:
Object is small
Lifetime is limited to current scope
You don’t need manual memory control
No need to share ownership
Object should auto-delete
✅ Advantages
Automatic destruction
No memory leak
Cleaner code
Faster

🔥 Example Use Case
void fun() {
    Demo d1(10);  // automatically destroyed after function ends
}

🔹 2️⃣ Using new (Heap Allocation)
Demo* d2 = new Demo(20);
✅ When to Use This?
Use heap object when:
Object must live beyond current scope
You want dynamic lifetime control
Large object (stack overflow risk)
Polymorphism (very important case)
Object shared between multiple parts of program

🔥 Very Important Case: Polymorphism
Heap is mostly used when doing:
Base* ptr = new Derived();

Example:*/

class Base {
public:
    virtual void show() {}
};

class Derived : public Base {
public:
    void show() override {
        cout << "Derived\n";
    }
};

int main() {
    Base* obj = new Derived();  // heap required
    obj->show();
    delete obj;
}

/*
👉 This is real-world usage.

🔹 3️⃣ Real Difference

Stack Object
Demo d1(10);
Memory:
Stack: d1

Heap:
value

Destructor:
✔ Automatically called

Heap Object
Demo* d2 = new Demo(20);
Memory:

Stack:
d2 (pointer)

Heap:
object
value

Destructor:
❌ Must manually call delete d2
*/


/*
🔹 ✅ Answer (Simple)
Destructor is called one by one,
and in reverse order of object creation.

This is called:
LIFO (Last In First Out) 
Exactly like stack.

🔹 Let’s Understand Using Your Code
Inside main() you created objects in this order:

Demo d1(10);        // 1
Demo* d2 = new Demo(20);  // 2 (heap object)
Demo d3 = d1;       // 3
Demo d4 = *d2;      // 4

So order of creation:

1️⃣ d1
2️⃣ d2 (heap object)
3️⃣ d3
4️⃣ d4

🔥 Destruction Order
For stack objects:
They are destroyed in reverse order:LIFO (Last In First Out) 

4️⃣ d4 destroyed first
3️⃣ d3 destroyed
1️⃣ d1 destroyed

For heap object:
Only destroyed when:
delete d2;
At that line:
Destructor of object pointed by d2 runs immediately

🔥 Final Order in Your Program
When execution reaches:
delete d2;
Destructor runs for heap object.
Then when main() ends:

Stack objects destroyed in reverse order:
d4
d3
d1

🔹 How To Check Practically?
Modify constructor to print something:

Demo(int value) {
    data = new int(value);
    cout << "Constructor called\n";
}

Now run program.
You will see:
Constructors called in order
Destructors called in reverse order

Notice:
Destructors run in reverse order.

🔥 Important Rule
For Stack Objects
Automatically destroyed
Reverse order of creation
For Heap Objects
Destroyed only when delete is called
Destructor runs immediately at delete

🔥 Visual Memory Understanding
Creation:
d1
d2
d3
d4

Destruction:

d4
d3
d2 (if deleted)
d1
🔥 Interview Ready Answer
If interviewer asks:
In what order destructors are called?
You say:
“Destructors are called in reverse order of object creation for stack objects. For heap objects, destructor runs when delete is explicitly called.”
*/

// “Shallow copy copies the pointer address, so two objects share the same memory, which can cause double deletion. Deep copy allocates separate memory and copies actual values, making objects independent and safe.”

// 🔹 1️⃣ What does int* data; mean?
// int* data;
// It means:
// data is a pointer
// It will store an address
// That address will point to an integer
// 👉 data does NOT store value
// 👉 It stores address of an integer

// 🔹 2️⃣ What happens in this line?
// data = new int(value);
// Let’s break it.
// Suppose:
// Demo obj(10);
// Now constructor runs:
// data = new int(10);
// 🔥 What happens internally?

// Step 1:
// new int(10)
// → Heap memory is created
// → Suppose memory address = 5000
// → At address 5000, value 10 is stored

// Step 2:
// That address (5000) is returned

// Step 3:
// That address is stored inside data

// So final situation:
// Variable	Contains
// data	5000 (address)
// memory at 5000	10
// 🔥 Important Answer to Your Question
// Does value go inside data or address stored in data?
// ✅ Address is stored in data
// ✅ Value is stored in heap memory
// So:
// data → 5000
// *data → 10
// 🔹 3️⃣ Why do we use int?
// Because we want to store an integer.
// General format:
// datatype* pointerName;

// Examples:
// int* p;        // points to integer
// float* p;      // points to float
// char* p;       // points to character
// double* p;     // points to double
// Pointer type must match the data type.

// 🔹 4️⃣ Very Clear Visual Example
// int* p = new int(25);
// Memory looks like this:

// Stack Memory
// -------------
// p = 6000

// Heap Memory
// -------------
// Address 6000 → 25

// So:
// p      → 6000
// *p     → 25

// 🔹 5️⃣ Difference Between These
// ❌ Normal Variable (Stack)
// int x = 10;
// Memory:
// x = 10
// No pointer needed.

// ✅ Dynamic Memory (Heap)
// int* p = new int(10);
// Memory:
// p → address
// address → 10
// Needs delete p;
// 🔥 Why Use Heap Memory?
// We use new when:
// Size not known at compile time
// Large memory needed
// Object must live beyond function scope
// For dynamic arrays
// For deep copy implementation

// 🔹 6️⃣ Very Important Concept
// What does * mean?
// Two meanings:

// 1️⃣ In declaration:
// int* p;
// Means → p is pointer to int

// 2️⃣ In usage:
// *p
// Means → value stored at that address

// 🔥 Simple Interview Explanation (Say Like This)
// “int* data means data is a pointer that stores the address of an integer. When we write data = new int(10), memory is created in heap, 10 is stored there, and its address is stored inside data.”

// 🔥 Final Clear Summary
// Code	Meaning
// int* data;	data stores address
// new int(10)	create heap memory and store 10
// data = new int(10);	store that address in data
// *data	gives value stored at that address


/*
🔹 1️⃣ Using float
#include <iostream>
using namespace std;

class Demo {
public:
    float* data;

    Demo(float value) {
        data = new float(value);
    }

    ~Demo() {
        delete data;
    }
};

int main() {
    Demo obj1(10.5f);
    Demo obj2 = obj1;   // shallow copy

    *obj2.data = 50.7f;

    cout << *obj1.data << endl;
    cout << *obj2.data << endl;
}

✅ Changes:

int* → float*

new int() → new float()

Use decimal values

🔹 2️⃣ Using double
#include <iostream>
using namespace std;

class Demo {
public:
    double* data;

    Demo(double value) {
        data = new double(value);
    }

    ~Demo() {
        delete data;
    }
};

int main() {
    Demo obj1(10.123);
    Demo obj2 = obj1;

    *obj2.data = 99.456;

    cout << *obj1.data << endl;
    cout << *obj2.data << endl;
}
🔹 3️⃣ Using long long
#include <iostream>
using namespace std;

class Demo {
public:
    long long* data;

    Demo(long long value) {
        data = new long long(value);
    }

    ~Demo() {
        delete data;
    }
};

int main() {
    Demo obj1(10000000000LL);
    Demo obj2 = obj1;

    *obj2.data = 99999999999LL;

    cout << *obj1.data << endl;
    cout << *obj2.data << endl;
}
🔹 4️⃣ Using char
#include <iostream>
using namespace std;

class Demo {
public:
    char* data;

    Demo(char value) {
        data = new char(value);
    }

    ~Demo() {
        delete data;
    }
};

int main() {
    Demo obj1('A');
    Demo obj2 = obj1;

    *obj2.data = 'Z';

    cout << *obj1.data << endl;
    cout << *obj2.data << endl;
}
🔹 5️⃣ Using bool
#include <iostream>
using namespace std;

class Demo {
public:
    bool* data;

    Demo(bool value) {
        data = new bool(value);
    }

    ~Demo() {
        delete data;
    }
};

int main() {
    Demo obj1(true);
    Demo obj2 = obj1;

    *obj2.data = false;

    cout << *obj1.data << endl;
    cout << *obj2.data << endl;
}
🔥 Important Rule

The pattern is always:

datatype* pointerName;

pointerName = new datatype(value);

Type must match.
*/



/*
🔥 Next Level (Advanced)

If interviewer asks:

What if I want one class that works for all datatypes?

Answer: Use Templates

Example:

template <typename T>
class Demo {
public:
    T* data;

    Demo(T value) {
        data = new T(value);
    }

    ~Demo() {
        delete data;
    }
};

Now it works for int, float, double, anything.
*/