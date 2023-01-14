#include <bits/stdc++.h>
using namespace std;

int lucky(string s){
	int count=0;
	for(int i=0;i<s.size();i++){
		if(s[i]=='4' || s[i]=='7'){
			count++;
		}
	}
	return count;
}
int main(){
	string s;
	cin>>s;
	int ct = lucky(s);
	if(ct==4 || ct==7) cout<<"YES";
	else cout<<"NO";
	return 0;
}