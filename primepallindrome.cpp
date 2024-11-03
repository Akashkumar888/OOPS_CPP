#include<iostream>
using namespace std;

bool prime(int n){
    if(n<2) return false;
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

bool pallindrome(int n){
    int k=n;
    int sum=0;
    while(n>0){
        int rem=n%10;
        sum=10*sum+rem;
        n=n/10;
    }
    if(k==sum) return true;
    else return false;
}
int main(){
    int n;
    cin>>n;
    if(prime(n) && pallindrome(n)) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}