#include<iostream>
using namespace std;
class hero{
    private:
    int health;
    public:
    char level;
    void print(){
        cout<<level<<endl;
    }
    hero(){
        cout<<"constructor called"<<endl;
    }
    //parametrized constructor
    hero(int health){
        cout<<"this-> "<<this<<endl;
        this->health=health;
    }
    int gethealth(){
        return health;
    }
    char getlevel(){
        return level;
    }
    void sethealth(int h){
        health=h;
    }
    void setlevel(char ch){
        level=ch;
    }
};
int main(){
    hero khan(10);
    cout<<"address of khan "<<&khan<<endl;
    khan.gethealth();
    hero *h=new hero(11);
    // //static allocation
    // hero a;
    // a.setlevel('A');
    // a.sethealth(70);
    // cout<<"level is "<<a.level<<endl;
    // cout<<"health is "<<a.gethealth()<<endl;

    // //dynamic allocation
    // hero *b=new hero;
    // b->setlevel('B');
    // b->sethealth(80);
    // cout<<"level is "<<(*b).level<<endl;
    // cout<<"health is "<<(*b).gethealth()<<endl;

    // cout<<"level is "<<b->level<<endl;
    // cout<<"health is "<<b->gethealth()<<endl;
    // hero khan;
    // // khan.health=1;
    // cout<<"khan health is "<<khan.gethealth()<<endl;
    // // cout<<"health is "<<khan.health<<endl;
    // cout<<"level is "<<khan.level<<endl;
    // cout<<"size: "<<sizeof(h1);
}