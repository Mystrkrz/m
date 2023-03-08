#include<iostream>
using namespace std;
class hero{
    private:
int health;
public:
char *name;
char level;
static int timetocomplete;

hero(){
    cout<<"constructor called"<<endl;
    name=new char[100];
}

//parameterised  constructor
hero(int health)
{cout<<"this->"<<this<<endl;
    this->health=health;
}
hero(int health,char level){
    this->health=health;
    this->level=level;
}
hero(hero& temp){
    cout<<"copy constructor called"<<endl;
    this->health=temp.health;
    this->level=temp.level;
}
void print(){
    cout<<"name is "<<this->name<<",";
    cout<<"level is"<<this->level<<",";
    cout<<"health is"<<this->health<<endl;
}
int getHealth(){
    return health;
}
char getLevel(){
    return level;
}
void setHealth(int h){
health=h;
}
void setLevel(char ch){
    level=ch;
}
// void setName(char name[]){
//     strcpy(this->name,name);
// }
static int random(){
    return timetocomplete;
}

};
int hero::timetocomplete=5;
int main(){
// cout<<hero::timetocomplete<<endl;
cout<<hero::random()<<endl;
// hero a;
// cout<<a.timetocomplete<<endl;


// hero hero1;
// hero1.setHealth(12);
// hero1.setLevel('D');
// char name[7]="babbar";
// hero1.setName(name);
// hero1.print();


// hero mahtab(70,'C');
// mahtab.print();
// /*copy constructor*/ hero khan(mahtab); /*khan.health=mahtab.health; and khan.level=mahtab.level;*/
// khan.print();





//     //object created statically   
// hero khan(10);
// // cout<<"address of khan"<<&khan<<endl;
// khan.print();
// //object created dynamically
// hero *h=new hero(11);
// h->print();
// hero temp(22,'B');
// temp.print();




//     //static allocation
//     hero a;
//     a.setHealth(80);
//     a.setLevel('A');
// cout<<"level is"<<a.level<<endl;
// cout<<"health  is"<<a.getHealth()<<endl;

//     //dynamically
//     hero *b=new hero;
//     b->setHealth(70);
//     b->setLevel('B');
//     cout<<"level is"<<(*b).level<<endl;
//     cout<<"health is"<<(*b).getHealth()<<endl;

//     cout<<"level is"<<b->level<<endl;
//     cout<<"health is"<<b->getHealth()<<endl;



    // hero khan;
    // cout<< khan.getHealth()<<endl;
    // khan.setHealth(65);
    // khan.level='A';
    // cout<<khan.getHealth()<<endl;
    // cout<<khan.level<<endl;
    // return 0;
}