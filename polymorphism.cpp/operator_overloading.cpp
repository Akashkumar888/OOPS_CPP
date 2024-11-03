#include<iostream>
using namespace std;
// class a{
//    public:
//     void sayhello(){
//         cout<<"Akash kumar"<<endl;
//     }
//     int sayhello(char name){
//         cout<<"Akash kumar"<<endl;
//         return 1;
//     }
//     void sayhello(string name){
//     cout<<"Hello"<<name<<endl;
//     }
// };
class B{
    public:
    int a;
    int b;
    public:
    int add(){
    return a+b;
    }
    void operator + (B &obj){
        int value1 =this->a;
        int value2=obj.a;
        cout<<"output: "<<value2 - value1<<endl;
    }
};
int main(){
    B obj1,obj2;
    obj1.a=3;
    obj2.a=7;
    obj1 + obj2;
    return 0;
}