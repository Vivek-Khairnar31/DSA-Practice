#include<bits/stdc++.h>
using namespace std;

void printList(){
  //list is very similar to vector 
  //the only difference is front operation is added . that are take very less time
  list<int> ls;
  ls.push_back(10);
  ls.emplace_back(20);
  for(auto it : ls){
    cout<<it<<" ";
  }cout<<endl;

  ls.push_front(5);
  ls.emplace_front(0);
  for(auto it : ls){
    cout<<it<<" ";
  }cout<<endl;
  ls.pop_back();
    for(auto it : ls){
    cout<<it<<" ";
  }cout<<endl;

//rest of all operation are same 
//begin , end . rbegin , rend , size , clear , empty , insert , swap 
 

}

int main() {
    
    printList();
    return 0;
}