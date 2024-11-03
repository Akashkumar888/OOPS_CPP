#include<iostream>
using namespace std;
class Parent{
public:
int x;
protected:
int y;
private:
int z;
};
class Child1: public Parent{
//x will remain public
//y will remain protected
//z will remain accessible
};
class child2: private Parent{
    // x will private
    //y will private
    // z will accessible
};
class Child3: protected Parent{
//x will protected
// y will protected
// z will accessible
};

int main(){
    Parent p;
    p.x;
    return 0;
}