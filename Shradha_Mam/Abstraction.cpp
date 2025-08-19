
#include<bits/stdc++.h>
using namespace std;

// Abstract class
class Shape{
 virtual void draw()=0; // pure virtual function
};

class Circle:public Shape{
public:
  void draw(){
    cout<<"Drawing a circle"<<endl;
  }
};

int main()
{
  Circle c1;
  c1.draw();
return 0;
}

