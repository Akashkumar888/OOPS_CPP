#include<iostream>
using namespace std;
class Parent{
    public:
    Parent(){
       cout<<"Parent class"<<endl;
    }
};
class child: public Parent{
    public:
    child(){
        cout<<"Child class"<<endl;
    }
};
class Grandchild: public child{
    public:
Grandchild(){
    cout<<"Grandchild"<<endl;
}
};
int main(){
    Grandchild gc;
    
    return 0;
}