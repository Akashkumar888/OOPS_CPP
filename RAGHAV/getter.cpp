

#include<iostream>
using namespace std;
class Student{
  public:
  int roll_no;
  string name;
 // default constructor 
  Student(){

  }
  
  Student(int r,string n,float m){

    roll_no=r;
    name=n;
    marks=m;

  }

  float getMarks(){ // this is called getter function by using we can print data only 
    return marks;
  }

  private:
  float marks;
  // private attribute can be accessible within the class 
  
};

int main()
{
  Student s1(216,"Akash kumar",98.9);
  Student s2(26,"Priya yadav",99.2);
  Student s3 (126,"Preeti yadav",97.4);
  cout<<s1.getMarks()<<endl;
  cout<<s2.getMarks()<<endl;
  cout<<s3.getMarks()<<endl;
  
 
return 0;
}
