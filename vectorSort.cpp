#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

 // https://www.hackerrank.com/challenges/vector-sort/problem?isFullScreen=true

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    vector<int> v;
    while(n--){
        int a;
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    for(auto val : v){
        cout<<val<<" ";
    }
    return 0;
}