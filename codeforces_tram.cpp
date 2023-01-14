#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,a,b;
	cin>>n;
	int sum =0,mx=INT_MIN;
	while(n--){
		cin>>a>>b;
		sum = sum - a;
		sum = sum + b;
		mx = max(mx,sum);
	}
	cout<<mx;
	return 0;
}