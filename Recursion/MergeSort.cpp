#include<bits/stdc++.h>
using namespace std;
void merge( vector<int>&arr, int low, int mid, int high){
    vector<int>ans;
    int left=low ,right=mid+1;
    while(left<= mid && right<=high){
        if(arr[left]<=arr[right]){
            ans.push_back(arr[left]);
            left++;
        }
        else{
            ans.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid){
        ans.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        ans.push_back(arr[right]);
        right++;
    }
    for(int i=low;i<=high;i++){
        arr[i]=ans[i-low];
    }
}
void mergeSort( vector<int>& arr,int low, int high){
    if(low>=high) return;
    int mid=(low+high)/2;
    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    merge(arr,low,mid,high);
}
int main() {
    vector<int> arr ={5,3,2,1,4};
    mergeSort(arr,0,4);
    for(int i=0;i<5;i++) cout<<arr[i]<<" ";
   
    return 0;
}