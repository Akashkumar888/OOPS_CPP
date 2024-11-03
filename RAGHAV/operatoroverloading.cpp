
#include<iostream>
using namespace std;
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

class Fraction{
  public:
  int num;
  int den;

Fraction(int num,int den){
  this->num=num;
  this->den=den;
   simplify();  // Simplify the fraction during construction
}

void simplify() {
        int divisor = gcd(num, den);
        num /= divisor;
        den /= divisor;
        if (den < 0) {  // Ensure denominator is always positive
            num = -num;
            den = -den;
        }
    }
void display(){
  cout<<num<<"/"<<den<<endl;
}
Fraction operator+(Fraction f){
        int new_num = num * f.den + f.num * den;  // 'this' object is left operand, 'f' is right operand
        int new_den = den * f.den;
        return Fraction(new_num, new_den);
    }
    Fraction operator-(Fraction f){
        int new_num = num * f.den - f.num * den;  // 'this' object is left operand, 'f' is right operand
        int new_den = den * f.den;
        return Fraction(new_num, new_den);
    }
    Fraction operator*(Fraction f){
        int new_num = num * f.num ;  // 'this' object is left operand, 'f' is right operand
        int new_den = den * f.den;
        return Fraction(new_num, new_den);
    }
    Fraction operator/(Fraction f){
        int new_num = num * f.den ;  // 'this' object is left operand, 'f' is right operand
        int new_den = den * f.num;
        return Fraction(new_num, new_den);
    }
};
int main()
{
  Fraction f1(1,2);
  Fraction f2(1,4);
  f1.display();
  f2.display();
   // Adding f1 and f2 and storing the result in f3
    Fraction f3 = f1 + f2;

    // Displaying the result
    f3.display();
    Fraction f4 = f1 - f2;
    f4.display();
    Fraction f5 = f1 * f2;
    f5.display();
    Fraction f6 = f1 / f2;
    f6.display();
return 0;
}
