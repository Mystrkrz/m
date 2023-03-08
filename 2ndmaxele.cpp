// #include<iostream>
// #include<algorithm>
// using namespace std;
// int find2max(int arr[],int n){
//     sort(arr,arr+n,greater<int>());
//     for(int i=1;i<n;i++){
//         if(arr[i]!=arr[0])
//         return i;
//     }
//     return -1;
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[1000];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int i=find2max(arr,n);
//     if(i!=-1)
//     cout<<arr[i];
//     else
//     cout<<"not";
// }

/* #include<iostream>
#include <bits/stdc++.h>
using namespace std;
int find2max(int arr[],int n){
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max)
        max=arr[i];
    }
    int secondmax=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>secondmax&&arr[i]!=max)
        secondmax=arr[i];
    }
    if(secondmax!=INT_MIN)
    cout<<secondmax;
    else
    cout<<"not";
}
int main(){
    int n;
    cin>>n;
    int arr[1000];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    find2max(arr,n);
}
*/
#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int find2max(int arr[],int n){
    int max=INT_MIN,secondmax=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            secondmax=max;
            max=arr[i];
        }
        else if(arr[i]>secondmax&&arr[i]!=max)
        secondmax=arr[i];
    }
    if(secondmax!=INT_MIN){
        cout<<secondmax;
    }
    else
    cout<<"not";

}
int main(){
    int n;
    cin>>n;
    int arr[1000];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    find2max(arr,n);
}