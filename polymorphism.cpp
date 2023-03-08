#include<iostream>
using namespace std;
//compile-time polymorphism

//1.function overloading- same function multiple times
// class a{
//     public:
//     void sayhello(){
//         cout<<"hello brdr"<<endl;
//     }
//     void sayhello(string name,int n){
//         cout<<"hello brdr"<<endl;
//         // return n;
//     }
//     void sayhello(string name){
//         cout<<"hello"<<endl;
//     }
//     void sayhello(char name){
//         cout<<"hello brdr"<<endl;
//     }
// };
// int main(){

//     a obj;
//     obj.sayhello();
//     return 0;
// }

//2.operator overloading
class B{
    public:
    int a;
    int b;
    public:
    int add(){

        return a+b;
    }
    void operator+ (B &obj){
        int value1=this->a;
        int value2=obj.a;
        cout<<"output "<<value2-value1<<endl;
    }

};
int main(){
    B obj1,obj2;
    obj1.a=4;
    obj2.a=7;
    obj1+obj2;
}




//run-time polymorphism

//method overriding- depends on inheritance
// class animal{
// public:
// void speak(){
//     cout<<"speaking"<<endl;
// }
// };
// class dog: public animal{
//     public:
//     void speak(){
//         cout<<"barking"<<endl;
//     }
// };
// int main(){
//     dog obj;
//     obj.speak();
// }