#include<bits/stdc++.h>
using namespace std;

// int stair(int n){
// 	if(n==1){
// 		return 1;
// 	}
// 	else if(n==2){
// 		return 2;
// 	}
// 	return stair(n-1)+stair(n-2);
// }

int main(){

	int n;
	cin>>n;
	// cout<<stair(n);
	int a=1,b=2,c;
	for(int i=1;i<=n-2;i++){
		c=a+b;
		a=b;
		b=c;
	}
	cout<<c;
	return 0;
}