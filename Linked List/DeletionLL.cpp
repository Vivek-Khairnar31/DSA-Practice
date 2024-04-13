#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};
Node* convertA2L(vector<int>arr){
    Node* head=new Node(arr[0]);
    Node* mover=head;
    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}
// Node* deleteHead(Node* head){
//     if(head==NULL) return head; //this is because when the given head or LL is empty EDGE CASE
//     Node* temp=head;
//     head=head->next;
//     free(temp); // delete temp;
//     return head;
// }
// Node* deleteTail(Node* head){
//     if(head==NULL || head->next==NULL) return NULL;
//     Node* temp=head;
//     while(temp->next->next != NULL){
//             temp=temp->next;
//     }
//     free(temp->next);
//     temp->next = nullptr;
//     return head;
// }
// Node* deleteK(Node* head,int k){
//     if(head==NULL) return head;
//     if(k==0){                     //only if list is not zero based indexing 
//         Node* temp=head;
//         head=head->next;
//         free(temp);
//         return head;
//     }
//     int cnt=-1;
//     Node* temp=head;
//     Node* previ=NULL;
//     while(temp!=NULL){
//         cnt++;
//         if(cnt==k){
//             previ->next=previ->next->next;
//             free(temp);
//             break;
//         }
//         previ=temp;
//         temp=temp->next;
//     }
//     return head;
// }
Node* deleteValue(Node* head,int el){
    if(head==NULL) return head;
    if(head->data==el){                     //only if list is not zero based indexing 
        Node* temp=head;
        head=head->next;
        free(temp);
        return head;
    }
    Node* temp=head;
    Node* prev=NULL;
    while(temp!=NULL){
        if(temp->data==el){
            prev->next=prev->next->next;
            free(temp);
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;
}
int main() {
    vector<int>arr={2,4,6,8};
    Node* head=convertA2L(arr);
    Node* temp=deleteValue(head,8);
    while(temp){  
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return 0;
}