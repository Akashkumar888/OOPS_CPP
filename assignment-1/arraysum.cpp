#include<iostream>
using namespace std;
int main(){
    int n,sum=0,i,j,temp;
    cout<<"Enter the size : ";
    cin>>n;
    int a[n];
    cout<<"Enter the element of array :"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for( i=0;i<n;i++){
        sum=sum+a[i];
    }
    cout<<"Sum of array element :"<<sum<<endl;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){
              temp=a[i];
              a[i]=a[j];
              a[j]=temp;
            }
        }
    }
for(i=0;i<n;i++){
    cout<<a[i]<<endl;
}
cout<<endl;
for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]<a[j]){
              temp=a[i];
              a[i]=a[j];
              a[j]=temp;
            }
        }
    }
for(i=0;i<n;i++){
    cout<<a[i]<<endl;
}
    return 0;
}