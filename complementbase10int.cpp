#include<iostream>
using namespace std;
int main(){
   int n;
   cin>>n;
   int m=n;
   int mask=0;
   while(m){
    mask=(mask<<1)|1;
    m=m>>1;
   }
   int res=(~n)&mask;
}