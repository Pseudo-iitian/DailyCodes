#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;
	char a = s[0];
	if(a>=97){
		s[0]=(char)(a-32);
	}
	cout<<s;
	return 0;
}