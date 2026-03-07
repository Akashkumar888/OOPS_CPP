
#include <iostream>
using namespace std;

class A{
public:
    int add(int a,int b){
        return a+b;
    }
    double add(double a,double b){
        return a+b;
    }
    int add(int a,int b,int c){
        return a+b+c;
    }
};

// Method overloading IS possible in C++
// Overloading depends on:
// Number of parameters
// Type of parameters

int main() {
    A a;
    cout << a.add(2,3) << endl;
    cout << a.add(2.5,18.5) << endl;
    cout << a.add(4,5,6) << endl;
    return 0;
}




#include <iostream>
using namespace std;

class MathOp {
public:
    int add(int a, int b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }
};

int main() {
    MathOp m;

    cout << m.add(2, 3) << endl;       // calls add(int, int)
    cout << m.add(2, 3, 4) << endl;    // calls add(int, int, int)

    return 0;
}
