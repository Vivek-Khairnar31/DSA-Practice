#include<bits/stdc++.h>
using namespace std;

void printStack(){
  stack<int> st;

  //push or emplace 

  st.push(1);     //{1}
  st.push(2);     //{2,1}
  st.emplace(3);  //{3,2,1}
  st.emplace(4);  //{4,3,2,1}
  st.push(5);     //{5,4,3,2,1}

  //top 
  cout<<st.top()<<endl;
  
  //size
  cout<<st.size()<<endl;

  //pop
  st.pop();  //{4,3,2,1}

  //empty
  cout<<st.empty();

  //swap
  stack<int> st1,st2;
  st1.swap(st2); 
  //this will swap entire the stack 

}

int main() {
    
    printStack();
    return 0;
}