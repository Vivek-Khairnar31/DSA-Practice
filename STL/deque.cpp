#include<bits/stdc++.h>
using namespace std;
void printDeque(){
  //deque is very similar to vector and list 
  //the only difference is front operation is added . that are take very less time

   deque<int> dq;
  dq.push_back(10);
  dq.emplace_back(20);
  for(auto it : dq){
    cout<<it<<" ";
  }cout<<endl;
  
  dq.push_front(5);
  dq.emplace_front(0);
  for(auto it : dq){
    cout<<it<<" ";
  }cout<<endl;
  dq.pop_front();
    for(auto it : dq){
    cout<<it<<" ";
  }cout<<endl;

  cout<<dq.front()<<" ";
  cout<<dq.back();

//rest of all operation are same 
//begin , end . rbegin , rend , size , clear , empty , insert , swap 
}
int main() {
    printDeque();
    return 0;
}