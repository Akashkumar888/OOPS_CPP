#include<iostream>
using namespace std;
int fun(int = 0,int = 0); // function prototype or declaration 
int main(){
    cout<<fun(5);
    return 0;
}
int fun(int x,int y){
    return (x+y);
}