#include<iostream>
#include<string.h>
using namespace std;
class hero{
    private:
    int health;
    public:
    char *name;
    char level;
    hero(){
        cout<<"simple constructor is called:"<<endl;
        name=new char[100];
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
        cout<<endl;
        cout<<"[ name:  "<< this->name<<" , ";
        cout<<"health: "<< this-> health<<" , ";
        cout<<"level: "<< this -> level<<"  ]"<<endl;
        cout<<endl;
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
    void setname(char name[]){
        strcpy(this->name , name);
    }
};
int main(){
  hero hero1;
  hero1.sethealth(80);
  hero1.setlevel('A');
  char name[20] = "Akash";
  hero1.setname(name);
 hero1.print();

 // use default copy constructor 



    return 0;
}