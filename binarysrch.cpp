#include<iostream>
using namespace std;
int binarysrch(int arr[],int n,int key){
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==key){
            return mid;

        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else
        s=mid+1;
        mid=s+(e-s)/2;
    }
    return -1;
}
int main(){
    int arr[6]={2,3,4,6,13,23};
    cout<<binarysrch(arr,6,1);

}