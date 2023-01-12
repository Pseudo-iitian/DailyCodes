#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,k,count=0;
	vector<int> score;
	cin>>n>>k;
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		score.push_back(a);
	}
	for(int i=0;i<n;i++){
		if(score[i]>0){
			if(score[i]>=score[k-1]){
				count++;
			}
		}
	}
	cout<<count;	
	return 0;
}