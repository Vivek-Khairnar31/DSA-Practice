#include<bits/stdc++.h>
using namespace std;

    void print20(int n) {
      int space = (2*n)-2;
      for(int i=1;i<=2*n-1;i++){
            
            int star = i;
            if(i>n) star = 2*n-i;
            
            
            for(int j = 0;j<star;j++){
                cout<<"*";
            }
          
            //for space
            for(int k=1;k<=space;k++){
                cout<<" ";
            }
            
            
              //for star
         for(int j = 0;j<star;j++){
                cout<<"*";
            }
            cout<<endl;
          if(i<n) space -=2;
          else space +=2;
      }
    }
int main() {
     int n;
    cout<<"Enter the number:";
    cin>>n;
    print20(n);

    return 0;
}


// *        *
// **      **
// ***    ***
// ****  ****
// **********
// ****  ****
// ***    ***
// **      **
// *        *