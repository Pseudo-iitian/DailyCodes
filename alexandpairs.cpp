#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include<bits/stdc++.h>
#include <algorithm>
using namespace std;


int main() {

    int n;
    cin>>n;
    int a[n];
    unordered_map<int,int> m;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        int val =a[i]-i;
        m[val]++;
    }
    int ans = 0;
    for(auto &val : m){
        int ct = val.second;
        ans += (ct*(ct-1))/2;
    }
    cout<<ans;
    return 0;
}
