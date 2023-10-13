#include<bits/stdc++.h>
using namespace std;

    void print22(int n) {
        for(int i=0;i<2*n-1;i++){
            for(int j=0;j<2*n-1;j++){
                int top=i;
                int left=j;
                int right=(2*n-2)-j;
                int bottom = (2*n-2)-i;
                cout<<(n-min(min(top,bottom),min(left,right)))<<" ";
            }
            cout<<endl;
        }
    }
int main() {
     int n;
    cout<<"Enter the number:";
    cin>>n;
    print22(n);

    return 0;
}


// 5 5 5 5 5 5 5 5 5 
// 5 4 4 4 4 4 4 4 5 
// 5 4 3 3 3 3 3 4 5 
// 5 4 3 2 2 2 3 4 5 
// 5 4 3 2 1 2 3 4 5 
// 5 4 3 2 2 2 3 4 5 
// 5 4 3 3 3 3 3 4 5 
// 5 4 4 4 4 4 4 4 5 
// 5 5 5 5 5 5 5 5 5 
