#include<bits/stdc++.h>
using namespace std;

//print name n times;
// void print(int i,int n){
//     if(i>n) return;
//     cout<<i<<") vicky"<<endl;
//     print(i+1,n);
// }

//print 1 to n linerly
// void print(int i,int n){
//     if(i>n) return;
//     cout<<i<<" ";
//     print(i+1,n);
// }

//print number by backtracking 
// void print(int i,int n){
//     if(i<1) return;
//     print(i-1,n);
//     cout<<i<<" ";   //this will not excute until the x<1 condition gets excuted after it's execution the other number gets print int sorted order
// }

//sum of n numbers
// void print(int i,int sum){
//     if(i<1){
//         cout<<sum;
//         return;
//     }
//     print(i-1,sum+i);
// }

//functional way to do it sum of N numbers
// int sum(int n){
//     if(n==0){
//         return 0;
//     }
//     return n+sum(n-1);
// }

// int factorial(int n){
//     if(n==0 || n==1) return 1;
//     return n*factorial(n-1);
// }

//check for factorial number that is less than given number 'n'
// long long factorial(long long n){
//     if(n==0 || n==1) return 1;
//     return n*factorial(n-1);
// }
// vector<long long> factorialNumbers(long long n) {
//     vector<long long>ans;
//      for(int i=1;i<=n;i++){
//         long long x=factorial(i);
//         if(x<=n) ans.push_back(x);
//         if(x>n) return ans;
//     }
//     return ans;
// }
int main() {
    long long n;
    cin>>n;
    // vector<long long>ans=factorialNumbers(n);
    // for(auto it:ans) cout<<it<<" ";
    return 0;
}