#include<bits/stdc++.h>
using namespace std;

void printDigit(int n){
    int x = 0,sum=0;
   while(n!=0){
    x = n%10;
    sum++;
    n/=10;    
   }
   cout<<sum;
}


int main() {
    int num;
    cout<<"Enter the number:";
    cin>>num;
    printDigit(num);
    return 0;
}