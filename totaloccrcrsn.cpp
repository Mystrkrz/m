#include<iostream>
using namespace std;
int lastocc(int arr[],int s,int e,int k){
    if(s>e){
        return s;
    }
    int mid=s+(e-s)/2;
    if(arr[mid]==k){
        if(arr[mid]!=arr[mid+1]||mid==0){
            return mid;
        }
        else
        return lastocc(arr,mid+1,e,k);
    }
    if(arr[mid]<k)
    return lastocc(arr,mid+1,e,k);
    else
    return lastocc(arr,s,mid-1,k);
}
int firstocc(int arr[],int s,int e,int k)
{
    if(s>e){
        return s;
    }
    int mid=s+(e-s)/2;

    if(arr[mid]==k){
        if(arr[mid]!=arr[mid-1]||mid==0)
        {
return mid;
        }
        else
        return firstocc(arr,s,mid-1,k);
    }
    if(arr[mid]<k){
        return firstocc(arr,mid+1,e,k);
    }
    else
    return firstocc(arr,s,mid-1,k);
}
void totalocc(void){
    // return ;
}
int main(){
    int arr[7]={3,5,5,7,7,9,11};
    int size=5;
    int k=7;
    int m=firstocc(arr,0,6,k);
    cout<<m<<endl;
    int n=lastocc(arr,0,6,k);
    cout<<n<<endl;
    int totalocc=(n-m)+1;
    cout<<totalocc;
}