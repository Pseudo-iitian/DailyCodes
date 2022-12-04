#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int res = -1;
        for(int i=0;i<accounts.size();i++){
            int sum = accumulate(accounts[i].begin(),accounts[i].end(),0);
            res = max(res,sum);
        }
        return res;
    }
};
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    vector<vector<int>> accounts={{1,2,3},{3,2,1}};
    Solution a;
    cout<<a.maximumWealth(accounts);

    return 0;
}