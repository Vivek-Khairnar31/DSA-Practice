#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;

    //pre calculation
    int hashh[26]={0};
    for(int i=0;i<s.size();i++){
        hashh[s[i]-'a']++;
    }
     int q;
     cin>>q;
     while(q--){
        char ch;
        cin>>ch;
        cout<<hashh[ch-'a']<<endl;

     }
    return 0;
}