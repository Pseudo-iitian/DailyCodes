#include <cmath>
#include <cstdio>
#include <vector>
#include<bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;
    map<string,int> m;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s;
        if(m[s]>=1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        m[s]++;
    }
    return 0;
}
