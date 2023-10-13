#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int hashh[13]={0};
    for(int i=0;i<13;i++){
        hashh[arr[i]] +=1;
    }
    
    int q;
    cin>>q;
    while(q--){
        int number;
        cin>>number;
        cout<<hashh[number]<<endl;
    }
    return 0;
}