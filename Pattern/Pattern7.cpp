#include<bits/stdc++.h>
using namespace std;

void print7(int n){
    for(int i=0;i<n;i++){
     //for space = n-i-1
     for(int j=0;j<n-i-1;j++){
        cout<<" ";
     }

     //for star = 2*i+1
     for(int k=0;k<2*i+1;k++){
        cout<<"*";
     }

     //for space = n-i-1
     for(int j=0;j<n-i-1;j++){
        cout<<" ";
     }
    cout<<endl;
    }
}

int main() {
    int n;
    cout<<"Enter the number:";
    cin>>n;
    print7(n);
    return 0;
}


//     *    
//    ***
//   *****
//  *******
// *********