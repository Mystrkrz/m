#include<iostream>
using namespace std;
void sort(int arr[],int n){
    if(n==0||n==1)
    return ;
    //ek case solve kro 
   for(int i=0;i<n;i++){
    if(arr[i]>arr[i+1])
    swap(arr[i],arr[i+1]);
   }
   //baaki rcrsn
   sort(arr,n-1);


}
int main(){
    int arr[5]={2,5,1,6,9};
    sort(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}