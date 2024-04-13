#include<bits/stdc++.h>
using namespace std;

// void print(int i, int n, string s,string temp){
//     if(i>=n){
//         if(temp.size()==0) cout<<"{}";
//         for(auto it:temp) cout<<it;
//         cout<<endl;
//         return;
//     }
//     print(i+1,n,s,temp);
//     temp.push_back(s[i]);
//     print(i+1,n,s,temp);
//     temp.pop_back();
// }

//aditya verma's approach 
void print(string s, string &temp){
    if(s.size()==0){
        if(temp.size()==0) cout<<"{}";
        for(auto it:temp) cout<<it;
        cout<<endl;
        return;
    }
    string op1=temp;
    string op2=temp;
    op2.push_back(s[0]);
    s.erase(s.begin()+0);
    // cout<<s[0];
    print(s,op1);
    print(s,op2);
}
int main() {
    string s="abcd";
    string temp="";
    // print(0,2,s,temp);
    print(s,temp);
    return 0;
}