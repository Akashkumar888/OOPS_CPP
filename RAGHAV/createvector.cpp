#include<iostream>
using namespace std;
class Vector{
public:
int size;
int capacity;
int *arr;
// first default constructor call hota hai vaiable kaha se suru hona hai value de do leetcoe pr hamesha default constructor diya rahta ahi  

Vector(){
size=0;
capacity=1;
arr=new int[1];
}
void push(int ele){
  if(size==capacity){
   capacity*=2;
   int *arr2=new int[capacity];
   for(int i=0;i<size;i++){
    arr2[i]=arr[i];
   }
  delete[] arr;
   arr=arr2;
  }
  arr[size++]=ele;

}
void pop(){
  if(size>0){
size--;
  }
}
int get(int idx){
  if(idx>=0 && idx<size){
  return arr[idx];
  }
  return -1;
}

void print(){
  for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}

};
int main()
{
  Vector v;
  cout<<v.size<<" "<<v.capacity<<endl;
  v.push(10);
  v.print();
  cout<<v.size<<" "<<v.capacity<<endl;
  v.push(30);
  v.print();
  cout<<v.size<<" "<<v.capacity<<endl;
  v.push(60);
  v.print();
  cout<<v.size<<" "<<v.capacity<<endl;
  cout<<v.get(2)<<endl;
  v.push(70);
  v.print();
  cout<<v.size<<" "<<v.capacity<<endl;
  cout<<v.get(1)<<endl;
  v.pop();
  v.print();
  cout<<v.size<<" "<<v.capacity<<endl;
  cout<<v.get(0)<<endl;
return 0;
}

