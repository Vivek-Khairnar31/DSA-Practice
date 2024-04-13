#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
     Node* left;
     Node* right;
    Node(int val){
        data=val;
        left=right=NULL;
    }
};

Node* buildTree(vector<int>arr){
    if(arr.size()==0) return NULL;
    Node* root=new Node(arr[0]);
    queue<Node*>q;
    q.push(root);
    int i=1;
    while(i<arr.size()){
        Node* temp=q.front();
        q.pop();
        if(i<arr.size()){
            temp->left=new Node(arr[i++]);
            q.push(temp->left);
        }
        if(i<arr.size()){
            temp->right=new Node(arr[i++]);
            q.push(temp->right);
        }
    }
    return root;
}
void printTree(Node* root){
    queue<Node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node* temp=q.front();
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
    vector<int>arr={1,2,3,4,5,6,7};
    Node* root=NULL;
    root=buildTree(arr);
    printTree(root);
    return 0;
}