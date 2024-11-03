#include<iostream>
using namespace std;
class a{
    public:
    void fun(){
        cout<<"I am A "<<endl;
    }
};

class b {
    public:
    void fun(){
        cout<<"I am B "<<endl;
    }
};
class c : public a,public b{


};
int main(){
c object;
object.a::fun();
object.b::fun();
    return 0;
}