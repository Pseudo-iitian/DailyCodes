#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,k;
	cin>>n>>k;
	vector<int> ans;
	vector<int> res;
	for(int i=2;i<=sqrt(n);++i){
		while(n%i==0){
			ans.push_back(i);
			n=n/i;
		}
	}
	if(n>1) ans.push_back(n);
	if(ans.size()<k){
		cout<<-1;
		return 0;
	}
	int sum=1;
	for(int i=0;i<ans.size();++i){
		if(i<k-1) res.push_back(ans[i]);
		else{
			sum = sum*ans[i];
		}
	}
	res.push_back(sum);
	for(int i=0;i<res.size();++i){
		cout<<res[i]<<" ";
	}
	return 0;
}