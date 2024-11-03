#include<iostream>
using namespace std;
void swap(int &m , int &n){
    m=m+n;
    n=m-n;
    m=m-n;
}
int main(){
    int a,b;
    cout<<"Enter a:";
    cin>>a;
    cout<<"Enter b:";
    cin>>b;
    cout<<a<<" "<<b<<endl;
    swap(a,b);
    cout<<a<<" "<<b<<endl;
    return 0;
}