#include<iostream>
using namespace std;
class triangle{
public:
void check(int x,int y,int z){
    if(x==y && y==z && x==z){
        cout<<"Equilateral triangle";
    }
    else if(x==y || y==z || x==z) cout<<"Isosceles triangle";
    else cout<<"Scalene triangle";
}
};
int main(){
    int side1,side2,side3;
    cin>>side1>>side2>>side3;
    triangle t;
    t.check(side1,side2,side3);
    return 0;
}