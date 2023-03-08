#include<iostream>
using namespace std;
void sortarr(int arr[],int i,int n){
    if(i==n-1)
    return ;
    int minindex=i;
    for(int j=i+1;j<n;j++){
        if(arr[j]<arr[minindex])
        minindex=j;
    }
    swap(arr[i],arr[minindex]);

    //recursive call
    sortarr(arr,i+1,n);
}
int main(){
    int arr[5]={5,9,2,1,7};
    sortarr(arr,0,5);
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
}