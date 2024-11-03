#include<iostream>
using namespace std;
class love{
    public:
int rollnumber;
string name[100];
char grade;
};

int main(){
love h1;
h1.rollnumber=2201216;
h1.name[10]="Akashkumar";
h1.grade='A';
cout<<"rollnumber:"<<h1.rollnumber<<endl;
cout<<"name:"<<h1.name[10]<<endl;
cout<<"grade:"<<h1.grade<<endl;
return 0;
}