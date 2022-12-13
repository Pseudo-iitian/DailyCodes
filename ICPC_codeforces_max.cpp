#include<bits/stdc++.h>
using namespace std;
int main(){

	int n;
	cin>>n;
	int num[n];
	for(int i=0;i<n;i++){
		cin>>num[i];
	}
	sort(num,num+n);
	int res = num[n-1];
	cout<<res;

	return 0;
}