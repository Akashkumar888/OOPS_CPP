// No. If the base class includes non-static methods, an object must be constructed. But no objects need to be generated if the class includes static methods. In this instance, you can use the class name to directly call those static methods.


// 🔷 Is it always necessary to create objects from a class?
// 👉 Simple Answer
// ❌ No, it is not always necessary to create objects.

// 👉 Explanation
// If a class contains non-static methods, then you must create an object to access them.
// If a class contains static methods, then you do not need to create an object.

// 👉 Case 1: Non-Static Methods
// 👉 Object is required
class Demo {
public:
    void show() {
        cout << "Hello";
    }
};

int main() {
    Demo d;   // object created
    d.show(); // calling method
}



// 👉 Case 2: Static Methods
// 👉 Object is NOT required

class Demo {
public:
    static void show() {
        cout << "Hello";
    }
};

int main() {
    Demo::show(); // called using class name
}

// 💡 Key Point
// Non-static → need object
// Static → no object needed
// 🔥 Final Interview Line

// It is not always necessary to create objects. Objects are required to access non-static members, but static members can be accessed directly using the class name without creating an object.
