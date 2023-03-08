#include<iostream>
using namespace std;
int main(){
    char ch[20];
    cout<<"enter your name: "<<endl;
    cin>>ch;
    ch[2]='\0';
    // ch[5]='\0';
    cout<<ch<<endl;
    string str;
    cin>>str;
    str[2]='\0';
    // str[5]='\0';
    cout<<str;
}