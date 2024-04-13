#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
     node* left;
     node* right;
    node(int val){
        data=val;
        left=right=NULL;
    }
};

node* BuildTree(node* root){
    cout<<"Enter the data:"<<endl;
    int data;
    cin>>data;
    root=new node(data);
    if(data==-1) return NULL;
    cout<<"Enter for inserting to left of "<<data<<endl;
    root->left=BuildTree(root->left);
    cout<<"Enter for inserting to right of "<<data<<endl;
    root->right=BuildTree(root->right);
    return root;
}
void printTree(node* root){
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* temp=q.front();
        q.pop();

        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
            q.push(temp->left);
            }
            if(temp->right){
            q.push(temp->right);
            }
        }
    }
}
int main() {
    node* root=NULL;
    root=BuildTree(root);
   
    printTree(root);
    return 0;
}