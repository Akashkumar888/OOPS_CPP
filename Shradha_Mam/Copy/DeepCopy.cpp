
// 🔹 4. Deep Copy (Theory + Code)
// 🔥 Theory
// Deep Copy:
// Allocate new memory.
// Copy actual data.
// Both objects independent.
// Safe.
// ✅ Deep Copy Code (Correct)

#include <iostream>
using namespace std;

class Demo {
public:
    int* data;   // pointer → stores address of integer

    // Constructor
    Demo(int value) {
        data = new int(value);
        // Heap memory created for integer
        // data (pointer) is stored in stack
        // data points to heap memory
    }

    // ✅ Deep Copy Constructor
    Demo(const Demo& obj) {
        data = new int(*obj.data);  // allocate new memory and copy value
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

    // 3️⃣ Deep Copy of d1
    Demo d3 = d1;

    *d1.data = 30;

    cout << "d1 data: " << *d1.data << endl;
    cout << "d3 data (deep copy): " << *d3.data << endl;

    // 4️⃣ Deep Copy of heap object
    Demo d4 = *d2;

    cout << "\nBefore modification:\n";
    cout << "d2 data: " << *d2->data << endl;
    cout << "d4 data: " << *d4.data << endl;

    // Modify d2
    *d2->data = 100;

    cout << "\nAfter modifying d2:\n";
    cout << "d2 data: " << *d2->data << endl;
    cout << "d4 data (NOT affected now): " << *d4.data << endl;

    // Delete heap object
    delete d2;
  //This does TWO things:
// 1️⃣ Calls destructor of heap object
// 2️⃣ Frees memory of heap object
    return 0;
}

// 🔥 Why Deep Copy is Safe?
// Because:
// Different memory locations.
// No shared pointer.
// No double delete.
// No memory corruption.

// “Shallow copy copies the pointer address, so two objects share the same memory, which can cause double deletion. Deep copy allocates separate memory and copies actual values, making objects independent and safe.”

/*
🔹 1️⃣ Why Copy Constructor Is Used For Deep Copy?

Because copy constructor is automatically called when:

Demo d2 = d1;      // copy initialization
Demo d3(d1);       // direct initialization

Whenever one object is created from another object
👉 copy constructor runs.

🔥 Default Behavior (If You Don’t Write One)

C++ automatically creates a default copy constructor.

But it performs:

⚠ Shallow Copy

Meaning:

It copies pointer address only.

Both objects share same memory.

That is dangerous when dynamic memory is involved.

🔹 2️⃣ Why We Write Our Own Copy Constructor?

When class contains:

Pointer members

Dynamic memory (new/delete)

We must override default behavior.

So we write:

Demo(const Demo& obj) {
    data = new int(*obj.data);
}

Now instead of copying address:

It creates new memory

Copies actual value

Makes objects independent

🔥 Important Concept

Copy constructor runs only when:

Case 1:
Demo d2 = d1;
Case 2:
Demo d2(d1);
Case 3:

When object is passed by value to a function.

Example:

void fun(Demo obj) { }
🔹 3️⃣ Is Copy Constructor Enough Always?

Not always.

There is another situation:

Demo d1(10);
Demo d2(20);

d2 = d1;   // Assignment

This does NOT call copy constructor.

It calls:

Copy Assignment Operator

So if class uses dynamic memory, we must also write:

Demo& operator=(const Demo& obj)
🔥 This Leads To Important Rule

If your class has:

Destructor

Copy constructor

Copy assignment operator

This is called:

🚀 Rule of Three
🔹 4️⃣ Do We ALWAYS Need Copy Constructor For Deep Copy?

Answer:

👉 Only when your class manages dynamic memory (like new/delete).

If your class has only normal variables:

class Demo {
    int x;
};

Then default copy constructor is perfectly fine.

Because no pointer is involved.

🔥 Example Where Deep Copy Not Needed
class Demo {
public:
    int x;
};

Copying:

Demo d1;
Demo d2 = d1;

Safe.
No dynamic memory.

🔥 So Final Clear Answer
Why use copy constructor for deep copy?

Because:

Default copy constructor does shallow copy.
When a class has pointer members, shallow copy causes shared memory and double deletion.
So we override copy constructor to allocate new memory and copy actual data.

🔥 Interview Ready Answer (Perfect Line)

If interviewer asks:

Why do we implement copy constructor for deep copy?

You say:

“Because the default copy constructor performs shallow copy, which only copies pointer addresses. If a class manages dynamic memory, we must define a copy constructor to allocate separate memory and copy actual values to prevent double deletion and memory corruption.”

🔥 One Important Visual
Shallow Copy:
d1.data  ----\
              ----> [10]
d2.data  ----/
Deep Copy:
d1.data  ----> [10]
d2.data  ----> [10]

Different memory blocks.

🔥 Final Conclusion

✔ Deep copy is implemented using copy constructor
✔ Needed when dynamic memory exists
✔ Prevents double delete
✔ Makes objects independent
*/