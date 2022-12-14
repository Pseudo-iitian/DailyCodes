#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,n;
    vector<int> ans;
	cin>>t;
	for(int i=0;i<t;i++){
	    cin>>n;
	    ans.clear();
	    for(int j=0;j<n;j++){
    	    int a;
    	    cin>>a;
    	    ans.push_back(a);
	    }
	    int sum1=0,sum=0,res=0;
	    sum = n*(n+1)/2;
	    sum1 = accumulate(ans.begin(),ans.end(),0);
	    int ct = count(ans.begin(),ans.end(),n);
	    res =abs(sum-sum1);
	    if(res>=0 && ct<=1){
	        cout<<res<<endl;
	    }
	    else{
	        cout<<"-1"<<endl;
	    }
	}
	return 0;
}
