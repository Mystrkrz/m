#include<iostream>
using namespace std;
int main(){
    int a[100],b[100],n;
    cout<<"enter no."<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i%2!=0){
        if(a==1)
        a=1;
        else
        a=a*2;
        }
        else{
        if(b==1)
        b=1;
        else
        b=b*3;
        }
    }
    if(n%2!=0){
        cout<<(n,a);
    }
    else
    cout<<(n,b);
}