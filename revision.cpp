#include<iostream>
using namespace std;
void printarr(int arr[],int size){
for(int i=0;i<size;i++)
{
    cout<<arr[i]<<" ";
}cout<<endl;
}

void swapalt(int arr[],int n){
    int i=0;
    while(i<n){
        if(i+1<n){
        swap(arr[i],arr[i+1]);}
        i+=2;
    }
    // return 0;
    
}
int main(){
    int arr[6]={1,2,3,4,5,6};
    swapalt(arr,6);
   printarr(arr,6);
//    return 0;
}
int i=0;
for(int j=i+1;j<n;j++){
   if(arr[i]==arr[j]) {
    return j;
   }
}