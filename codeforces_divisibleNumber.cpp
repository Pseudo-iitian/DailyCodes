#include <bits/stdc++.h>
using namespace std;

int main(){

	int t;
	cin>>t;
	int a,b,c,d;
	for(int i=0;i<t;i++){
		cin>>a>>b>>c>>d;
		int din = a*b;
		int flag=0;
		for(int j=a+1;j<=c;j++){
			for(int k=b+1;k<=d;k++){
				int num = j*k;
				if(num%din==0){
					cout<<j<<" "<<k<<endl;
					flag=1;
					break;
				}
			}
			if(flag==1){
				break;
			}
		}
		if(flag==0){
			cout<<"-1 -1"<<endl;
		}
	}

	return 0;
}