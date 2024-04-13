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
void inOrder(TreeNode* root, vector<int>&ans){
        if(root==NULL) return;
        inOrder(root->left,ans);
        ans.push_back(root->val);
        inOrder(root->right,ans);   
}

void preOrder(TreeNode* root, vector<int>&ans){
         if(root==NULL) return;
         ans.push_back(root->val);
         preOrder(root->left,ans);
         preOrder(root->right,ans);
}

void postOrder(TreeNode* root, vector<int>&ans){
        if(root==NULL) return;
        postOrder(root->left,ans);
        postOrder(root->right,ans);
        ans.push_back(root->val);
}

//BFS or LevelOrder Traversals
//Method 1:
// vector<vector<int>> levelOrder(TreeNode* root) {
//         vector<vector<int>>ans;
//         if(root==NULL) return ans;
//         queue<TreeNode*>q;
//         q.push(root);
//         while(!q.empty()){
//             int n=q.size();
//             vector<int>level;
//             for(int i=0;i<n;i++){
//                 TreeNode* temp=q.front();
//                 q.pop();
//                 if(temp->left) q.push(temp->left);
//                 if(temp->right) q.push(temp->right);
//                 level.push_back(temp->val);
//             }
//             ans.push_back(level);
//         }
//         return ans;
// }

//Method 2:
vector<int> levelOrder(TreeNode<int> * root){
    vector<int>ans;
    if(root==NULL) return ans;
    queue<TreeNode<int>*>q;
    q.push(root);
    while(!q.empty()){
         TreeNode<int>* temp=q.front();
         q.pop();
         if(temp->left) q.push(temp->left);
         if(temp->right) q.push(temp->right);
         ans.push_back(temp->data);
    }
    return ans;
}

int main() {
    
    return 0;
}