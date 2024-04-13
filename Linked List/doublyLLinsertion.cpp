#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;
    Node* back;    // this only change in new Doubly LL from this we can traverse two way forward and backward 

    Node(int data1){
        data=data1;
        next=nullptr;
        back=nullptr;
    }
    Node(int data1,Node* next1,Node* back1){
        data=data1;
        next=next1;
        back=back1;
    }
};
Node* convertToLL(vector<int>arr){
    Node* head=new Node(arr[0]);
    Node* prev=head; 
    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i],nullptr,prev);
        prev->next=temp;
        prev=temp;
    }
    return head;
}

Node* insertHead(Node* head,int k){
    if(head==NULL) return new Node(k);
    Node* temp=new Node(k,head,nullptr);
    return temp;
}
Node* insertTail(Node* head,int k){
    if(head==NULL) return new Node(k);
    Node* tail=head;
    while(tail->next!=nullptr){
        tail=tail->next;
    }
    Node* prev=tail->back;
    Node* newNode= new Node(k,tail,prev);
    prev->next=newNode;
    tail->back=newNode;
    return head;
}
Node* insertK(Node* head,int k,int val){
    if(head==NULL) return new Node(val);
    if(k==1){
        Node* temp=new Node(val,head,nullptr);
        return temp;
    }
    int cnt=0;
    Node* tail=head;
    while(tail->next!=NULL){
        cnt++;
        if(cnt==k){
            break;
        }
        tail=tail->next;
    }
    Node* prev=tail->back;
    Node* newNode=new Node(val,tail,prev);
    prev->next=tail->back=newNode;
    return head;
}
Node* insertAtGivenNode(Node* head,int ele, int val) {
   if(head==NULL) return new Node(ele);
    Node* tail=head;
    while(tail->next!=NULL){
        if(tail->data==val) break;
        tail=tail->next;
    }
    Node* prev=tail->back;
    Node* newNode=new Node(ele,tail,prev);
    prev->next=tail->back=newNode;
    return head;
}
int main() {
    vector<int> arr={2,4,6,8,10};
    Node* head=convertToLL(arr);
    Node* temp= insertAtGivenNode(head,5,6);   
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return 0;
}