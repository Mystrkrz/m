#include<iostream>
using namespace std;
bool checkpalindrome(string str,int i,int j){
    if(i>j){
        return true;
    }

    if(str[i]!=str[j]){
        return false;
    }
    else
    //recursive call
    return checkpalindrome(str,i+1,j-1);
}
int main(){
    string name="abcba";
    bool ispalindrome=checkpalindrome(name,0,name.length()-1);
    if(ispalindrome){
        cout<<"its a palindrome"<<endl;
    }
    else{
        cout<<"its not a palindrome"<<endl;
    }
}