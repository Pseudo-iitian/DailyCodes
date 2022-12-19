#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,depth=0,mx;
	cin>>t;
	for(int i=0;i<t;i++){
		string s;
		cin>>s;
		stack<char> st;
		depth=0;
		mx=INT_MIN;
		for(int j=0;j<s.size();j++){
			char a = s[j];
			if(a=='<'){
				st.push(a);
				depth=0;
			}
			else{
				if(st.empty()){
					break;
				}
				if(a=='>'){
					st.pop();
					depth++;
				}
			}
		}
		cout<<depth*2<<endl;
	}
	return 0;
}
