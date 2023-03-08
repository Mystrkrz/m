#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* prev;
    node* next;
    
    //constructor
    node(int d){
        this->data=d;
        this->prev=NULL;
        this->next=NULL;
    }
    ~node(){
        int val=this->data;
        if(next!=NULL){
            delete next;
            next=NULL;
        }
        cout<<"memory free for node with data"<<val<<endl;
    }
};
//traversing a linked list
void print(node* head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }cout<<endl;
}
//gives length of linked list
int getlength(node* head){
    int len=0;
    node*temp=head;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;
}
void insertathead(node*&head,node*&tail,int d){
    if(head==NULL){
node*temp=new node(d);
head=temp;
tail=temp;
    }
    else{
node*temp=new node(d);
temp->next=head;
head->prev=temp;
head=temp;
    }
}
void insertattail(node*&tail,node*&head,int d){
    if(tail==NULL){
        node*temp=new node(d);
        tail=temp;
        head=temp;
    }
    else{
    node*temp=new node(d);
    temp->prev=tail;
    tail->next=temp;
    tail=temp;
    }
}
void insertatposition(node*&head,node*&tail,int d,int position){
    //insert at first/start
    if(position==1){
insertathead(head,tail,d);
return ;
    }
    node*temp=head;
    int count=1;
    while(count<position-1){
        temp=temp->next;
        count++;
    }
    //inserting at last position
    if(temp->next==NULL){
        insertattail(tail,head,d);
        return ;
    }
    node*nodetoinsert=new node(d);
    nodetoinsert->next=temp->next;
    temp->next->prev=nodetoinsert;
    temp->next=nodetoinsert;
    nodetoinsert->prev=temp;
}
void deletenode(int position,node*&head){
    //deleting first or start node
    if(position==1){
        node*temp=head;
        temp->next->prev=NULL;
        head=temp->next;
        temp->next=NULL;
        delete temp;//free space
    }
    else{
        //deleting any middle node or last node
        node*curr=head;
        node*prev=NULL;
        int count=1;
        while(count<position){
            prev=curr;
            curr=curr->next;
            count++;
        }
        curr->prev=NULL;
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}
int main(){
    node*head=NULL;
    node*tail=NULL;
    print(head);
    // cout<<getlength(head)<<endl;
    insertathead(head,tail,11);
    print(head);
    insertathead(head,tail,13);
    print(head);
    insertathead(head,tail,8);
    print(head);
    insertattail(tail,head,25);
    print(head);
    insertatposition(head,tail,100,2);
    print(head);
    insertatposition(head,tail,101,1);
    print(head);
    insertatposition(head,tail,102,7);
    print(head);
    deletenode(7,head);
    print(head);
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;
}