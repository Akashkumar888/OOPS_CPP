
// #include<bits/stdc++.h>
// using namespace std;
// class A{
//   public:
//   int x;
//   void xInc(){
//     x++;
//   }
// };

// int main()
// {
//  A obj;
//  obj.x=0;
//  cout<<"x: "<<obj.x<<endl;
//  obj.xInc();
//  cout<<"x: "<<obj.x<<endl;
// return 0;
// }




// #include<bits/stdc++.h>
// using namespace std;
// class A{
//   public:
//   int x;
//   void xInc(){
//     x++;
//   }
// };

// int main()
// {
//  A obj1;
//  A obj2;
 
//  obj1.x=100;
//  obj2.x=200;

//  cout<<obj1.x<<endl;
//  cout<<obj2.x<<endl;
// return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// class ABC{
//  public:
//  ABC(){
//   cout<<"Constructor"<<endl;
//  }
//  ~ABC(){
//   cout<<"Destructor"<<endl;
//  }
// };

// int main()
// {
//   if(true){
//     ABC obj1;
//   }
//   cout<<"End of the main function"<<endl;
// return 0;
// }


#include<bits/stdc++.h>
using namespace std;
class ABC{
 public:
 ABC(){
  cout<<"Constructor"<<endl;
 }
 ~ABC(){
  cout<<"Destructor"<<endl;
 }
};

int main()
{
  if(true){
    static ABC obj1;
  }
  cout<<"End of the main function"<<endl;
return 0;
}
