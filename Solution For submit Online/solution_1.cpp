#include<bits/stdc++.h>
using namespace std;
bool canWeFind(vector<int> stalls,int dist,int k){
    int cnt=1;
    int last=stalls[0];
    for(int i=1;i<stalls.size();i++){
        if(stalls[i]-last>=dist){
            cnt++;
            last=stalls[i];
        }
    }
 return cnt>=k;
}
int aggressiveCows(vector<int> &stalls, int k)
{
    int n=stalls.size();
    sort(stalls.begin(),stalls.end());
    int start=1,end=stalls[n-1]-stalls[0];
    while(start<=end){
        int mid=start+(end-start)/2;
        bool flag=canWeFind(stalls,mid,k);
        if(flag == true){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return end;
}
int main() {
    
    int t;
    cin>>t;
    while(t--){
        int n,c;
        cin>>n>>c;
        vector<int>stalls;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            stalls.push_back(temp);
        }
       int ans=aggressiveCows(stalls,c);
       cout<<ans;
    }
    return 0;
}