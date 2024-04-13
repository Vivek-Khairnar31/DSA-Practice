#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* next;
    Node(int data1,Node* next1){
        data=data1;
        next=next1;
    }
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};
Node* convertToLL(vector<int>arr){
    Node* head=new Node(arr[0]);
    Node* mover=head;
    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}
int length(Node* head){
    Node* temp=head;
    int cnt=0;
    while(temp!=nullptr){
        temp=temp->next;
        cnt++;
    }
    return cnt;
}
int search(Node* head , int val){
    Node* temp=head;
    while(temp!=nullptr){
        if(temp->data==val){
            return 1;
        }
        temp=temp->next;
    }
    return 0;
}
int main() {
    vector<int>arr={2,4,6,8};
    Node* head=convertToLL(arr);
    cout<<head->data<<" ";
    Node* temp=head;
    while(temp){
        cout<<temp->data;
        temp=temp->next;
    }
    cout<<" "<<length(head)<<" ";
    int se=search(head,9);
    cout<<se;
    return 0;
}