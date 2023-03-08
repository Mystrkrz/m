#include<iostream>
using namespace std;
int getinversioncount(int arr[],int n){
    int inversioncount=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){

            if(arr[i]>arr[j])
            inversioncount++;
        }
    }
    return inversioncount;
}

int main(){

    int arr[3]={11,7,3};
    int n=3;
  
    cout<<getinversioncount(arr,3);
    return 0;

}