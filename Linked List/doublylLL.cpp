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
int main() {
    vector<int> arr={2,4,6,8,10};
    Node* head=convertToLL(arr);
    Node* temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return 0;
}