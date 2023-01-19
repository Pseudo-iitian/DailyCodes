#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		if(k>=n){
			cout<<1<<"\n";
			continue;
		}
		int ans=n;
		for(int i=1;i<=sqrt(k);++i){
			if(n%i==0){
				if(i<=k) ans=min(ans,n/i);
				if(n/i<=k) ans=min(ans,i);
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}