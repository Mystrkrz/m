#include<iostream>
#include<map>
using namespace std;
class node{
    public:
    //NODE HAS DATA AND ADDRESS
    int data; //DATA OF INT TYPE
    node* next; //ADDRESS IS POINTING TO NEXT NODE 
    //constructor
    node(int data){
        this->data=data;
        this->next=NULL;
    }
    //destructor
    ~node(){
        int value=this->data;
        //memory free
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"memory is free for node with data "<<value<<endl;
    }
};
void insertathead(node* &head,int d){
    //creating new node
    node* temp=new node(d);
    temp->next=head;
    head=temp;
}
void insertattail(node* &tail,int d){
node* temp=new node(d);
tail->next=temp;
tail=tail->next;

}
void insertatposition(node* &tail,node* &head,int position,int d){
    //insert at start
    if(position==1){
        insertathead(head,d);
        return ;
    }
node*temp=head;
int count=1;
while(count<position-1){
    temp=temp->next;
    count++;
}
//insert at last position
if(temp->next==NULL)
{
    insertattail(tail,d);
    return ;
}
//creating node for d
node*nodetoinsert=new node(d);
nodetoinsert->next=temp->next;
temp->next=nodetoinsert;
}
void deletenode(int position,node*&head){
    //deleting first/start node
    if(position==1){
        node*temp=head;
head =head->next;
temp->next=NULL;
delete temp;
    }
    //deleting last or middle node
    else{
node*curr=head;
node*prev=NULL;
int count=1;
while(count<position){
prev=curr;
curr=curr->next;
count++;
}
prev->next=curr->next;
curr->next=NULL;
delete curr;
    }
}
void print(node* &head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }cout<<endl;
}
bool detectloop(node*head){
    if(head==NULL){
        return false;
    }
    map<node*,bool>visited;
    node*temp=head;
    while(temp!=NULL){
        //cycle is present
        if(visited[temp]==true){
            cout<<"cycle is present on element "<<temp->data<<endl;
            return true;
        }
        visited[temp]=true;
        temp=temp->next;
    }
    return false;
}
node*floyddetectloop(node*head){
    if(head==NULL){
        return NULL;
    }
    node*slow=head;
    node*fast=head;
    while(slow!=NULL&&fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
        }
        slow=slow->next;
        if(slow==fast){
            cout<<"present at"<<slow->data<<endl;
            return slow;
        }
    }
    return NULL;
}
node*getstartingnode(node*head){
    if(head==NULL){
        return NULL;
    }
    node*intersection=floyddetectloop(head);
    node*slow=head;
    while(slow!=intersection){
        slow=slow->next;
        intersection=intersection->next;
    }
    return slow;
}
void removeloop(node*head){
    if(head==NULL)
    return;
    node*startofloop=getstartingnode(head);
    node*temp=startofloop;
    while(temp->next!=startofloop){
temp=temp->next;
    }
    temp->next=NULL;
}
int main(){
    node* node1=new node(10);
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;

    //head pointed to new node
    node* head=node1;
    node* tail=node1;
    insertattail(tail,12);
    print(head);
    insertattail(tail,15);
    print(head);
    insertatposition(tail,head,4,22);
    print(head);
    tail->next=head->next;
    // print(head);
    if(floyddetectloop(head)){
        cout<<"cycle is present"<<endl;
    }
    else{
        cout<<"cycle is not present"<<endl;
    }
    node*loop=getstartingnode(head);
    cout<<"loop starts at"<<loop->data<<endl;
    removeloop(head);
    print(head);
    // cout<<"head "<<head->data<<endl;
    // cout<<"tail "<<tail->data<<endl;
    // deletenode(4,head);
    // print(head);
    // cout<<"head "<<head->data<<endl;
    // cout<<"tail "<<tail->data<<endl;
    // insertathead(head,12);
    // print(head);
    // insertathead(head,15);
    // print(head);
}