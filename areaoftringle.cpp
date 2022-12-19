#include <bits/stdc++.h>
using namespace std;

int main(){


	int t;
	cin>>t;
	int x1,y1,x2,y2,x3,y3;
	map<int,int> m;
	int n=3;
	while(t--){
		while(n--){
			int x,y;
			cin>>x>>y;
			m[x]=y;
		}
		if((m[2]-m[0])>(m[1]-m[0])) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
		// cout<<a1<<" "<<a2<<" "<<a3<<endl;
		// cout<<x1<<y1<<x2<<y2<<x3<<y3<<endl;
	}
	return 0;
}