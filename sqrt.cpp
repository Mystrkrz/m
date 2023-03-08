#include<iostream>
using namespace std;
long long int sqrt(int num){
    int s=0,e=num-1;
    long long int ans;
   long long int mid=s+(e-s)/2;
    while(s<=e){
        if((mid*mid)>num){
            e=mid-1;
        }
        else {
           ans =mid;
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans ;
}
double moreprecision(int num,int precision,int tempsol){
double factor =1,ans=tempsol;
for(int i=0;i<precision;i++){
    factor=factor/10;
    for(double j=ans;j*j<num;j=j+factor){
ans=j;
    }
}
return ans;
}
int main(){
    int num;
    cin>>num;
    int tempsol=sqrt(num);
    cout<<moreprecision(num,3, tempsol );
    return 0;
}