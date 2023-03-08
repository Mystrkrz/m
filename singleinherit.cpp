#include<iostream>
using namespace std;
class animal{
    public:
    int age;
    int weight;
    public:
    void speaks(){
        cout<<"speaking"<<endl;
    }
};
class dog:public animal{

};
int main(){
dog d;
d.speaks();
cout<<d.age<<endl;
}