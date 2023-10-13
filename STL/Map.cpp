#include<bits/stdc++.h>
using namespace std;

void printMap(){
  
   map<int , int> mp;    //Here is One key and value 

   map<int , pair<int , int>> mpp;  //here is one key and two value 

   map<pair<int , int>,int> mp3;  //here is two key and one value 

   mp[1] = 2; //{1,2}
   mp.emplace(3,1); //{3,1}
   mp.insert({2,1});  //{2,1}

   //map stores unique keys in sorted order something is similar to set data structure


   mp3[{2,3}] = 10;  //this stores {2,3} as key and {10} as value 

   //to iterator over map there is same as vector 
   for(auto it : mp){
    cout<<it.first<<" "<<it.second<<endl;
   }
   cout<<mp[1]<<" "<<mp[2]<<" "<<mp[3]<<endl;

   //if want to print that doesn't exit 
   cout<<mp[5];

   auto it = mp.find(3);
   *(it);

   auto it = mp.find(5);//if the key is not present then it wil return the mp.end();

   auto it = mp.lower_bound(2);
   auto it = mp.upper_bound(3);

   //erase , swap , size ,empty are same as above 


}

int main() {
    printMap();
    return 0;
}