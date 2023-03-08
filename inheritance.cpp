#include<iostream>
using namespace std;
class human{
public:
int age;
int weight;
private:
int height;
public:
int getage(){
    return this->age;
}
void setweight(int w){
    this->weight=w;
}
};
class male: protected human{
    public:
    string color;
    void sleep(){
        cout<<"slept"<<endl;
    }
    int getheight(){
        return this->height;
    }
};
int main(){
    // male m1;
    // cout<<m1.getheight()<<endl;
male object1;
cout<<object1.age<<endl;
cout<<object1.weight<<endl;
cout<<object1.color<<endl;
object1.sleep();
}