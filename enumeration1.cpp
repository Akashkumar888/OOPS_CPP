#include<iostream>
using namespace std;
enum Days {
    Sunday,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
};
int main(){
    for(int i=Sunday;i<=Saturday;i++){
        cout<<i<<" ";
    }
    return 0;
}