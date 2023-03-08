#include<iostream>
using namespace std;
void reverse(string &str,int n){
   static int i=0;
    if(i>=n/2)
    return ;
    swap(str[i],str[n-i-1]);
    i++;
    reverse(str,n);
    
}
int main(){
    string str="khan";
    reverse(str,str.length());
    cout<<str<<endl;

}