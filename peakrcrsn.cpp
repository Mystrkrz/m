#include<iostream>
using namespace std;
int peak(int arr[],int s,int e){
if(s>=e)
return s;

int mid=s+(e-s)/2;
if(arr[mid]<arr[mid+1])
{
return peak(arr,mid+1,e);
}
else{
return peak(arr,s,mid);
}
}
int main(){
    int arr[6]={3,4,5,4,3,1};
    int size=6;
    cout<<peak(arr,0,5);
    return 0;

}