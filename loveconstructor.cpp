#include<iostream>
using namespace std;
class hero{
    private:
    int health;
    public:
    char level;
    hero(){
        cout<<"Constructor is called:"<<endl;
    }
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
    cout<<"Hii"<<endl;
    hero ramesh;
    cout<<"Hello"<<endl;
    return 0;
}