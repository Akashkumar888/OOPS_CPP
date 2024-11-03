#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the a :";
    cin>>a;
    cout<<"Enter the b :";
    cin>>b;
    if(a%7==b%7 && a!=b){
        int min=(a<b)?a:b;
        cout<<"smallest :"<<min<<endl;
    }
    else if(a==b){
     cout<<"0"<<endl;
    }
    return 0;
}