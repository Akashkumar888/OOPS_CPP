
// Explanation:
// Report only generates the report.
// ReportPrinter only handles printing.
// Each class has one reason to change.

#include <iostream>
using namespace std;

class Report {
public:
    void generate() {
        cout << "Generating report...\n";
    }
};

class ReportPrinter {
public:
    void print() {
        cout << "Printing report...\n";
    }
};

int main() {
    Report r;
    r.generate();

    ReportPrinter p;
    p.print();
}
