#include<bits/stdc++.h>
using namespace std;

void print4(int n){
    for(int i=0;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}


int main() {
     int n;
    cout<<"Enter the number:";
    cin>>n;
    print4(n);
    return 0;
}

// 1         
// 2 2       
// 3 3 3     
// 4 4 4 4   
// 5 5 5 5 5