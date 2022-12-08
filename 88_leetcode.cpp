#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> nums3;
        for(int i=0;i<m;i++){
            int a = nums1[i];
            nums3.push_back(a);
        }
        for(int i=0;i<n;i++){
            int a = nums2[i];
            nums3.push_back(a);
        }
        nums1=nums3;
        sort(nums1.begin(),nums1.end());
    }
};
int main(){
    Solution a;
    vector<int> nums1 = {1,2,3,0,0,0};
    int m=3;
    vector<int> nums2 = {2,5,6};
    int n=3;
    a.merge(nums1,m,nums2,n);
    return 0;
}