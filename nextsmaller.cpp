#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }cout<<endl;
    int k=0;
    int temp[n];
    for(int i=0;i<n;i++){
        int min=INT_MAX;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]&&arr[j]<min){
            min=arr[j];
            temp[k++]=min;
            }
            else{
                temp[k++]=-1;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<temp[i]<<" ";
    }
}