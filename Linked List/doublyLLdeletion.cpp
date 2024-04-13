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
Node* deleteHead(Node* head){
    if(head==NULL){
        return NULL;
    }
    // Node* temp=head->next;
    // free(head);
    //or

    // free(head);
    // return head->next;
    //or

    Node* prev=head;
    head=head->next;

    head->back=NULL;//removed back pointer
    prev->next=NULL;//remove next pointer

    free(prev);
    return head;
}

Node* deleteTail(Node* head){
    if(head==NULL || head->next==NULL) return NULL;
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    Node* prev=temp->back;
    temp->back=NULL;
    prev->next=NULL;
    free(temp);
    return head;
}

// Node* deleteK(Node* head,int k,int n){
//     if(head==NULL) return NULL;
//     if(k<1 || k > n) return head;
//     int cnt=0;
//     Node* temp=head;
//     while(temp!=nullptr){
//         cnt++;
//         if(cnt==k) break;
//         temp=temp->next;
//     }
//     Node* prev=temp->back;
//     Node* front=temp->next;
//     if(prev==NULL&&front==NULL){
//         free(temp);
//         return NULL;
//     }
//     else if(prev==NULL){
//        return deleteHead(head);
//     }
//     else if(front==NULL){
//         return deleteTail(head);
//     }
//         prev->next=front;
//         front->back=prev;
//         temp->next==NULL;
//         temp->back==NULL;
//         free(temp);
//     return head;
// }

Node* deleteValue(Node* head,int val,int n){
    if(head==NULL) return NULL;
    Node* temp=head;
    while(temp!=nullptr){
        if(temp->data==val) break;
        temp=temp->next;
    }
    Node* prev=temp->back;
    Node* front=temp->next;
    if(prev==NULL&&front==NULL){
        free(temp);
        return NULL;
    }
    else if(prev==NULL){
       return deleteHead(head);
    }
    else if(front==NULL){
        return deleteTail(head);
    }
        prev->next=front;
        front->back=prev;
        temp->next==NULL;
        temp->back==NULL;
        free(temp);
    return head;
}
int main() {
    vector<int> arr={2,4,6,8,10};
    Node* head=convertToLL(arr);
    Node* temp=deleteValue(head,10,arr.size());
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return 0;
}