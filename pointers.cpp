#include<iostream>
using namespace std;
int main(){
    // int num=5;
    // int *ptr=&num;
    // cout<<"ptr"<<ptr<<endl;
    // cout<<"*ptr"<<*ptr<<endl;
    // cout<<"&num"<<&num<<endl;
    // cout<<"num"<<num<<endl;
    // cout<<"size of int num"<<sizeof(num)<<endl;
    // double c=4.2;
    // double *p2=&c;
    // cout<<sizeof(c)<<endl;
    // cout<<sizeof(p2)<<endl;
    // cout<<sizeof(*p2)<<endl;
    // cout<<sizeof(&c)<<endl;
    // int i=3;
    // int *t=&i;
    // *t=*t+1;
    // cout<<*t<<endl;
    // cout<<"before t"<<t<<endl;
    // t=t+1; //as it is of int type int will increase the address by 4 byte if it would have been of char type it would have increased by 8 byte
    // cout<<"after t"<<t<<endl;


// int arr[10]={2,5,6};
// cout<<"address of first memory block "<<arr<<endl;
// cout<<"address of first memeory block "<<&arr[0]<<endl;
// cout<<"4th "<<*arr<<endl;
// cout<<"5th "<<*arr + 1<<endl;
// cout<<"6th "<<*(arr + 1)<<endl;
// cout<<"7th "<<*(arr)+1<<endl;
// cout<<"8th "<<*(arr+2)<<endl;
// int j=2;
// cout<<j[arr]<<endl;
// int a[20]={1,2,3,5};
// cout<<&a[0]<<endl;
// // cout<<&a<<endl;
// // cout<<a<<endl;
 
//  int *p=&a[0];
// //  cout<<p<<endl;
// //  cout<<*p<<endl;
//  cout<<&p<<endl;

// int arr[5]={1,2,3,4,5};
// char ch[6]="abcde";
// cout<<arr<<endl;
// cout<<ch<<endl;
// char *c=&ch[0];
// cout<<c<<endl;
// char temp='z';
// char *p=&temp;
// cout<<p<<endl;


// float f=10.5;
// float p=2.5;
// float*ptr=&f;
// (*ptr)++;
// *ptr=p;
// cout<<*ptr<<" "<<f<<" "<<p<<endl;

char s[]= "hello";
char *p = s;
cout << s[0] << " " << p[0];
return 0;


}