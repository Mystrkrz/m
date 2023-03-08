#include<iostream>
using namespace std;
void print(int arr[],int n){
    cout<<"size of array is "<<n<<endl;
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
}
bool isFound(int arr[],int n,int k){
    print(arr,n);
    if(n==0)
    return false;
if(arr[0]==k){
return true;}
else{
bool remainingpart=isFound(arr+1,n-1,k);
return remainingpart;
}
}
int main(){
    int arr[5]={2,4,5,7,13};
    int size=5;
    int k=7;
   bool ans= isFound(arr,size,k);
   if(ans){
    cout<<"present"<<endl;
   }
   else{
   cout<<"notpresent"<<endl;}
   return 0;
}