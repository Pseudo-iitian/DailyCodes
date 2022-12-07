#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string sortSentence(string s) {
        string ans;
        map<int,string> m;
        stringstream ss(s);
        vector<string> res;
        string word;
        while(ss>>word){
            res.push_back(word);
        }
        for(int i=0;i<res.size();i++){
            string s = res[i];
            int n = s.size();
            string str = s.substr(0,n-1);
            string integer = s.substr(n-1,n);
            // cout<<str<<" ";
            int value = stoi(integer);
            m[value]=str;    
            
        }
        for(int i=0;i<m.size();i++){
            if(i==m.size()-1 || i==0){
                ans = ans + m[i];
            }
            else{
                ans = ans + m[i]+ " ";
            }
        }
        return ans;
    }
};
int main(){
    Solution a;
    cout<<a.sortSentence("is2 sentence4 This1 a3");
    return 0;
}