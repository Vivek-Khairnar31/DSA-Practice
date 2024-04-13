#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int data1){
        data=data1;
        next=nullptr;
    }
    Node(int data1,Node* next1){
        data=data1;
        next=next1;
    }
};
Node* convertAtoL(vector<int>arr){
    Node* head=new Node(arr[0]);
    Node* mover=head;
    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}

// Node* insertHead(Node* head,int val){
//     // Node* temp=new Node(0);
//     // temp->next=head;
//     // return temp;
    
//     //or

//     Node* temp=new Node(val,head);
//     return temp;
// }
Node* insertTail(Node* head, int k) {
  if(head==NULL) return new Node(k);
  Node* temp=head;
  while(temp->next!=NULL){
    temp=temp->next;
  }
  temp->next=new Node(k);
  return head;
}
// Node* insertK(Node* head,int val,int k){
//    if(head== NULL){
//     if(k==1) return new Node(val);
//    }
//    if(k==1) {
//       return new Node(val,head);
//    }
//    int cnt=0;
//    Node* temp=head;
//    while(temp!=NULL){
//     cnt++;
//     if(cnt==k-1){
//         Node* newN=new Node(val);
//         newN->next=temp->next;
//         temp->next=newN;
//         break;
//     }
//     temp=temp->next;
//    } 
//    return head;
// }
Node* insertValue(Node* head,int ele,int val){
   if(head->data==val) {
      return new Node(ele,head);
   }
   Node* temp=head;
   while(temp!=NULL){
    if(temp->next->data==val){
        Node* newN=new Node(ele,temp->next);
        temp->next=newN;
        break;
    }
    temp=temp->next;
   } 
   return head;
}
int main() {
    vector<int>arr={2,4,6,8};
    Node* head=convertAtoL(arr);
    Node* temp=insertValue(head,12,4);
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return 0;
}