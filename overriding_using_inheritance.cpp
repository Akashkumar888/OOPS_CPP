#include<iostream>
using namespace std;
class animal{
public:
virtual void dog(){
    cout<<"Dog is barking"<<endl;
}
};
// inheritance here
class bird : public animal{
public:
// overrding a function is double time
void dog() override{
    cout<<"Bird is flying"<<endl;
}
};
int main(){
  bird obj;
  obj.dog();

animal *animalptr=&obj;
animalptr->dog();

    return 0;
}