#include<iostream>
using namespace std;
class human{
    public:
    int height;
    int weight;
    int age;
    int getage(){
        return this->age;
    }
   void setweight(int w){
        this-> weight =w;
    }
};
class male : public human{
public:
string color;
void sleep(){
    cout<<"Man is sleeping"<<endl;
}
};
int main(){
male obgect1;
cout<<obgect1.age<<endl;
cout<<obgect1.weight<<endl;
cout<<obgect1.height<<endl;
cout<<obgect1.color<<endl;
obgect1.sleep();
obgect1.setweight(78);
cout<<obgect1.weight<<endl;
    return 0;
}