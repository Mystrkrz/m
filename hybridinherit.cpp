#include<iostream>
using namespace std;
class a{
    public:
    void func1(){
        cout<<"1"<<endl;
    }
};
class b:public a{
    public:
    void func2(){
        cout<<"2"<<endl;
    }
};
class d{
    public:
    void func4(){
        cout<<"4"<<endl;
    }
};
class c:public a,public d{
    public:
    void func3(){
        cout<<"3"<<endl;
    }
};

int main(){
a obj1;
obj1.func1();
b obj2;
obj2.func1();
obj2.func2();
d obj4;
obj4.func4();
c obj3;
obj3.func1();
obj3.func4();

}