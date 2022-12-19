#include<bits/stdc++.h>
using namespace std;

int main(){
    priority_queue<int, vector<int>, greater<int> > pq; // min heap -> bade se chota
    // push, pop, top, empty, size
    pq.push(1);
    pq.push(2);
    pq.push(3);
    pq.push(4);
    pq.push(5);
    // O(n) time complexity
    // it behaves as multiset
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    return 0;
}