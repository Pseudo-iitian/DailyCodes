#include <bits/stdc++.h>
using namespace std;

// 3 distinct positive divisor
// perfect square of a prime number has 3 factors
// 3^2 = 9 -> 1,3,9
// 2^2 = 4 -> 1,2,4
// 5^2 = 25 -> 1,5,25
// we have to conclude only perfect square of prime


bool isprime(int n){
	for(int i=2;i<=sqrt(n);++i){
		if(n%i==0) return false;
	}
	return true;
}
int main(){

	const int N = 1e6+10;
	set<long long> prmSq; // default initialized by 0

	for(int i=2;i<=N;++i){
		if(isprime(i)) prmSq.insert((i*1ll*i));
	}
	int n;
	cin>>n;
	while(n--){
		long long val;
		cin>>val;
		if(prmSq.find(val)!=prmSq.end()) cout<<"YES"<<"\n";
		else cout<<"NO"<<"\n";
	}
	return 0;
}