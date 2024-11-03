#include<iostream>
#include<fstream>
using namespace std;
int main(){
ofstream onfile;
onfile.open("C:\\Users\\91799\\Desktop\\qwerty.txt");
onfile<<"Thank you so much i love you";
cout<<"Data has been written";
onfile.close();
    return 0;
}