#include<bits/stdc++.h>
using namespace std;

//check string is palidrome or not
// int start=0;
// bool isPalindrome(int start,string& str) {
//     int n=str.size();
//     if(str[start]!=str[n-start-1]){
//         return false;
//     }
//     if(start>=n/2) return true;
//     return isPalindrome(start+1,str);
// }

//Nth fibonacci number
int fibonacci(int n){
    if(n<=1) return n;
    return fibonacci(n-1)+fibonacci(n-2);
}
int main() {
    int n;
    cin>>n; 
    cout<<fibonacci(n);
    return 0;
}