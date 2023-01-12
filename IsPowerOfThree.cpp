#include <bits/stdc++.h>
using namespace std;

bool isPowerOfThree(int n) {
	int r = n;
	int count = 0;
	while(r>1){
		r = r/3;
		count++;
	}
	int pval = pow(3,count);
	if(n==pval){
		return true;
	}
	return false;
}
int main(){
	int n;
	cin>>n;
	cout<<isPowerOfThree(n);

	return 0;
}