#include<iostream>
using namespace std;
class animal{
public:
int age;
int weight;
public:
void bark(){
    cout<<"Barking"<<endl;
}
};
class human{
    public:
    string color;
    public:
    void speak(){
    cout<<"Speaking"<<endl;
    }
}; 
// multiple inheritance hybrid
class hybrid:public animal,public human{

};
int main(){
hybrid h;
h.bark();
h.speak();
    return 0;
}