#include<iostream>
using namespace std;
void swap(int *x,int *y){
    int temp= *x;
    *x = *y;
    *y = temp;
    return;
}
int main(){
    int a,b;
    cout<<"Enter the number a and b:"<<endl;
    cin>>a>>b;
    swap(&a,&b);        //pass by reference
    cout<<"The value of a is :"<<a<<endl;
    cout<<"The value of b is :"<<b<<endl;
    return 0;
}