#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,depth,mx=INT_MIN;
	cin>>t;
	int flag=0,index,symcount=1,mxsim=-10;
	for(int i=0;i<t;i++){
		int a,count;
		cin>>a;
		if(a==1){
			flag++; count=0;
		}
		else{ 
			flag--;
			count++;
		}
		if(flag==0){ 
			depth = count;
			index=i+1;
			mx = max(mx,depth);
			mxsim = max(symcount,mxsim);
			symcount=0;
		}
		else{
			symcount++;
		}
	}
	cout<<mx<<" "<<mxsim;
	return 0;
}
