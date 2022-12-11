#include <bits/stdc++.h>
using namespace std;
vector<int> smallerNumbersThanCurrent(vector<int>& nums) {

	int count;
	vector<int> ans;
	for(int i=0;i<nums.size();i++){
		count=0;
		for(int j=0;j<nums.size();j++){
			if(nums[i]>nums[j]){
				count++;
			}
		}

		ans.push_back(count);
	}
	return ans;

}
int main(){

	vector<int> nums = {8,1,2,2,3};
	vector<int> ans = smallerNumbersThanCurrent(nums);

	for(auto & var: ans){
		cout<<var<<" ";
	}

	return 0;
}
