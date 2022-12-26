#include <bits/stdc++.h>
using namespace std;

void weird(long long n){
	cout<<n<<" ";
	if(n==1) return;
	if(n%2==0) n=n/2;
	else n=n*3+1;
	weird(n);
}
int main(){
	long long n;
	cin>>n;
	weird(n);
	return 0;
}