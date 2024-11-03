#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array :";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of array :";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[0]==10 ||a[n-1]==10){
            cout<<"true :"<<true;
            break;
        }
        else{
            cout<<"false :"<<false;
            break;
        }
    }
    return 0;
}