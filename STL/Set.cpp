#include<bits/stdc++.h>
using namespace std;

void printSet(){
   //i)it store everything in sorted order
   //ii)and stores unique means if insert element two times then it will not accept it 

   set<int> st;
   st.insert(3);   //{3}
   st.insert(2);   //{2,3}
   st.insert(2);   //{2,3}
   st.insert(1);   //{1,2,3}
   st.insert(4);   //{1,2,3,4}
   st.emplace(5);  //{1,2,3,4,5}

   //functionality of insert in vector can be used also ,that only increase efficiency
   //begin , end . rbegin , rend , size , clear , empty , insert , swap  same 


   auto it = st.find(3);
   cout<<*(it)<<endl;

   //{1,2,3,4}
//    auto it = st.find(5); //if element is not present in set then it always return the st.end()
//    cout<<*(it)<<endl;

  
  //erase function 
  st.erase(3);  //it simply erase the 3 and maintain the order {1,2,4}

  //in erase function we get similar functions like vector 
  //{1,2,3,4,5}   // to erase 2 and 3
  auto it1 = st.find(2);
  auto it2 = st.find(4);
  st.erase(it1,it2); //it will erase 2,3


  cout<<st.count(1); //it gives occurence of the element 1


  //upper and lower bound function 
  auto it3 = st.lower_bound(2);
  auto it4 = st.upper_bound(3);

}

int main() {
    printSet();
    return 0;
}