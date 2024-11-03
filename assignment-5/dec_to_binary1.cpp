#include<iostream>
using namespace std;
void decTobinary(int n){
for(int i=n-1;i>=0;i--){
    int k=n>>i;
    if(k&1) cout<<"1";
    else cout<<"0";
}
}
int main(){
    int m;
    cout<<"Enter m:";
    cin>>m;
    decTobinary(m);
    return 0;
}