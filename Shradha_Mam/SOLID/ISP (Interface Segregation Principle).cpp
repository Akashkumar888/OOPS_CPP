
// Explanation:
// Separate small interfaces → classes only implement what they need.

#include <iostream>
using namespace std;

class Printable {
public:
    virtual void print() = 0;
    virtual ~Printable() {}
};

class Scannable {
public:
    virtual void scan() = 0;
    virtual ~Scannable() {}
};

class Printer : public Printable {
public:
    void print() override {
        cout << "Printing document...\n";
    }
};

class Scanner : public Scannable {
public:
    void scan() override {
        cout << "Scanning document...\n";
    }
};

class MultiFunctionMachine : public Printable, public Scannable {
public:
    void print() override { cout << "MFM printing...\n"; }
    void scan() override { cout << "MFM scanning...\n"; }
};

int main() {
    Printer p;
    p.print();

    Scanner s;
    s.scan();

    MultiFunctionMachine m;
    m.print();
    m.scan();
}
