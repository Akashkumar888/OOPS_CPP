#include<iostream>
using namespace std;
class hero{
    private:
    int health;
    public:
    char level;
    int gethealth(){
        return health;
    }
    char getlevel(){
        return level;
    }
    void sethealth( int h){
        health=h;
    }
    void setlevel( char ch){
       level=ch;
    }
};
int main(){
    hero ramesh;
    ramesh.sethealth(70);
    ramesh.setlevel('A');
    cout<<"size of Ramesh :"<<sizeof(ramesh)<<endl;
    cout<<"size :"<<ramesh.gethealth()<<endl;
    cout<<"size :"<<ramesh.getlevel()<<endl;
    return 0;
}