#include<bits/stdc++.h>
using namespace std;

void print17(int n){
    for(int i=0;i<n;i++){
     //for space = n-i-1
     for(int j=0;j<n-i-1;j++){
        cout<<" ";
     }

     //for character = 2*i+1
     char ch='A';
     int breakPoint = (2*i+1)/2;
     for(int k=1;k<=2*i+1;k++){
        cout<<ch;
        if(k<=breakPoint) ch++;
        else ch--;
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
    print17(n);
    return 0;
}


//     A    
//    ABA
//   ABCBA
//  ABCDCBA
// ABCDEDCBA