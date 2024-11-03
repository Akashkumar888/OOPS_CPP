#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int i=0;i<=2*n-1;i++){
       for(int j=1;j<=2*n-1;j++){
        int minvalue=min(i,j);
        minvalue=min(minvalue,2*n-i);
        minvalue=min(minvalue,2*n-j);
        cout<<6-minvalue;
       }
       cout<<endl;
    }
    return 0;
}