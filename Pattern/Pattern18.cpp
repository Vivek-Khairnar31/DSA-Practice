#include<bits/stdc++.h>
using namespace std;

void print18(int n) {
        
      for(int i=0;i<n;i++){
           char ch='A'+(n-1);
          for(int j=0; j<=i; j++){
              cout<<ch<<" ";
              ch--;
          }
          cout<<endl;
      }
    }

int main() {
     int n;
    cout<<"Enter the number:";
    cin>>n;
    print18(n);

    return 0;
}

// E 
// E D
// E D C
// E D C B
// E D C B A