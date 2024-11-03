#include<iostream>
using namespace std;
class Shape {
public:
    virtual void draw() {
        cout << "Shape drawing" << endl;
    }
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Circle drawing" << endl;
    }
};

int main(){
    Shape *s;
    Circle c;
    s=&c;
    s->draw();
    return 0;
}