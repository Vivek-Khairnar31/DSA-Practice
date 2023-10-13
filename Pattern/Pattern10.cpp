#include<bits/stdc++.h>
using namespace std;

void print2(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void print5(int n)
  { 
    for(int i=2;i<=n;i++){
        for(int j=0;j<n-i+1;j++){
         cout<<"* ";
        }
        cout<<endl;
    }
    }



int main() {
    int n;
    cout<<"Enter the number:";
    cin>>n;
    print2(n);
    print5(n);
    return 0;
}


// *     
// * *   
// * * * 
// * * * *
// * * * * *
// * * * *
// * * *
// * *
// *