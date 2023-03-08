#include<iostream>
using namespace std;
void sort(int arr[],int i,int n){
    if(i==n)
    return ;
    int j=i-1,temp=arr[i];
    while(j>=0&&arr[j]>temp)
    {
        if(arr[j]>temp)
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=temp;
    sort(arr,i+1,n);
}
int main(){
    int arr[5]={2,9,1,6,7};
    sort(arr,1,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}