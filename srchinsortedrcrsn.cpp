#include<iostream>
using namespace std;
int binarysrch(int arr[],int s,int e,int k){
    if(s>e){
        return s;
    }
    int mid=s+(e-s)/2;
    if(arr[mid]==k){
        return mid;
    }
    if(arr[mid]<k)
    return binarysrch(arr,mid+1,e,k);
    else
    return binarysrch(arr,s,mid-1,k);
}
int pivot(int arr[],int s,int e){
    if(s>=e){
        return s;
    }
    int mid=s+(e-s)/2;
    if(arr[mid]>=arr[0]){
        return pivot(arr,mid+1,e);
    }
    else
    return pivot(arr,s,mid);
}

int main(){
    int arr[5]={7,9,13,2,4};
    int n=5;
    int k=4;
    int p=pivot(arr,0,4);
    cout<<p<<endl;
    if(k>=arr[p]&&k<=arr[n-1])
    {
        return binarysrch(arr,p,n-1,k);
    }
       
    else
    return binarysrch(arr,0,p-1,k);
    return 0;
}