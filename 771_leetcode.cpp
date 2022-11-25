#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char> s;
        int count=0;
        for(int i=0;i<jewels.length();i++){
            s.insert(jewels[i]);
        }
        for(int i=0;i<stones.length();i++){
            auto it = s.find(stones[i]);
            if(it!=s.end()){
                count++;
            }
        }
        return count;
    }
};

int main(){
    Solution a;
    string a1 = "aA";
    string b = "aAAbbb";
    int res = a.numJewelsInStones(a1,b);
    cout<<res;
    return 0;
}
