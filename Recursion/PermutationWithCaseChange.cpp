#include<bits/stdc++.h>
using namespace std;
void helper(string s, int n, int i, string temp, vector<string>&ans){
    if(s.size()==0){
        ans.push_back(temp);
        return;
    }
    string op1=temp;
    string op2=temp;
    op1.push_back(s[0]);
    op2.push_back(toupper(s[0]));
    s.erase(s.begin()+0);
    helper(s,n,i,op1,ans);
    helper(s,n,i,op2,ans);
}
int main() {
    string s="ab";
    int i=0;
    vector<string>ans;
    string temp;
    helper(s,2,i,temp,ans);
    for(auto it:ans) cout<<it<<" ";
    return 0;
}