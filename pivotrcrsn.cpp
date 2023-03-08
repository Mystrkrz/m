#include<iostream>
using namespace std;
int pivot(int arr[],int s,int e){
    if(s>=e){
        return s;
    }
    int mid=s+(e-s)/2;
    if(arr[mid]>=arr[0]){
        return pivot(arr,mid+1,e);
    }
    else
    return pivot(arr,s,mid);
}
int main(){
    int arr[6]={9,10,11,18,1,3};
    cout<<pivot(arr,0,4);
}