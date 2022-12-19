#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int n,count=0;
		long long h;
		cin>>n;
		int num=n;
		while(n!=0){
			long long val = 1 + 24*n;
			h = sqrt(val);
			h = (h-1)/6;
			long long num = (3*pow(h,2) + h)/2;
			n = n-num;
			count++;
		}
		cout<<count<<endl;
	}
	return 0;
}