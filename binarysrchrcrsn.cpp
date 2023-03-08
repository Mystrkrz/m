#include<iostream>
using namespace std;
bool binarysrch(int arr[],int s,int e,int k){
if(s>e){
    return false;
}
int mid=s+(e-s)/2;
if(arr[mid]==k)
return true;
if(arr[mid]<k){
    return binarysrch(arr,mid+1,e,k);
}
else{
    return binarysrch(arr,s,mid-1,k);
}
}
int main(){
    int arr[5]={3,1,5,9,11};
    int size=5;
    int k=8;
    cout<<"present or not "<<binarysrch(arr,0,5,k)<<endl;
    return 0;
}