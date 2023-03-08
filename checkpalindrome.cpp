#include<iostream>
using namespace std;
char tolowercase(char ch){
    if(ch>='a'&&ch<='z'||ch>=0&&ch<=9)
    {
        return ch;
    }
    else
    return ch-'A'+'a';
}
bool checkpalindrome(char a[],int n)
{
    int s=0,e=n-1;
    while(s<=e){
        if(tolowercase(a[s])!=tolowercase(a[e]))
        {
            return 0;
        }
        else{
        s++;
        e--;}
    }
    return 1;

}
int getlength(char na[]){
    int count=0;
    for(int i=0;na[i]!='\0';i++)
    {
        count++;
    }
    return count;
}
int main(){

char name[20];
cin>>name;
int len=getlength(name);
cout<<checkpalindrome( name,len)<<endl;
    // char name[20];
    // cin>>name;
    // cout<<name<<endl;
    // char str[5]={'a','b','c','\0','d'};
    // cout<<str<<endl;
}