#include<iostream>
using namespace std;
class sum{
    public:
    void add(int x,int y ){
        int sum=x+y;
        cout<<sum<<endl;
    }
    void add(int x,int y,int z){
        int sum=x+y+z;
        cout<<sum<<endl;
    }
    void add(float x,float y){
        float sum=x+y;
        cout<<sum<<endl;
    }
};
int main(){
    sum s;
    s.add(4,6);
    s.add(4,4);
    s.add(float (3.7),float (5.3));
    return 0;
}