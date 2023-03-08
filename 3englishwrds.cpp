#include<iostream>
using namespace std;
int main(){
    char a[10],b[10],c[10];
    cin>>a>>b>>c;
    int x,y,z;
    cin>>x>>y>>z;
    //vowels
    for(int i=0;i<x;i++){
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
        a[i]='%';
    }
    //consonants
    for(int j=0;j<y;j++){
        if(b[j]=='b'||b[j]=='c'||b[j]=='d'||b[j]=='f'||b[j]=='g'||b[j]=='h'||b[j]=='j'||b[j]=='k'||b[j]=='l'||b[j]=='m'||b[j]=='n'||b[j]=='p'||b[j]=='q'||b[j]=='r'||b[j]=='s'||b[j]=='t'||b[j]=='v'||b[j]=='w'||b[j]=='x'||b[j]=='y'||b[j]=='z')
        b[j]='#';
    }
    //uppercase
    int k=0;
    while(k<z){
        if(c[k]>='a'&&c[k]<='z'){
            c[k]=c[k]-32;
        }
        k++;
    }
    cout<<a<<b<<c;

}