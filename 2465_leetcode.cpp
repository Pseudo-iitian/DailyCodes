#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        multiset<int> num;
        set<double> nst;
        for(int i=0;i<nums.size();i++){
            int a = nums[i];
            num.insert(a);
        }
        while(num.size()!=0){

            auto a = *max_element(num.begin(),num.end());
            auto b = *min_element(num.begin(),num.end());

            float avg = 1.0*((a)+(b))/2;
            nst.insert(avg);
            num.erase(num.find(a));
            num.erase(num.find(b));
        }
        return nst.size();
    }
};
int main(){
    Solution a;
    vector<int> n = {2,3,4,5,6};
    a.distinctAverages(n);
    return 0;
}