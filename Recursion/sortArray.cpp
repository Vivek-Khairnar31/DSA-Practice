#include<bits/stdc++.h>
using namespace std;
void insert(vector<int>&arr, int temp){
    if(arr.size()==0|| arr[arr.size()-1]<=temp){
        arr.push_back(temp);
        return;
    }
    int a=arr[arr.size()-1];
    arr.pop_back();
    insert(arr,temp);
    arr.push_back(a);
}
void sortArray(vector<int>&arr,int n){
    if(n<0){
        return;
    }
    int temp=arr[n];
    arr.pop_back();
    sortArray(arr,n-1);
    insert(arr,temp);
}
int main() {
    vector<int>arr={4,3,2,1};
    sortArray(arr,3);
    for(auto it:arr) cout<<it<<" ";
    return 0;
}