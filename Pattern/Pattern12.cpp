#include<bits/stdc++.h>
using namespace std;

void print12(int n){
    for(int i=1;i<=n;i++){

      //for numbers 
      for(int j=1;j<=i;j++){
        cout<<j<<" ";
      } 
  
      //for space 
      for(int k=1;k<=4*(n-i);k++){
        cout<<" ";
      }
      

      //for numbers 
      for(int j=i;j>0;j--){
        cout<<j<<" ";
      }

   cout<<endl;
    }
}


int main() {
     int n;
    cout<<"Enter the number:";
    cin>>n;
    print12(n);

    return 0;
}


// 1                 1 
// 1 2             2 1 
// 1 2 3         3 2 1 
// 1 2 3 4     4 3 2 1 
// 1 2 3 4 5 5 4 3 2 1 