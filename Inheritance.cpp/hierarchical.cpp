#include<iostream>
using namespace std;
class a{
    public:
    void fun1(){
        cout<<"Inside function 1"<<endl;
    }
};
class b: public a{
    public:
    void fun2(){
        cout<<"Inside function 2"<<endl;
    }
};
class c: public a{
     public:
    void fun3(){
        cout<<"Inside function 3"<<endl;
    }
};
int main(){
a object1;
object1.fun1();

b object2;
object2.fun1();
object2.fun2();

c object3;
object3.fun1();
object3.fun3();
    return 0;
}