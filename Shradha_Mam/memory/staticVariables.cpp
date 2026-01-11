
// #include<bits/stdc++.h>
// using namespace std;
// void fun() {
//     int x = 0;      // local variable
//     cout << "x: " << x << endl;
//     x++;
// }
// x is a local variable.
// Every time fun() is called:
// x is created (initialized to 0),
// printed,
// incremented,
// then destroyed when the function ends.
// int main()
// {
// fun();
// fun();
// fun();
// return 0;
// }






#include<bits/stdc++.h>
using namespace std;
void fun(){
  static int x=0; // // static → initialized only once, initialize statement run 1 time 
  cout<<"x: "<<x<<endl;
  x++;
}
int main()
{
fun();
fun();
fun();
return 0;
}

// x is a static local variable.
// It is initialized only once (first time the function is called).
// It retains its value between function calls (lifetime = entire program).
