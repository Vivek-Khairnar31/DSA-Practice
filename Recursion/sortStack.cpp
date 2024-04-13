#include<bits/stdc++.h>
using namespace std;
// void insert(stack<int>&s, int temp){
//     if(s.size()==0 || s.top()<=temp){
//         s.push(temp);
//         return;
//     }
//     int a=s.top();
//     s.pop();
//     insert(s,temp);
//     s.push(a);
// }

//reverse stack
void reverse(stack<int>&s, int temp){
    if(s.size()==0){
        s.push(temp);
        return;
    }
    int a=s.top();
    s.pop();
    reverse(s,temp);
    s.push(a);
}
void sortS(stack<int>&s)
{
   //Your code here
   if(s.size()==0){
       return;
   }
   int a=s.top();
   s.pop();
   sortS(s);
//    insert(s,a); // insert stack 
    reverse(s,a); // reverse stack
}
int main() {
    stack<int>s;
    s.push(2);
    s.push(0);
    s.push(1);
    s.push(5);
    // s.push(11);
    sortS(s);
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
    return 0;
}