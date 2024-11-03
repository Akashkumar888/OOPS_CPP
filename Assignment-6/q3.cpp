#include<iostream>
using namespace std;
class fahrenheit{
public:
float celcius(float c){

//float f;

 return (9*c)/5 +32;

//cout<<"calcius to fahrenheit: "<<f<<endl;

}
};
int main(){
    fahrenheit f;
    int n;
    cout<<"Enter celcius: ";
    cin>>n;
   cout<< f.celcius(n);
    return 0;
}