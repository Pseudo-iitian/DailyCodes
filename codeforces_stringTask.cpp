#include <bits/stdc++.h>
using namespace std;

string dot(string s){
	string str;
	for(int i=0;i<s.size();i++){
		str.push_back('.');
		str = str + s[i];
	}
	return str;
}
int main(){
	string s;
	cin>>s;
	transform(s.begin(),s.end(),s.begin(),::tolower);
	for(int i=0;i<s.size();++i){
		if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='y'){
			s=s.replace(i,1,"");
			i=i-1;
		}
	}
	cout<<dot(s);
	return 0;
}