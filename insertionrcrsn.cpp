#include<iostream>
using namespace std;
void sortarr(int arr[],int i,int n){
    if(i==n)
    return ;
    int j=i-1,temp=arr[i];
    while(j>=0&&temp<arr[j]){
if(arr[j]>temp)
{
    arr[j+1]=arr[j];
}
j--;
    }
   arr[j+1]=temp;
   sortarr(arr,i+1,n);
}
int main(){
    int arr[5]={3,7,1,9,5};
    sortarr(arr,1,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}