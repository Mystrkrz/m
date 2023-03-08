#include<iostream>
#include<vector>
using namespace std;
void reversearr(int arr[],int s,int e,int m){
    s=m+1;
   if(s>=e)
   return ;
    int temp=arr[s];
    arr[s]=arr[e];
    arr[e]=temp;
    reversearr(arr,s+1,e-1,m);
}
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
int main(){
    int arr[]={3,4,7,9,12};
    reversearr(arr,0,4,2);
    print(arr,5);
    return 0;
}
// vector<int>reverse(vector<int>v,int m){
//     int s=m+1,e=v.size()-1;
//     while(s<=e){
//         swap(v[s],v[e]);
//         s++;
//         e--;
//     }
//     return v;
// }
// void print(vector<int>v){
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }cout<<endl;
// }
// int main(){
//     vector<int>v;
//     v.push_back(11);
//     v.push_back(7);
//     v.push_back(3);
//     v.push_back(12);
//     v.push_back(4);
    
//     vector<int>ans=reverse(v,2);
//     print(ans);
//     return 0;
// }

