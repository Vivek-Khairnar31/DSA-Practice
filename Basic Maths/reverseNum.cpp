#include <iostream>
#include <bitset>
using namespace std;
void palindrome(int n)
{
   int x=0,reverseNum=0;
   while(n!=0){
       x=n%10;
       reverseNum = (reverseNum*10)+x;
       n/=10;
   }
   cout<<reverseNum<<" ";
}
int main() {
  int num;
  cin>>num;
  palindrome(num);
   
}
