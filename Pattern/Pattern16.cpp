#include<bits/stdc++.h>
using namespace std;

void print16(int n) {
        
        for(int i=0;i<n;i++){
            char ch='A'+i;
            for(int j=1;j<=i+1;j++){
                cout<<ch<<" ";
                
            }
            cout<<endl;
            
        }
    }

int main() {
     int n;
    cout<<"Enter the number:";
    cin>>n;
    print16(n);

    return 0;
}


// A 
// B B
// C C C
// D D D D
// E E E E E