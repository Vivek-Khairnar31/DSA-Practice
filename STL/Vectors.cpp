#include<bits/stdc++.h>
using namespace std;

void printVector(){
   vector<int> nums;    //this wil create the empty container  {}
   nums.push_back(1);   //this will push the 1 in that container{1}
   nums.emplace_back(2); //this also simliar to push_back but it is faster {1,2}
   nums.emplace_back(3); //{1,2,3}
   cout<<nums[0]<<" "<<nums[1]<<" "<<nums[2]<<" "<<endl;
   

   //we can also define vector in pair data type 
   vector<pair<int , int>>nums2;
   nums2.push_back({1,2});  //pushback needs the curly bracket
   nums2.emplace_back(3,4);  //emplace back doesn't need the curly bracket
   cout<<nums2[0].first<<" "<<nums2[0].second<<endl;
   cout<<nums2[1].first<<" "<<nums2[1].second<<endl;

   vector<int> v(5);//this will contain 5 zeros
   cout<<v[2]<<endl;

   vector<int> hundreds(5,100);//this will create the 5 instances of 100 {100,100,100,100,100}
   cout<<hundreds[4]<<endl;

   //to copy one vector in another vector we can do like this 
   vector<int> v1(5,20);
   vector<int> v2(v1);  //this is how we can copy the vector 

   //if we initially declare the size then we can also add element thourgh push back function

   //We can access the element by iterator
   vector<int>::iterator any = nums.begin(); //this will only give address of begining
   cout<<*(any)<<endl;  //if we want that value then we have to use * in front of iterator
   any++;
   cout<<*(any)<<endl;

   //there are types of iterator nums ={1,2,3}
    vector<int>::iterator any1 = nums.end(); //end will point to after 3 if want to access
    //then we have any-- then we the value 3 
    //  vector<int>::iterator any2 = hundreds.rend(); //this will point the before 1
    //   vector<int>::iterator any3 = nums.rbegin(); //this will point to  3

    cout<<nums.back()<<endl;  // this will directly point to the back element
    


    vector<int> num ;
    num.push_back(10);
    num.push_back(20);
    num.push_back(30);
    num.push_back(40);
    num.push_back(50);
  
  //for print the vector 
    for(vector<int>::iterator it = num.begin(); it != num.end() ; it++){
        cout<<*(it)<<" ";
    }
 cout<<endl;
 //for there is auto 
 for(auto it = num.begin();it != num.end(); it++){
    cout<<*(it)<<" ";
 }
 cout<<endl;
   //there is for each loop to print the vector 
for(auto it : num){
    cout<<it<<" ";
}
 cout<<endl;
 //auto is keyword use for the data type 
 //according to data , data type will assign
 int a = 5;
 auto a1 = 5 ;
 auto a2 = "Vicky";

 //to delete the element in vector 
 //i) for single element 
 num.erase(num.begin()+4);
 for(auto it : num){
    cout<<it<<" ";
}
cout<<endl;

num.push_back(50);
//ii)to delete the multiple element
//to delete the 30 , 40
//v.erase(starting address , end address + 1 OR end address after the element)
num.erase(num.begin()+2,num.begin()+4);
for(auto it : num){
    cout<<it<<" ";
}cout<<endl;

//to insert the element

num.insert(num.begin(),0);
for(auto it : num){
    cout<<it<<" ";
}cout<<endl;

 //i)to insert the single element at anyplace 
 //insert the 25 at after 20
 num.insert(num.begin()+3,25);
 for(auto it : num){
    cout<<it<<" ";
}cout<<endl;
 
 //ii)to insert the single element at anyplace 
 num.insert(num.begin()+5,2,55);
  for(auto it : num){
    cout<<it<<" ";
}cout<<endl;

//copy the entire vector or insert it the portion of some vector 
vector<int> num1(2,50); //{50,50}
num.insert(num.begin()+5,num1.begin(),num1.end());
for(auto it : num){
    cout<<it<<" ";
}cout<<endl;
 //if you want to insert the some portion of the vector the give that address


 //v.size() gives the size the size of vector
 cout<<num.size();
 cout<<endl;

 //v.pop_back remove the back element 
 num.pop_back();
  for(auto it : num){
    cout<<it<<" ";
}cout<<endl;

//swap the vector entier vector 
//v1.swap(v2);  it swaps the vector element of v2 into v1 and vice versa 

//v,clear()
//this will clear all elements in vector and makes empty vector 


//v.empty() 
//this will show vector is empty or not 
cout<<num.empty();
 
 



}


int main() {
    
    printVector();
    return 0;
}