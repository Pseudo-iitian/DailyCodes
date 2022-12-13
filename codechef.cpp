#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	cin>>t>>n;
	vector<int> ans;
	for(int i=0;i<n;i++){
	    int a;
	    cin>>a;
	    ans.push_back(a);
	}
	int res=0;
	int mn=INT_MAX;
	for(int i=0;i<n;i++){
	    mn=min(mn,ans[i]);
	    cout<<mn<<endl;
	    res+=mn;
	}
	cout<<res;
	return 0;
}
