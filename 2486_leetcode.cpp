#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int appendCharacters(string s, string t) {
        int j=0;
        for(int i=0;i<s.size();i++){
            if(s[i]==t[j]){
                j++;
            }
            if(j==t.size()) return 0;
        }
        return t.size()-j;
    }
};
int main(){
    Solution a;
    string s = "abcde";
    string t = "abc";
    cout<<a.appendCharacters(s,t);
    return 0;
}