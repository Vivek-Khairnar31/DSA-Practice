#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    public:
    Node(int data1,Node* next1){
        data=data1;
        next=next1;
    }
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};
Node* convertToLl(vector<int>arr){
    Node* head=new Node(arr[0]);
    Node* mover=head;
    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        // mover=temp; 
        mover=mover->next;
    }
    return head;
}
int lengthLL(Node* head){
    int cnt=0;
    Node* temp=head;
    while(temp!=nullptr){
        temp=temp->next;
        cnt++;
    }
    return cnt;
}
int main() {
    vector<int> arr={2,3,4,5};
    // Node* y=new Node(arr[0],nullptr);
    // cout<<y.next;   //this gives you the object .next gives the address and .data gives the data at that location 
    // cout<<y->next;      //this used when the new keyword is used 
 
    Node* head=convertToLl(arr);
    // cout<<y->data<<" "<<y->next;

    //traverse the linked list
    Node* temp=head;
    while(temp != nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    cout<<lengthLL(head);
    return 0;
}