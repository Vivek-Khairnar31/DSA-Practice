#include<bits/stdc++.h>
using namespace std;
void isPrime(int n)
   
{   
    vector<int> ans;
    int count=0;
	while(n!=0){
		for(int i=1;i<=n;i++){
			if(n%i==0){
				count++;
                ans.push_back(i);
			}
		}
		n/=10;
	}
	if(count==2) for(auto it : ans){
       cout<<it<<" ";
    }
	else  cout<<count;
}

int main() {
    
    int n;
    cin>>n;
   isPrime(n);
    return 0;
}