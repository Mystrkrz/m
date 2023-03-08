#include<iostream>
#include<queue>
using namespace std;
class node{
    public:
    int data;
    node*left;
    node*right;
    node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }

};
node* buildTree(node*root){
    cout<<"enter the data: "<<endl;
    int data;
    cin>>data;
    root=new node(data);
    if(data==-1){
        return NULL;
    }
    cout<<"enter the data for inserting at left of "<<data<<endl;
    root->left=buildTree(root->left);
    cout<<"enter the data for inserting at right of "<<data<<endl;
    root->right=buildTree(root->right);
    return root;
}
void levelordertraversal(node*root){
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node*temp=q.front();
        q.pop();
        if(temp==NULL){//ek level finish ho gya h
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left)
            q.push(temp->left);
            if(temp->right)
            q.push(temp->right);
        }
    }
}
void buildfromlevelorder(node*&root){
    queue<node*>q;
    cout<<"enter data for root"<<endl;
    int data;
    cin>>data;
    root=new node(data);
    q.push(root);
    while(!q.empty()){
        node* temp=q.front();
        q.pop();
       cout<<"enter data for left of"<<temp->data<<endl;
       int leftdata;
       cin>>leftdata;
       if(leftdata!=-1){
        temp->left=new node(leftdata);
        q.push(temp->left);
       }
       cout<<"enter data for right of"<<temp->data<<endl;
       int rightdata;
       cin>>rightdata;
       if(rightdata!=-1){
        temp->right=new node(rightdata);
        q.push(temp->right);
       }
      
    }
}
void inorder(node*root){
    //base case
    if(root==NULL){
        return ;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void preorder(node*root){
    if(root==NULL){
        return ;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(node*root){
    if(root==NULL){
        return ;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
int main(){
    node* root=NULL;
    buildfromlevelorder(root);
    levelordertraversal(root);
   /* root=buildTree(root);
    cout<<"printing the level order traversal output"<<endl;
    levelordertraversal(root);
    cout<<"inorder traversal: ";
    inorder(root);
    cout<<endl<<"preorder traversal: ";
    preorder(root);
    cout<<endl<<"postorder traversal: ";
    postorder(root);*/

    return 0;
}