#include<iostream>
using namespace std;
inline int akash(int x,int y){ // functin ke name kepahle inline
    return ((x>y)?x:y);
}
int main(){
    int a,b;
    cout<<"Enter the values: ";
    cin>>a>>b;
    cout<<"Greater : "<<akash(a,b);
    return 0;
}