#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;
        for(int i=0;i<=n;i++){
            int count =0;
            int b = i;
            while(b!=0){
                int r = b&1;
                if(r==1){
                    count++;
                }
                b=b>>1;
            }
            ans.push_back(count);
        }
        return ans;
    }
};

int main(){
    Solution a;
    int n;
    cin>>n;
    vector<int> v = a.countBits(n);
    for(auto &val : v){
        cout<<val<<" ";
    }
}