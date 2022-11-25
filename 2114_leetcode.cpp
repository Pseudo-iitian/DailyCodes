#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int count,a=0;
        for(int i=0;i<sentences.size();i++){
            string s=sentences[i];
            count=1;
            for(int j=0;j<s.length();j++){
                if(s[j]==' '){
                    count++;
                }
            }
            a=max(a,count);
        }
        return a;
    }
};
int main(){
    Solution a;
    vector<string> sent = {"alice and bob love leetcode", "i think so too", "this is great thanks very much"};
    int res = a.mostWordsFound(sent);
    cout<<res;
    return 0;
}