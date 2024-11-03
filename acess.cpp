#include<iostream>
using namespace std;
class hero{
    public:
    int health;
    char level;
};
int main(){
    hero ramesh;
    ramesh.health=50;
    ramesh.level='A';
    cout<<"size :"<<ramesh.health<<endl;
    cout<<"size :"<<ramesh.level<<endl;
    return 0;
}