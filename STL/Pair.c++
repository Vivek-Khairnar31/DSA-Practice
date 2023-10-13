#include<bits/stdc++.h>
using namespace std;

void printPair(){
    pair<int , int> num1 = {4 , 3};
    //to access the pair element 
    cout<<num1.first<<" "<<num1.second<<endl;

    //we can also have nested pairs 
    //In place of integer it can be anything 
    pair<double,pair<int,long long>> num2 = {4.3 ,{ 5 , 1000000000}};
    //to access the pair each value we use this 
    cout<<num2.first<<" "<<num2.second.first<<" "<<num2.second.second<<endl;

    //we can declare array in pair

    pair<int , int> arr[] = {{1,2},{3,4},{5,6}};
    //we know that array only store the single type of data so here only one type data will use 
    //to access it 
    cout<<arr[0].first<<" "<<arr[0].second<<endl;
    cout<<arr[1].first<<" "<<arr[1].second<<endl;
    cout<<arr[2].first<<" "<<arr[2].second<<endl;
 }


int main() {

    printPair();
    return 0;
}