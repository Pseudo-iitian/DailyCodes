#include <bits/stdc++.h>
using namespace std;

const int N=1e6;
long long pref[N];

int main(){
	int n,q;
	cin>>n>>q;
	int a[n+10];
	for(int i=1;i<=n;++i){
		cin>>a[i];
		pref[i]=pref[i-1]+a[i];
	}
	while(q--){
		int x,y;
		cin>>x>>y;
		cout<<(pref[y]-pref[x-1])<<"\n";
	}
	return 0;
}