#include<iostream>
using namespace std;
int num(const int x){ // const means here a function should not modify the argumment
// x++;
    return x;
}
int main(){
    cout<<num(6);
    return 0;
}