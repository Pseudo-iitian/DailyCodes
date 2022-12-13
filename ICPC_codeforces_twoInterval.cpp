#include <bits/stdc++.h>
using namespace std;

int main(){

	int l1,r1,l2,r2;
	cin>>l1>>r1>>l2>>r2;
	int ans1,ans2;
	ans1=max(l1,l2);
	ans2=min(r1,r2);
	if(ans1>ans2){
		cout<<"-1";
		return 0;
	}
	else{
	}
	cout<<ans1<<" "<<ans2;

	return 0;
}