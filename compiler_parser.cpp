#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	string s;
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>s;
		int index=0,start,end;
		int flag=0;
		for(int j=0;j<s.size();j++){
			if(s[j]=='<'){
				flag++;
			}
			else{
		 		flag--;
			}
			if(flag==0) index = j+1;
			if(flag<0) break;
		}
		cout<<index<<endl;
	}
	return 0;
}
