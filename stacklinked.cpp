#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node(int d){
        this->data=d;
        this->next=NULL;
    }
};
class Stack{
    public:
    Node*head;
    int size;
    Stack(int size){
        this->size=size;
        this->head=NULL;
    }
    void push(int d){
        int cnt=0;
        Node*temp=head;
        while(temp!=NULL){
            temp=temp->next;
            cnt++;
        }
        if(cnt<size){
            Node*newnode=new Node(d);
            if(head==NULL){
                head=newnode;
            }
            else{
                newnode->next=head;
                head=newnode;
            }
        }
        else{
            cout<<"stack overflow"<<endl;
        }
    }
    void peak(){
        if(head==NULL)
        cout<<"stack is empty"<<endl;
        else{
            cout<<head->data;
        }
    }
    void pop(){
        if(head==NULL)
        cout<<"stack underflow"<<endl;
        else{
            Node*temp=head;
            cout<<"popped element is"<<temp->data<<endl;
            head=head->next;
            delete temp;
        }
    }
    bool isempty(){
        if(head==NULL)
        return true;
        else
        return false;
    }

};

int main(){
   Stack s(5);
//    s.push(5);
//    s.push(15);
//    s.push(25);
//    s.push(35);
//    s.push(45);
   cout<<s.isempty()<<endl;
   s.push(5);
   s.peak();
   s.pop();
}