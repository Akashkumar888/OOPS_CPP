#include<iostream>
using namespace std;
int main(){

    int n,sum=0,largest,smallest;
    cout<<"Enter the size of array :";
    cin>>n;
    int a[n];
    cout<<"Enter the array element :";
    for(int i=0;i<n;i++){
    cin>>a[i];
    }
    for(int i=0;i<n;i++){
    sum=sum+a[i];
    if(i==0){
        largest=smallest=a[i];
    }
    else if(a[i]>largest){
        largest=a[i];
    }
    else if(a[i]<smallest){
        smallest=a[i];
    }
    }
    cout<<"sum :"<<sum<<endl;
    cout<<"smallest :"<<smallest<<endl;
    cout<<"largest :"<<largest<<endl;
    return 0;
}