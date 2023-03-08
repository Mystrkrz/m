#include<iostream>
using namespace std;
int lastpos(int arr[],int s,int e,int k){
    if(s>e){
        return s;
    }
    int mid=s+(e-s)/2;

    if(arr[mid]==k){
        if(arr[mid]!=arr[mid+1]||mid==e)
         return mid;
         else
        return lastpos(arr,mid+1,e,k);
    }
    if(arr[mid]<k){
        return lastpos(arr,mid+1,e,k);
    }
    else{
        return lastpos(arr,s,mid-1,k);
    }
}
int firstpos(int arr[],int s,int e,int k)
{
    if(s>e)
    return s;
    int mid=s+(e-s)/2;

    if(arr[mid]==k){
         if(arr[mid]!=arr[mid-1]||mid==0)
       return mid;
       else
        return firstpos(arr,s,mid-1,k);
    }
    if(arr[mid]<k){
        return firstpos(arr,mid+1,e,k);
    }
    else{
        return firstpos(arr,s,mid-1,k);
    }
    


}
int main(){
    int arr[8]={1,3,3,3,7,9,9,9};
    int size=8;
    int k=3;
    cout<<firstpos(arr,0,7,k)<<endl;
    cout<<lastpos(arr,0,7,k)<<endl;
    return 0;

}