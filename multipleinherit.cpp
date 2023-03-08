#include<iostream>
using namespace std;
class animal{
    public:
    int age;
    int height;
    public:
    void bark(){
        cout<<"barking"<<endl;
    }
};
class human{
    public:
    string color;
    public:
    void speaks(){
        cout<<"speaking"<<endl;
    }
};
class hybrid:public animal,public human{

};
int main(){
hybrid obj1;
obj1.speaks();
obj1.bark();
}