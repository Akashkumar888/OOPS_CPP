#include<iostream>
using namespace std;
int fun(int,int); // function declaration or function prototype
int main(){
cout<<fun(5,8); // function calling
return 0;
}
int fun(int x,int y){ // function definition
    return (x+y);
}