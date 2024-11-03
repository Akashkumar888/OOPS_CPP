#include<iostream>
using namespace std;
int main(){
    int x=10;
    int *ptr=&x;
    cout<< *ptr + 5**ptr -2**ptr;
    return 0;
}