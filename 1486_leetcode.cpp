#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int xorOperation(int n, int start) {
        int nums[n];
        int ans=0;
        for(int i=0;i<n;i++){
            nums[i] = start+2*i;
            ans = ans^nums[i];
        }
        return ans;
    }
};
int main(){
    Solution a;
    int res = a.xorOperation(5, 0);
    cout<<res;
    return 0;
}