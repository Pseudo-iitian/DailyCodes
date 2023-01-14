#include <bits/stdc++.h>
using namespace std;

int main(){
	int x;
	cin>>x;
	int count = 0;
	while(x!=0){
		if(x>=5){
			x = x - 5;
		}
		else if(x>=4){
			x = x - 4;
		}
		else if(x>=3){
			x = x - 3;
		}
		else if(x>=2){
			x = x - 2;
		}
		else if(x>=1){
			x = x - 1;
		}
		count++;
	}
	cout<<count;
	return 0;
}