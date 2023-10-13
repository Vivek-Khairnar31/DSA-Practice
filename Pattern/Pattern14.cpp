#include<bits/stdc++.h>
using namespace std;

void print14(int n) {
        
        for(int i=0;i<n;i++){
            for(char j='A';j<='A'+i;j++){
                cout<<j<<" ";
               
            }
            cout<<endl;
            
        }
    }

int main() {
     int n;
    cout<<"Enter the number:";
    cin>>n;
    print14(n);

    return 0;
}

// A 
// A B
// A B C
// A B C D
// A B C D E