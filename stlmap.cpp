#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,string> m;
    m[1]="mahtab";
    m[13]="khan";
    m[2]="ali";
    m.insert({5,"amn"});
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<"finding 13 -->"<<m.count(13)<<endl;
    m.erase(13);
    cout<<"after erase"<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }cout<<endl;
    auto it=m.find(5);
    for(auto i=it;i!=m.end();i++){
        cout<<(*i).first<<endl;
    }

}