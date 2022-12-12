#include<bits/stdc++.h>
using namespace std;

// https://www.hackerrank.com/contests/k3-hour/challenges/alex-unique-numbers/copy-from/1353489162
int main(){

	int n;
	cin>>n;
	vector<int> num;
	map<int,int> m;
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		num.push_back(a);
	}

	for(int i=0;i<n;i++){
		m[num[i]]++;
	}

	int g=0;
	int size = m.size();
	for(int i=0;i<n;i++){
		int b = num[i];
		m[b]=m[b]-1;
		cout<<size<<endl;
		if(m[b]==0){
			size = size-1;
		}
	}

	return 0;
}