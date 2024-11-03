#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no of students:";
    cin>>n;
    int arr[n];
    float sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
   float per=sum/n;
    cout<<"percentage: "<<per<<endl;
    return 0;
}