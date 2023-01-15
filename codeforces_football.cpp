#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	int ct0=0,ct1=0,flag=0;
	cin>>s;
	for(int i=0;i<s.size();++i){
		if(s[i]=='0'){
			ct1=0;
			ct0++;
		}
		else{
			ct0=0;
			ct1++;
		}
		if(ct0>=7 || ct1>=7){
			flag=1;break;
		}
	}
	if(flag) cout<<"YES";
	else cout<<"NO";
	return 0;
}