#include<bits/stdc++.h>
using namespace std;
void armstrong(int n){
	int num=0,sum=0,dup=n;
		int cnt =0;
		int temp=n;
	while(n!=0){
		num = n % 10;
		n/=10;
		cnt++;
	}
	while(dup!=0){
		int num2=dup%10;
		int cubes = pow(num2,cnt);
        sum += cubes;
		dup/=10;
	}
    cout<<sum;
}
int main() {
    int j;
    cin>>j;
    armstrong(j);
    return 0;
}

// int sumOfAllDivisors(int n){
// 	int sum=0;
// 	while(n!=0){
// 		for(int i=1;i<=n;i++){
//                   if (n % i == 0) {
//                     sum = sum + i;
//                   }
//                 }
// 		n--;
// 	}	
// 	return sum;
// }