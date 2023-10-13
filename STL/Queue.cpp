#include<bits/stdc++.h>
using namespace std;

void printQueue(){
    queue<int> q;
    q.push(1);  //{1}
    q.push(2);  //{1,2}
    q.emplace(3); //{1,2,3}

    cout<<q.back()+4<<endl;

    cout<<q.front()<<endl;

    q.pop();

    cout<<q.front()<<endl;

    cout<<q.size();

    //rest of the function are same as stack
}


int main() {
    printQueue();
    return 0;
}