#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	long a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int count;
	for(int j=0;j<n;j++){
		count=0;
		for(int i=1;i<=a[j];i++){
			if(a[j]%i==0) count++;
		}
		if(count==3) cout<<"YES"<<"\n";
		else cout<<"NO"<<"\n";
	}
	return 0;
}