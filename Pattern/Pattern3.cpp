#include<bits/stdc++.h>
using namespace std;

void print3(int n){
     for(int i=0;i<=n;i++){
        for(int j=1;j<i+1;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}


int main() {
    int n;
    cout<<"Enter the number:";
    cin>>n;
    print3(n);
    return 0;
}

// 1 
// 1 2 
// 1 2 3 
// 1 2 3 4 