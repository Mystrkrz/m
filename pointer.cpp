#include<iostream>
using namespace std;
void print(int *p){
    cout<<*p<<endl;
}
void update(int *p){
    *p=*p+1;
    p=p+1;
    // cout<<*p<<endl;
    // cout<<p<<endl;
}
int getsumarr(int arr[],int n){
    cout<<"size"<<sizeof(arr)<<endl;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;

}
int main(){
    // int num=5;
    // cout<<"address of num "<<&num<<endl;
    // int *p=&num;
    // cout<<*p<<endl;
    // cout<<p<<endl;
    // double d=4.2;
    // double *q=&d;
    // cout<<q<<endl;
    // cout<<*q<<endl;
    // char ch='a';
    // char *r=&ch;
    // cout<<r<<endl;
    // cout<<*r<<endl;
    // cout<<&ch<<endl;
    // cout<<sizeof(num)<<endl;
    // cout<<sizeof(p)<<endl;
    // cout<<sizeof(q)<<endl;
    // int i=0;
    // int *p=&i;
    // cout<<p<<endl;
    // int num=5;
    // int a=num;
    // a++;
    // cout<<&a<<endl;
    // cout<<&num<<endl;
    // cout<<a<<endl;
    // cout<<num<<endl;
    // int *r=&num;
    // cout<<num<<endl;
    // (*r)++;
    // cout<<num<<endl;
    
    // int *s=r;
    // cout<<*s<<endl;
    // cout<<r<<" "<<s<<endl;
    // cout<<*s<<" "<<*r<<endl;
    
    // int j=3;
    // int *t=&j;
    // *t=*t+1;
    // cout<<*t<<endl;
    // *t++;
    // cout<<*t<<endl;
    // cout<<t<<endl;
    // t=t-1;
    // cout<<t<<endl;
    // int *ptr=0;
    // int c=10;
    // *ptr=c;
    // cout<<*ptr<<endl;
    
    // int m=2;
    // int *n=&m;
    // cout<<n<<endl;
    // cout<<*n<<endl;
    // cout<<&m<<endl;
    // int arr[5]={1,2,3,4,5};
    // // char ch[6]="abcde";
    // cout<<arr<<endl;
    // //attention here
    // // cout<<ch<<endl;

    // // char *c=&ch[0];
    // //prints entire string
    // // cout<<c<<endl;

    // char temp='z';
    // char *p=&temp;
    // cout<<p<<endl;

    int value=5;
    int *p=&value;
    // print(p);
     cout<<"before-"<<p<<endl;
     cout<<"value before-"<<*p<<endl;
     update(p);
     cout<<"after-"<<p<<endl;
     cout<<"value after-"<<*p<<endl;
     
     int arr[5]={2,3,4,5,7};
     cout<<"sum is"<<getsumarr(arr,5)<<endl;

}