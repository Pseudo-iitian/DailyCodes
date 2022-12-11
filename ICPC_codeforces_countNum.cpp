#include <bits/stdc++.h>
using namespace std;

int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,q,z,x;
	cin>>n>>q;
	vector<int> a;
	int ct=0;
	for(int i=0;i<q;i++){
		cin>>z>>x;
		if(z==1){
			a.push_back(x);
		}
		else if(z==2){
			ct = count(a.begin(),a.end(),x);
			cout<<ct<<endl;
		}
	}

	return 0;
}