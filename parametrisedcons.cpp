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
     hero(int hero){
        cout<<"this -> "<<this<<endl;
        this->health=health;
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
    
    // static allocate
    hero ramesh(87);
    cout<<"Address of ramesh : "<<&ramesh<<endl;
    ramesh.gethealth();
    // dynamic allocate
    hero *h = new hero;
    return 0;
}