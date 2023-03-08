#include<iostream>
#include<map>
using namespace std;
int main(){
    int n=6;
    int arr[6]={1,3,2,4,5,6};
    map<int,int>m;
    for(int i=0;i<n;i++){
        m[arr[i]]++;
    }
    for(int i=0;i<n;i++){
        if(m[arr[i]]>1)
        cout<<"boys"<<endl;
        break;
    }
    cout<<"girls"<<endl;
   
}