


#include<iostream>
using namespace std;
class Student{
  public:
  int roll_no;
  string name;
 // default constructor 
  Student(){

  }
  
  Student(int r,string n,float m){ // constructor ek time pr ek hi baar call hoga  

    roll_no=r;
    name=n;
    marks=m;

  }

  float getMarks(){ // this is called getter function by using we can print data only 
    return marks;
  }

  float setMarks(float val){ // this is called setter function 
    marks=val;
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
  s1.setMarks(95.4);
  cout<<s1.getMarks()<<endl;
  
return 0;
}
