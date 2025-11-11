
// Operator overloading = defining what an operator (like +, <, ==) means for your type.
// Overriding = a subclass replaces a virtual method from a base class.
// “Operator overriding” isn’t a separate feature. In some languages, operator functions are just methods — so a subclass can override an operator method. In others, operators are static and cannot be overridden.
// Language cheat sheet
// C++: ✅ Operator overloading supported. If an operator is a virtual member function, a derived class can override that operator function (rare in practice).
// Python: ✅ Operators are special methods (__add__, __lt__, …). Subclasses can override them — effectively “operator overriding.”
// C#: ✅ Operator overloading supported, but operator methods are static → ❌ cannot be overridden in subclasses.
// Java: ❌ No user-defined operator overloading/overriding (except built-in + for String).
// Kotlin: ✅ Operator functions with operator keyword. If a member is open, a subclass can override it.
// Why people say “operator overriding isn’t available in C++”
// Because in everyday C++, operator overloads are usually non-virtual (free functions or non-virtual members), so you don’t override them polymorphically. But technically, you can make a member operator virtual and override it in a derived class — it’s just uncommon.

// Examples (simple & interview-friendly)
// 1) C++ – overloading vs overriding an operator (yes, you can override if it’s virtual)

#include <iostream>
using namespace std;

class Expr {
public:
    // Virtual operator+: can be overridden by subclasses
    virtual int operator+(const Expr& other) const {
        cout << "Expr::operator+ (base)\n";
        return 0; // default behavior
    }
    virtual ~Expr() = default;
};

class Number : public Expr {
    int value;
public:
    explicit Number(int v) : value(v) {}

    // Overriding the base operator+
    int operator+(const Expr& other) const override {
        auto rhs = dynamic_cast<const Number*>(&other);
        if (rhs) {
            cout << "Number::operator+ (derived)\n";
            return value + rhs->value; // actual addition
        }
        return value; // fallback
    }
};

int main() {
    Number a(5), b(7);
    const Expr& x = a;   // base reference to derived object
    const Expr& y = b;

    // Runtime dispatch: calls Number::operator+ because it's virtual
    int sum = x + y;     // prints "Number::operator+ (derived)"
    cout << "sum = " << sum << "\n";

    return 0;
}

// What this shows
// Overloading: we gave + a meaning for our type (that’s overloading).
// Overriding: because operator+ is virtual in Expr and redefined in Number, the call is resolved at runtime — classic overriding.
// In practice, C++ developers rarely make operators virtual; they prefer non-member/friend overloads and static polymorphism.

// 2) Python – subclasses naturally “override” operator methods
class Animal:
    def __add__(self, other):
        print("Animal.__add__")
        return "group"

class Dog(Animal):
    def __add__(self, other):
        print("Dog.__add__")
        return "pack"

a = Animal()
d = Dog()

print(a + d)   # Animal.__add__  -> "group"
print(d + a)   # Dog.__add__     -> "pack"


// Why this is “operator overriding” in spirit
// In Python, operators are just methods (__add__, __lt__, etc.).
// A subclass redefines them → that’s overriding a method which happens to be used by an operator.
// Quick interview bullets
// Overloading vs Overriding
// Overloading: same operator/method name, different parameter types/arity, resolved at compile time (C++, Java methods).
// Overriding: same signature in subclass, resolved at runtime via dynamic dispatch (C++, Java, Python).
// Operator overloading vs “operator overriding”
// Most languages only talk about operator overloading.
// If a language treats operators as methods (Python, Kotlin members), a subclass can override the operator’s method — effectively “operator overriding”.
// C# operator methods are static → cannot be overridden; you can declare a new overload in the derived type, but it’s not overriding.
// C++ can override virtual member operator functions, but it’s uncommon; the idiomatic approach is non-virtual operator overloads.
// When to use operator overloading
// Use it when it makes code more natural (e.g., BigInt, Complex, Matrix, Rational).
// Keep semantics unsurprising: + should feel like addition, == like equality, etc.
// If you want, I can tailor 1–2 more tiny examples for C# or Kotlin to show why one can’t/can “override” operators there.