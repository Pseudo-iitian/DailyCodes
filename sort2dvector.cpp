#include<bits/stdc++.h>
using namespace std;

int kthSmallest(vector<vector<int>>& matrix, int k) {
    vector<int> ans;
    for(int i=0;i<matrix.size();i++){
        vector<int> temp = matrix[i];
        ans.insert(ans.begin(),temp.begin(),temp.end());
    }
    sort(ans.begin(),ans.end());
    return ans[k-1];
}
int main(){
	vector<vector<int>> matrix = {{1,5,9},{10,11,13},{12,13,15}};
	int k=8;
	int a = kthSmallest(matrix,k);
	cout<<a<<endl;


	return 0;
}