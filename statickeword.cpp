#include<iostream>
#include<string.h>
using namespace std;
class hero{
    private:
    int health;
    public:
    char *name;
    char level;
    static int timetocomplete;
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
        char *ch=new char[strlen(temp.name)]; // deep copy
        strcpy(ch,temp.name);
        this->name=ch;
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
    // destructor
    ~hero(){
        cout<<"Destructor called:"<<endl;;
    }
};
int hero::timetocomplete=7;
int main(){
cout<<hero::timetocomplete<<endl;
    return 0;
}