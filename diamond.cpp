#include<iostream>
using namespace std;
class Parent{
    public:
    Parent(){
       cout<<"Parent class"<<endl;
    }
};

class child1:  public Parent{
public:
child1(){
    cout<<"Child1 class"<<endl;
}
};
class child2: public Parent{
public:
child2(){
    cout<<"Child2 class"<<endl;
}
};
class Grandchild: public child1,public child2{
    public:
Grandchild(){
    cout<<"Grandchild"<<endl;
}
};
int main(){
    Grandchild gc;
    
    return 0;
}