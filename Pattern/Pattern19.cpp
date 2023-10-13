#include<bits/stdc++.h>
using namespace std;

    void print19(int n) {
          int iniSpace = 0;
        for(int i= 0 ; i<n;i++){
                  
            //for star
            for(int j = 0;j<n-i;j++){
                cout<<"*";
            }
          
            //for space
            for(int k=1;k<=iniSpace;k++){
                cout<<" ";
            }
            
            
              //for star
         for(int j = 0;j<n-i;j++){
                cout<<"*";
            }
            cout<<endl;
            iniSpace = iniSpace+2;
        }
        
        int space = (2*n)-2;
      for(int i=0;i<n;i++){
                 for(int j = 0;j<i+1;j++){
                cout<<"*";
            }
          
            //for space
            for(int k=1;k<=space;k++){
                cout<<" ";
            }
            
            
              //for star
         for(int j = 0;j<i+1;j++){
                cout<<"*";
            }
            cout<<endl;
            space -= 2;
      }
    }

int main() {
     int n;
    cout<<"Enter the number:";
    cin>>n;
    print19(n);

    return 0;
}

// **********
// ****  ****
// ***    ***
// **      **
// *        *
// *        *
// **      **
// ***    ***
// ****  ****
// **********