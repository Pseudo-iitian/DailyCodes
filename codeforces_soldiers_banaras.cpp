#include <bits/stdc++.h>
using namespace std;


int main(){
	int k,n,w;
	cin>>k>>n>>w;
	long sum =0;
	for(int i=1;i<=w;i++){
		sum+=(i*k);
	}
	if((sum-n)<=0) cout<<0;
	else cout<<(sum-n);
	return 0;
}