#include<bits/stdc++.h>
using namespace std;

// this is two sum problems solution
vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> ans;
    for(int i=0;i<nums.size();i++){
        for(int j=i+1;j<nums.size();j++){
            int a = target - nums[i];
            if(a==nums[j]){
                ans.push_back(i);
                ans.push_back(j);
            }
        }
    }
    return ans;
}
int main(){
    vector<int> nums = {1,2,3,4,5};
    int target = 3;
    vector<int> v = twoSum(nums,target);
    cout<<"{"<<v[0]<<", "<<v[1]<<"}";
    return 0;
}