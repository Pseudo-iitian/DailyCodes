#include <bits/stdc++.h>
using namespace std;

int main(){
	int n=5;
	vector<vector<int>> matrix;
	int start,end,moves=0;
	for(int i=0;i<n;i++){
		vector<int> temp;
		for(int j=0;j<n;j++){
			int a;
			cin>>a;
			if(a==1){
				start=i;end=j;
			}
			temp.push_back(a);
		}
		matrix.push_back(temp);
	}
	moves = abs(start-2) + abs(end-2);
	cout<<moves;
	return 0;
}