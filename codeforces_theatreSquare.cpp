#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,m,a,res;
    cin>>n>>m>>a;
    res = ceil(n/(double)a)*ceil(m/(double)a);
    cout<<res;
    return 0;
}