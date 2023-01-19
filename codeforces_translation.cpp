#include <bits/stdc++.h>
using namespace std;

bool istrue(string s, string t){
	int sl = s.size();
	int tl = t.size();
	int mx = max(sl,tl);
	for(int i=0;i<mx;++i){
		if(s[i]!=t[tl-1-i]){
			return false;
		}
	}
	return true;
}
int main(){
	string t,s;
	cin>>s>>t;
	if(istrue(s,t)) cout<<"YES";
	else cout<<"NO";
	return 0;
}