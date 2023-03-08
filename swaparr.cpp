#include<iostream>
using namespace std;
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void swapalt(int arr[],int n){
    for(int i=0;i<n;i+=2){
        if(i+1<n){
            swap(arr[i],arr[i+1]);
        }
    }
}
int main(){
    int even[6]={2,3,4,5,6,7};
    swapalt(even,6);
    print(even,6);
     int odd[5]={2,3,4,5,7};
    swapalt(odd,5);
    print(odd,5);
}