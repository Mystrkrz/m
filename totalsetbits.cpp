#include<iostream>
using namespace std;
int abits(int a){
    int count=0;
    while(a){
    if(a&1){
        count++;
    }
    a=a>>1;
    }
    return count;

}
int bbits(int b){
    int count=0;
    while(b){
    if(b&1){
        count++;
    }
    b=b>>1;

    }
    return count;
}
int main(){
    int a,b;
    cin>>a>>b;
    int ans1=abits(a);
    int ans2=bbits(b);
    int ans=ans1+ans2;
    cout<<ans<<endl;
    return 0;

}