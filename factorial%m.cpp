#include<iostream>
#include<math.h>
using namespace std;
int fact(int n){
    int m=pow(10,9)+7;
    int factorial=1;
    while(n>0){
        factorial=((factorial%m)*(n%m))%m;
        n--;
    }
    return factorial;
}
int main(){
    int n;
    cin>>n;
    cout<<fact(n);
}