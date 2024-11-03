#include<iostream>
using namespace std;
class hero{
    private:
    int health;
    public:
    char level;
    hero (){
        cout<<"Constructor is called";
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
    hero ();
    cout<<endl;
    cout<<"Hii "<<endl;
    // static allocate
    hero ramesh;
        cout<<endl;
    cout<<"Hello world !"<<endl;
    // dynamic allocate
    hero *h = new hero;
    return 0;
}