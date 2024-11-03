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
class cat:public dog{

};
int main(){
cat c;
c.speak();
    return 0;
}