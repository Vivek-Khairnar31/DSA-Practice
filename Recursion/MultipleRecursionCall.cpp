#include<bits/stdc++.h>
using namespace std;

//print all subseqence
// void print(int i,int arr[], vector<int>ans,int n){
//     if(i==n){
//         for(auto it:ans) cout<<it<<" ";
//         if(ans.size()==0) cout<<"{}";
//         cout<<endl;
//         return;
//     }
//     print(i+1,arr,ans,n); // if this will do the subsequence that we will be printing that in reverse order.


//     //This for take the element at particular index
//     ans.push_back(arr[i]);
//     print(i+1,arr,ans,n);

//     //this for NOT to take element at previous index or we can say this element is not added to your subsequence 
//     ans.pop_back();

// }

//print all subsequence that has sum equal to k
// void print(int i,int arr[], vector<int>&ans, int n, int sum,int k){
//       if(i==n){
//         if(sum==k){
//             for(auto it:ans) cout<<it<<" ";
//             cout<<endl;
//         }
        
//         return;
//       }
//       sum+=arr[i];
//       ans.push_back(arr[i]);
//       print(i+1, arr, ans, n, sum, k);
//       sum-=arr[i];
//       ans.pop_back();
//       print(i+1,arr,ans,n,sum,k);
// }

//if the only one output is required then use this below technique
// bool print(int i,int arr[], vector<int>&ans, int n, int sum,int k){
//   //base case
//       if(i==n){
//         //if given condition is satisfies the return true;
//         if(sum==k){
//             for(auto it:ans) cout<<it<<" ";
//             return true;
//         }
//         //if given condition is false then return false;
//         else return false;
//       }
//       sum+=arr[i];
//       ans.push_back(arr[i]);
//       if(print(i+1, arr, ans, n, sum, k)==true){
//         return true;
//       }
//       sum-=arr[i];
//       ans.pop_back();
//       if(print(i+1,arr,ans,n,sum,k)==true) return true;

//       return false;
// }

// count of subsequence with sum k
int print(int i,int arr[], vector<int>&ans, int n, int sum,int k){
      if(i==n){
        if(sum==k){
            for(auto it:ans) cout<<it<<" ";
            cout<<endl;
            return 1;
        }
        else return 0;
      }
      sum+=arr[i];
      ans.push_back(arr[i]);
      int l=print(i+1, arr, ans, n, sum, k);
      sum-=arr[i];
      ans.pop_back();
      int r=print(i+1,arr,ans,n,sum,k);
      return l+r;
}
int main() {
    int arr[3]={1,2,1};
    vector<int>ans;
    int sum=0;
    int k=2;
    int cnt=print(0,arr,ans,3,sum,k);
    cout<<cnt;
    return 0;
}