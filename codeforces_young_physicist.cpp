#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,a,b,c;
	cin>>n;
	int sumx=0,sumy=0,sumz=0;
	for(int i=0;i<n;i++){
		cin>>a>>b>>c;
		sumx+=a;
		sumy+=b;
		sumz+=c;
	}
	if(sumz==0 && sumx==0 && sumy==0) cout<<"YES";
	else cout<<"NO";
	return 0;
}