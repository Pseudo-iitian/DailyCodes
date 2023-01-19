#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		int index=0;
		cin>>n;
		int likes[n],comment[n];
		for(int i=0;i<n;++i){
			cin>>likes[i];
		}
		for(int j=0;j<n;++j){
			cin>>comment[j];
		}
		int res=INT_MIN;
		for(int i=0;i<n;++i){
			if(res<likes[i]){
				res=likes[i];
				index=i;
			}
		}
		int ct = count(likes,likes+n,res);
		int ans = INT_MIN;
		int newindex=0;
		if(ct>=2){
			for(int i=0;i<n;++i){
				if(res==likes[i]){
					if(ans<comment[i]){
						ans=comment[i];
						newindex=i;
					}
				}
			}
			cout<<newindex+1<<endl;
		}
		else{
			cout<<index+1<<endl;
		}
	}
	return 0;
}