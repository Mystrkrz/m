#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=0;
    int ans=0;
    while(n){
        int bit=n&1;
        ans=bit*pow(10,i)+ans;
        n=n>>2;
        i++;
    }
    cout<<ans<<endl;
    // int n,i=0,rem[100];
    // cin>>n;
    // while(n){
    //      rem[i]=n%2;
    //     n=n/2;
    //     i++;
    // }
    // for(int j=i-1;j>=0;j--){
    //     cout<<rem[j];
    // }
}



 