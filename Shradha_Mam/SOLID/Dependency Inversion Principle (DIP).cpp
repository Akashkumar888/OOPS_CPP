
// DIP Rule:
// High-level modules should depend on abstractions
// Low-level modules should also depend on abstractions, not concrete classes
// ✅ Example: Payment System (Interview-Friendly)

// Without DIP (Bad Design):
// High-level module depends on low-level class — BAD
class PaypalPayment {
public:
    void pay() { cout << "Paid using PayPal\n"; }
};

class Order {
public:
    void process() {
        PaypalPayment p;
        p.pay();
    }
};



// ✅ With DIP (Good Design)
// Step 1: Create an abstraction
#include <iostream>
using namespace std;

class IPayment {                  // Abstraction
public:
    virtual void pay() = 0;
    virtual ~IPayment() {}
};

// Step 2: Low-level classes depend on abstraction
class PaypalPayment : public IPayment {
public:
    void pay() override {
        cout << "Paid using PayPal\n";
    }
};

class RazorpayPayment : public IPayment {
public:
    void pay() override {
        cout << "Paid using Razorpay\n";
    }
};

// Step 3: High-level module also depends on abstraction
class Order {
    IPayment* payment;
public:
    Order(IPayment* p) : payment(p) {}   // Inject dependency

    void process() {
        payment->pay();
    }
};


int main() {
    IPayment* p1 = new PaypalPayment();
    Order o1(p1);
    o1.process();

    IPayment* p2 = new RazorpayPayment();
    Order o2(p2);
    o2.process();

    delete p1;
    delete p2;

    return 0;
}

// ✅ How to explain in interview (10 seconds)

// “In DIP, high-level and low-level modules both depend on abstractions.
// In this example, Order depends on the IPayment interface instead of PaypalPayment or RazorpayPayment.
// This makes the system flexible — I can add new payment methods without changing the main code.”