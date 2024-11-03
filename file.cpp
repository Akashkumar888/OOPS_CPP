#include<iostream>
#include<fstream>
using namespace std;
int main(){
ofstream onfile;
onfile.open("C:\\Users\\91799\\Desktop\\qwerty.txt");
cout<<"file created";
onfile.close();
    return 0;
}