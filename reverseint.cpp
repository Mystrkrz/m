#include<iostream>
using namespace std;
int main(){
    int n,ans=0;
    cin>>n;
    while(n){
       int digit=n%10;
        ans=(ans*10)+digit;  
        n=n/10; 
         }
        
}