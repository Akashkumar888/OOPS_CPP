#include<iostream>
 // #include<conio.h> 
using namespace std;
int main(){
    char str[100];
    int i;
    int alp=0,num=0,special=0,space=0;
    cout<<"Enter the string :"<<endl;
    gets(str);
    for(int i=0;str[i]!='\0';i++){
        if( (str[i]>='A' && str[i]<='Z') || (str[i])>='a' && (str[i])<='z'){
            alp++;
        }
        else if(str[i]>='0' && str[i]<='9'){
            num++;
        }
        else if(str[i]==' '){
            space++;
        }
        else{
            special++;
        }
    }
    cout<<"Alphabet letters: "<<alp<<endl;
    cout<<"numbers : "<<num<<endl;
    cout<<"space : "<<space<<endl;
    cout<<"Special character :"<<special<<endl;
     // getch();
    return 0;
}