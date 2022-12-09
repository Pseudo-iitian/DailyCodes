#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        auto it = lower_bound(nums.begin(),nums.end(),target);
        int index = (it-nums.begin());
        return index;
    }
};
int main(){
    Solution a;
    vector<int> nums = {3,4,5,6,8};
    cout<<a.searchInsert(nums,4);
    return 0;
}