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
                         //static allocation
    hero a;
    a.setlevel('A');
    a.sethealth(60);
    cout<<"size :"<<a.level<<endl;
    cout<<"size :"<<a.gethealth()<<endl;
    cout<<endl;
                         //dynamic allocation
    hero *b = new hero;
    b->setlevel('D');
    b->sethealth(90);
    cout<<"size :"<<(*b).level<<endl;
    cout<<"size :"<<(*b).gethealth()<<endl;

    cout<<endl;

    cout<<"size :"<<b->level<<endl;
    cout<<"size :"<<b->gethealth()<<endl;
    return 0;
}