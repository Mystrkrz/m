#include<iostream>
using namespace std;
class a{
    public:
    void func(){
        cout<<"i am a"<<endl;
    }
};
class b{
    public:
    void func(){
        cout<<"i am b"<<endl;
    }
};
class c:public a,public b{

};
int main(){
c obj;
// obj.func();
obj.a::func();
obj.b::func();
}