#include<bits/stdc++.h>
using namespace std;
vector<int> targetIndices(vector<int>& nums, int target) {
	vector<int> ans;
	sort(nums.begin(),nums.end());
	for(int i=0;i<nums.size();i++){
		if(target==nums[i]){
			ans.push_back(i);
		}
	}
	return ans;
}
int main(){


	vector<int> num = {1,2,5,2,3};
	int target = 2;
	vector<int> ans = targetIndices(num,target);

	for(auto &var:ans){
		cout<<var<<" ";
	}


	return 0;
}