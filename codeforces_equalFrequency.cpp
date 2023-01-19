#include <bits/stdc++.h>
using namespace std;

int main(){
	int t,n;
	string s;
	map<char,int> m;
	cin>>t;
	while(t--){
		cin>>n;
		cin>>s;
		for(int i=0;i<s.size();i++){
			m[s[i]]++;
		}
		for(auto &val: m){
			
			cout<<val.first<<" "<<val.second<<endl;
		}
		m.clear();
		cout<<endl;
	}

	return 0;
}