#include<iostream>
using namespace std;
class count{
private:
char a[30];
public:
void putstring(){
    cout<<"Enter string: ";
    cin.getline(a,30);
}
void count1(){
int i,vowels=0,consonants=0,digits=0,spaces=0,special=0;
for(i=0;a[i];i++){
    if(( a[i]>='a' && a[i]<='z') || (a[i]>='A' && a[i]<='Z')){
        if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' ||a[i]=='A' ||a[i]=='E' ||a[i]=='I' || a[i]=='O'|| a[i]=='U' ){
    vowels++;        
        }
        else{
            consonants++;
        }
    }
    else if(a[i]==' '){
        spaces++;
    }
    else if(a[i]>='0' && a[i]<='9'){
        digits++;
    }else{
        special++;
    }
}
cout<<"vowels: "<<vowels<<endl;
cout<<"consonants: "<<consonants<<endl;
cout<<"Digits: "<<digits<<endl;
cout<<"spaces: "<<spaces<<endl;
cout<<"special character: "<<special<<endl;
}
};
int main(){
    count c;
    c.putstring();
    c.count1();
    return 0;
}