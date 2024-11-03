#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array :";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[0]==10 || a[n-1]){
            cout<<"true :"<<true<<endl;
            break;
        }
        else{
            cout<<"false :"<<false<<endl;
        }
    }
    return 0;
}