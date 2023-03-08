#include<iostream>
using namespace std;
bool checkpalindrome(string str,int n){
    static int i=0;
    if(i>=n/2){
        return true;
    }
    if(str[i]!=str[n-i-1])
    return false;
    i++;
    return checkpalindrome(str,n);
}
int main(){
    string str="abac";
    bool result=checkpalindrome(str,str.length());
    cout<<result<<endl;
}