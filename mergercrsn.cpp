#include<iostream>
using namespace std;
void merge(int *arr,int s,int e){
    int mid=s+(e-s)/2;
    int len1=mid-s+1;
    int len2=e-mid;
    int *first=new int[len1];
    int *second=new int[len2];
    // do new arrays me aadhi aadhi mainarray ki value copy kr re h
    int mainarrayindex=s;
    for(int i=0;i<len1;i++){
        first[i]=arr[mainarrayindex++];
    }
    mainarrayindex=mid+1;
    for(int i=0;i<len2;i++){
        second[i]=arr[mainarrayindex++];
    }

    //merge two sorted arrays
    int index1=0;
    int index2=0;
    mainarrayindex=s;
    while(index1<len1&&index2<len2){
if(first[index1]<second[index2]){
arr[mainarrayindex++]=first[index1++];}
else{
arr[mainarrayindex++]=second[index2++];}
    }
    while(index1<len1){
        arr[mainarrayindex++]=first[index1++];
    }
    while(index2<len2){
        arr[mainarrayindex++]=second[index2++];
    }
    delete[]first;
    delete []second;

}
void mergesort(int *arr,int s,int e){
    if(s>=e){
        return ;
    }
int mid=s+(e-s)/2;

//left part sort
mergesort(arr,s,mid);
//right part sort
mergesort(arr,mid+1,e);

//merge arr
merge(arr,s,e);
}
int main(){
    int arr[7]={9,11,7,3,1,2,21};
    int n=7;
    mergesort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}