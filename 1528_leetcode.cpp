#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        map<int,char> m;
        for(int i=0;i<s.length();i++){
            m[indices[i]]=s[i];
        }
        string str;
        for(int i=0;i<m.size();i++){
            str.push_back(m[i]);
        }
        return str;
    }
};

int main(){
    Solution a;
    vector<int> v = {4,5,6,7,0,2,1,3};
    string s = a.restoreString("codeleet",v);
    cout<<s;
    return 0;
}
