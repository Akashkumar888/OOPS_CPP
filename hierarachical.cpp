#include<iostream>
using namespace std;
class Parent1{
    public:
    Parent1(){
       cout<<"Parent1 class"<<endl;
    }
};
class  Parent2: public Parent1{
    public:
    Parent2(){
        cout<<"Parent2 class"<<endl;
    }
};
class child1:  public Parent2{
public:
child1(){
    cout<<"Child1 class"<<endl;
}
};
class child2: public child1{
public:
child2(){
    cout<<"Child2 class"<<endl;
}
};
class child3: public child2{
public:
child3(){
    cout<<"Child3 class"<<endl;
}
};
class Grandchild: public child3{
    public:
Grandchild(){
    cout<<"Grandchild"<<endl;
}
};
int main(){
    Grandchild gc;
    
    return 0;
}