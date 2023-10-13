#include<bits/stdc++.h>
using namespace std;

void printMultiSet(){
  
  multiset<int> ms;
  ms.insert(1);
  ms.insert(1);
  ms.insert(1);  //{1,1,1}

  //count function 
  //it will count all occurence of 1's 
  cout<<ms.count(1);

  //erase function 
  //i)if you pass element then all occurence of that element will erase 
  //ms.erase(1);

  //ii)if you pass the iterator then only that element will erase 
  //ms.erase(ms.find(1));//it will find the 1st occurence of 1

  //if want to erase the 2 1's then 
//   ms.erase(ms.find(1), ms.find(1)+2); 
 

 //rest of all the functions are the same   


}

int main() {
    printMultiSet();
    return 0;
}