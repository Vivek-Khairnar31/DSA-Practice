#include<bits/stdc++.h>
using namespace std;

void print8(int n){
    for(int i=0;i<n;i++){
     //for space = i
     for(int j=0;j<i;j++){
        cout<<" ";
     }

     //for star = (n-i)+(n-i+1) or (2*n)-(2*i+1)
     for(int k=0;k<(n-i)+(n-i-1);k++){
        cout<<"*";
     }

     //for space = i
     for(int j=0;j<i;j++){
        cout<<" ";
     }
    cout<<endl;
    }
}

int main() {
    int n;
    cout<<"Enter the number:";
    cin>>n;
    print8(n);
    return 0;
}

// *********
//  *******
//   *****
//    ***
//     *