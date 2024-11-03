#include<iostream>
using namespace std;
class hero{
    private:
    int health;
    public:
    char level;
    hero(){
        cout<<"simple constructor is called:"<<endl;
    }
    
    hero(int health){
        cout<<"this ->"<<this<<endl;
      this->  health=health;
    }
    hero(int health,char level){
        this->  level=level;
        this->  health=health;
    }
     hero(hero& temp){
         cout<<"constructor is called:"<<endl;
        this->health = temp.health;
        this->level = temp.level;
     }
    void print(){
        cout<<"health  "<< this-> health<<endl;
        cout<<"level  "<< this -> level<<endl;
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
   hero suresh;
   suresh.sethealth(10);
   suresh.setlevel('S');
   suresh.print();

   // copy constructor called
   hero p(suresh);
   p.print();

    return 0;
}