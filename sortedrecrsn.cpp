#include<iostream>
using namespace std;
bool isSorted(int arr[],int n){
    if(n==0 || n==1)
    return true;
        if(arr[0]>arr[1])
        {
            return false;
        }
    else{
   bool remainingpart= isSorted(arr+1,n-1);
   return remainingpart;
}
}
int main(){
    int arr[5]={2,4,6,7,13};
    int size=5;
    bool ans=isSorted(arr,size);
    if(ans){
        cout<<"sorted"<<endl;
    }
    else{
        cout<<"not sorted"<<endl;
    }
    return 0;
}