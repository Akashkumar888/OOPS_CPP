#include<iostream>
using namespace std;

inline int add(int a,int b){
    return a+b;
}
class inlineclass{
public:

inlineclass(int val): value(val){}

inline int getvalue(){
    return value;
}
private:
int value;
};
int main(){
int num1=5,num2=10;
int sum=add(num1,num2);
cout<<"sum :"<<sum<<endl;
inlineclass obj(42);
cout<<"value from inline class :"<<obj.getvalue()<<endl;
    return 0;
}