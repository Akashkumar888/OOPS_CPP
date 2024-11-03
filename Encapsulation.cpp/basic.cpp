#include<iostream>
using namespace std;
class student{
    private:
    string name[10];
    int age;
    int height;
    public:
    int getage(){
        return this->age;
    }
};
int main(){
student first;
cout<<"Hello world!";
    return 0;
}