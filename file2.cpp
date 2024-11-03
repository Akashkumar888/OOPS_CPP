#include<iostream>
#include<fstream>
using namespace std;
int main(){
ifstream infile;
string s;
infile.open("C:\\Users\\91799\\Desktop\\qwerty.txt");
while(getline(infile,s)){
    cout<<s;

}
infile.close();
    return 0;
}