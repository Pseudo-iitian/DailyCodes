#include<bits/stdc++.h>
using namespace std;

int main(){

	int n,m;
	cin>>n>>m;
	set<int> a;
	for(int i=0;i<n;i++){
		int value;
		cin>>value;
		a.insert(value);
	}

	int var = -m;
	for(int i=0;i<n;i++){
		auto it = a.find(var);

		if(it==a.end()){
			cout<<var;
			break;
		}

		var++;
	}


	return 0;
}