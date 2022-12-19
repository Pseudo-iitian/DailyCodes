#include <bits/stdc++.h>
using namespace std;

int main(){
	int t,n;
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>n;
		long long ans[n];
		for(int j=0;j<n;j++){
			cin>>ans[j];
		}

		int count=0;
		long long sum=0;
		sum = accumulate(ans,ans+n,0);
		while(sum%2!=0){
    		long long min = *min_element(ans,ans+n);
			int index = find(ans,ans+n,min)-ans;
			ans[index]/=2;
			sum = accumulate(ans,ans+n,0);
			count++;

		}
		cout<<count<<endl;
	}
	return 0;
}