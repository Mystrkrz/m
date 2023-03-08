#include<iostream>
using namespace std;
class animal{
    public:
    int age;
    int height;
    public:
    void speaks(){
        cout<<"speaking"<<endl;
    }
};
class dog:public animal{
    public:
    string sleep;
    void color(){
        cout<<"color"<<endl;
    }
};
class germansheford:public dog{

};
int main(){
    germansheford g;
    // dog d;
    g.speaks();
    cout<<g.sleep<<endl;
    cout<<g.height<<endl;


}