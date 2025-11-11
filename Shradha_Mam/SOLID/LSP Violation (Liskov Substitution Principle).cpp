
// Explanation:
// Square breaks the behavior expected from Rectangle.
// Substituting Square where Rectangle is expected changes program behavior → violates LSP.

#include <iostream>
using namespace std;

class Rectangle {
protected:
    int width, height;
public:
    virtual void setWidth(int w) { width = w; }
    virtual void setHeight(int h) { height = h; }

    int getArea() const { return width * height; }
};

class Square : public Rectangle {    // LSP violation
public:
    void setWidth(int w) override {
        width = height = w;          // changes expected behavior
    }
    void setHeight(int h) override {
        width = height = h;          // changes expected behavior
    }
};

int main() {
    Rectangle* r = new Square();     // substituting → behavior breaks
    r->setWidth(4);
    r->setHeight(5);

    cout << "Area: " << r->getArea();  // Expected 20, but gets 25
    delete r;
}
