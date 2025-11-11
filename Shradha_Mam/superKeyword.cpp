
// ✅ What is super keyword? (Java + C++ equivalent)
// ✅ Interview Definition
// super refers to the parent class. It is used to call parent class methods or constructors.

// ✅ Why use super?
// To access parent’s method when overridden
// To call parent constructor
// To access parent variables
// ✅ Java Example (Concept same in C++, but syntax = parent::method)
class Parent {
    Parent() {
        System.out.println("Parent constructor");
    }
    void show() {
        System.out.println("Parent show");
    }
}

class Child extends Parent {
    Child() {
        super();      // calls Parent constructor
    }
    void show() {
        super.show(); // calls Parent's show()
        System.out.println("Child show");
    }
}


// ✅ C++ Version (same meaning — different syntax)
// ✅ In C++, instead of super, we use scope resolution:
class Parent {
public:
    Parent() {
        cout << "Parent constructor" << endl;
    }
    void show() {
        cout << "Parent show" << endl;
    }
};

class Child : public Parent {
public:
    Child() : Parent() {   // calling parent constructor
    }

    void show() {
        Parent::show();    // calls parent's version
        cout << "Child show" << endl;
    }
};
