#include<iostream>
using namespace std;
int getSum(int arr[],int n){
    if(n==0)
    return 0;
    if(n==1)
    return arr[0];
    int remainingpart=getSum(arr+1,n-1);
    int sum=arr[0]+remainingpart;
    return sum;

}
int main(){
    int arr[5]={2,3,5,7,0};
    int size=5;
    cout<<getSum(arr,size);


    return 0;
}