#include <bits/stdc++.h>
using namespace std;

const int N= 2*1e9+10;
long long a[N+1];
int main(){
	for(int i=1;i<=N;++i){
		int n=i;
		int sum=1;
		while(n!=0){
			int r=n%10;
			sum=sum*r;
			n=n/10;
		}
		a[i]=sum;
	}
	long n;
	cin>>n;
	return 0;
}