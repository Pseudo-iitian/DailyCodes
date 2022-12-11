#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin>>n;
	vector<int> num;
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		num.push_back(a);
	}

	sort(num.begin(),num.end());

	for(auto &var : num){
		cout<<var<<" ";
	}
	return 0;
}