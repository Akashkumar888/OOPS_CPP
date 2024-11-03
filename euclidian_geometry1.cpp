#include <iostream>
#include <cmath>
using namespace std;
double distance(double a, double b, double c, double d) {
    return sqrt(pow(c - a, 2) + pow(d - b, 2));
}
int main() {
    double x1, y1, x2, y2, x3, y3;
    cout << "Enter coordinates of point 1 (x1, y1): ";
    cin >> x1 >> y1;
    
    cout << "Enter coordinates of point 2 (x2, y2): ";
    cin >> x2 >> y2;
    
    cout << "Enter coordinates of point 3 (x3, y3): ";
    cin >> x3 >> y3;
    double side1 = distance(x1, y1, x2, y2);
    double side2 = distance(x2, y2, x3, y3);
    double side3 = distance(x3, y3, x1, y1);
    
    if (side1 + side2 > side3 && side2 + side3 > side1 && side3 + side1 > side2) {
        if (side1 == side2 && side2 == side3 && side1==side3) {
            cout << "Equilateral triangle" << endl;
        } else if (side1 == side2 || side2 == side3 || side3 == side1) {
            cout << "Isosceles triangle" << endl;
        } else {
            cout << "Scalene triangle" << endl;
        }
    } else {
        cout << "Invalid triangle" << endl;
    }
    return 0;
}