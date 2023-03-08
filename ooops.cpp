#include<iostream>
#include<map>
using namespace std;
class Node{
    public:
    int data;
    Node*prev;
    Node*next;
    Node(int d){
        this->data=d;
        this->next=NULL;
        this->prev=NULL;
    }
    ~Node(){
        int value=this->data;
        if(this->next!=NULL){
            delete next;
            next=NULL;
        }
        cout<<"memory is free for node with data "<<value<<endl;
    }
};
void insertnode(Node*&tail,int element,int d){
    if(tail==NULL){
        Node* newnode= new Node(d);
        tail=newnode;
        newnode->next=newnode;
    }
    else{
        Node*curr=tail;
        while(curr->data!=element){
            curr=curr->next;
        }
        Node*temp=new Node(d);
        temp->next=curr->next;
        curr->next=temp;
    }
}
void insertattail(Node*&tail,int d){
    Node*temp=new Node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
}
void insertathead(Node*&head,int d){
    Node*temp=new Node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;
}
void print(Node*tail){
    Node*temp=tail;
    cout<<tail->data<<" ";
    while(tail->next!=temp){
        cout<<tail->data<<" ";
        tail=tail->next;
    }
    cout<<endl;
}
void deletenode(Node*&tail,int value){
    //empty list
    if(tail==NULL){
        cout<<"it is empty "<<endl;
        return ;
    }
    else{
        Node*prev=tail;
        Node*curr=prev->next;
        while(curr->data!=value){
            prev=curr;
            curr=curr->next;
        }
        prev->next=curr->next;
        if(tail==curr){
            tail=prev;
        }
        curr->next=NULL;
        delete curr;
    }
}
// bool iscircularlinkedlist(Node*head){
//     if(head==NULL)
//     return NULL;
//     if(head->next==head)
//     return true;
//     Node*temp=head->next;
//     while(temp!=NULL&&temp!=head){
//         temp=temp->next;
//     }
//     if(temp==head)
//     return true;
//     else
//     return false;
// }
bool iscircular(Node*head){
    if(head==NULL)
    return false;
    map<Node*,bool>visited;
    Node*temp=head;
    while(temp!=NULL){
        if(visited[temp]==true){
        cout<<"temp->data"<<endl;
        return true;}
        visited[temp]=true;
        temp=temp->next;
    }
    return false;
}
int main(){
    Node*node1=new Node(10);
    Node*head=node1;
    Node*tail=node1;
    insertattail(tail,12);
    insertattail(tail,15);
    insertattail(tail,18);
    insertathead(head,11);
    // insertattail(tail,25);
     tail->next=head->next;
    // cout<<head->data<<endl;
    // cout<<tail->data<<endl;
    print(head);

}

/* int main(){
    Node*tail=NULL;
    insertnode(tail,5,3);
    print(tail);
    // insertnode(tail,3,5);
    // print(tail);
  /*  insertnode(tail,5,7);
    print(tail);
    insertnode(tail,7,9);
    print(tail);*/
   /* deletenode(tail,3);
    print(tail);
    if(iscircularlinkedlist(tail)){
        cout<<"linked list is circular in nature";
    }
    else 
    cout<<"linked list is not circular in nature";

}*/



// class Node{
//     public:
//     int data;
//     Node* next;
//     Node*prev;
//     //constructor
//     Node(int data){
//         this->data=data;
//         this->next=NULL;
//         this->prev=NULL;
//     }
//     ~Node(){
//         int val=this->data;
//         if(next!=NULL){
//             delete next;
//             next=NULL;
//         }
//         cout<<"memory free for node with data"<<val<<endl;
//     }

// };
// int getlength(Node*head){
//     Node*temp=head;
//     int len=0;
//     while(temp!=NULL){
//         temp=temp->next;
//         len++;
//     }
//     return len;
// }
// void print(Node*&head){
//     Node*temp=head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
// }
// void insertathead(Node*&head,int d){
//     Node*temp=new Node(d);
//     temp->next=head;
//     head->prev=temp;
//     head=temp;
// }
// void insertattail(Node*&tail,int d){
//     Node*temp=new Node(d);
//     tail->next=temp;
//     temp->prev=tail;
//     tail=tail->next;
// }
// void insertatpos(Node*&head,int pos,int d){
//     Node*temp=head;
//     int cnt=1;
//     while(cnt<pos-1){
//         cnt++;
//         temp=temp->next;
//     }
//     Node*nodetoinsert=new Node(d);
//     nodetoinsert->next=temp->next;
//     temp->next->prev=nodetoinsert;
//     temp->next=nodetoinsert;
//     nodetoinsert->prev=temp;
    
// }
// void deletenode(Node*&head,int pos){
//     if(pos==1){
//     Node*temp=head;
//     head=temp->next;
//     temp->next->prev=NULL;
//     temp->next=NULL;
//     delete temp;
//     }
//     else{
//         Node*curr=head;
//         Node*prev=NULL;
//         int cnt=1;
//         while(cnt<pos){
//             prev=curr;
//             curr=curr->next;
//             cnt++;
//         }
//         prev->next=curr->next;
//         curr->prev=NULL;
//         curr->next=NULL;
//         delete curr;

//     }


// }
// int main(){
//     Node*node1=new Node(10);
//     Node*head=node1;
//     Node*tail=node1;
//     print(head);
//     cout<<"length "<<getlength(head)<<endl;
//     insertathead(head,11);
//     insertattail(tail,12);
//     insertatpos(head,2,9);
//     deletenode(head,4);
//     print(head);
//     return 0;
// }



// class Node{
//     public:
//     int data;
//     Node*next;
//     Node(int data){
//         this->data=data;
//         this->next=NULL;
//     }
// };
// void insertathead(Node* &head,int d){
//     Node*temp=new Node(d);
//     temp->next=head;
//     head=temp;
// }
// void insertattail(Node*&tail,int d){
//     Node*temp=new Node(d);
//     tail->next=temp;
//     tail=tail->next;
// }
// void insertatmid(Node*&head,int pos,int d){
//     Node* temp=head;
//     int cnt=1;
//     while(cnt<pos-1){
//         temp=temp->next;
//         cnt++;
//     }
//     Node*nodetoinsert=new Node(d);
//     nodetoinsert->next=temp->next;
//     temp->next=nodetoinsert;
   
// }
// void delete(int pos,Node*&head){
//     Node*temp=head;
//     int cnt=1;
//     while(cnt<pos-1){
//         temp=temp->next;
//         cnt++;
//     }
//     temp->next=
// }
// void print(Node* &head){
//     Node*temp=head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
//     cout<<endl;
// }
// int main(){
//     Node* node1=new Node(10);
//     Node*head=node1;
//     Node*tail=node1;
//     print(head);
//     insertathead(head,12);
//     insertattail(tail,15);
//     insertatmid(head,2,11);
//     delete(value);
//     print(head);
//     cout<<head->data<<endl;
//     cout<<tail->data<<endl;
// }

// class B{
//     public:
//     int a;
//     int b;
//     public:
//     // int add(){
//         // return a+b;
//     // }
//     void operator+(B &obj){
//         int value1=this->a;
//         int value2=obj.a;
//         cout<<"output "<<value2-value1<<endl;

//     }
//     void operator() (){
//         cout<<"main bracket hu "<<this->a<<endl;
//     }
// };
// class animal{
//     public:
//     void speak(){
//         cout<<"speaking "<<endl;
//     }

// };
// class dog:public animal{
//     public:
//     void speak(){
//         cout<<"barking"<<endl;
//     }
// };
// int main(){
//     // B obj1,obj2;
//     // obj1.a=4;
//     // obj2.a=7;
//     // obj1+obj2;
//     // obj1();
//     dog obj;
//     obj.speak();
// }