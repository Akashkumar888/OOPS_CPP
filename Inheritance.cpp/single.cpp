#include<iostream>
using namespace std;
class animal{
public:
int age;
int weight;
public:
void speak(){
    cout<<"Speaking"<<endl;
}
};
class dog: public animal{

};
int main(){
dog d;
d.speak();
cout<<d.age<<endl;
cout<<d.weight<<endl;
    return 0;
}