#include<iostream>
using namespace std;
class a{
    public:
    void sayhello(){
        cout<<"Hello Akash kumar"<<endl;
    }
    void sayhello(string name){ // function overloading
        cout<<"Hello world"<< name <<endl;
    }
};
int main(){
    a object;
    object.sayhello();

    return 0;
}