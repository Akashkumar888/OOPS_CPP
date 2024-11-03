
#include<iostream>
using namespace std;
class Loading{
public:

void sum(string s1,string s2){
  cout<<s1+" "+s2<<endl;
}
void sum(int a,int b){
  cout<<a+b<<endl;
}
void sum(int a,int b,int c){
  cout<<a+b+c<<endl;
}

};
int main()
{
  Loading l;
  l.sum(3,4);
  l.sum(5,6,7);
  l.sum("Akash","Kumar");

return 0;
}