#include<bits/stdc++.h>
using namespace std;

int main(){

	string s;
	cin>>s;
	map<char,int> m;

	for(int i=0;i<s.size();i++){
		char a = s[i];
		m[a]++;
	}

	for(auto &var:m){
		cout<<var.first<<" "<<var.second<<endl;
	}

	return 0;
}