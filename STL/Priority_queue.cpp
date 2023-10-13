#include<bits/stdc++.h>
using namespace std;

void printPriorityQueue(){
    //Maximum Heap
   priority_queue<int> pq; 
   //in priority queue the largest number is goes at top 
   //this is non linear

   pq.push(5);
   pq.push(2);
   pq.push(8);
   pq.emplace(10); //{10,8,5,2};

   cout<<pq.top()<<endl;//10

  pq.pop();

  cout<<pq.top()<<endl;  //8


  //Minimum Heap
  //if you want minimum number first then this is syntax

  priority_queue<int , vector<int> , greater<int>> pque;

   pque.push(5);
   pque.push(2);
   pque.push(8);
   pque.emplace(10); //{2,5,8,10}

   cout<<pque.top()<<endl; //2


}

int main() {
    printPriorityQueue();
    return 0;
}