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
    // parametrised constructor
    hero(int health){
        cout<<"this ->"<<this<<endl;
      this->  health=health;
    }
    hero(int health,char level){
        this->  level=level;
        this->  health=health;
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
    // stacally called
    hero ramesh(40);
    cout<<"Address of ramesh :  "<<&ramesh<<endl;
     // dynamically called
    hero h= *new hero(40);
    hero temp(25,'A');
    return 0;
}