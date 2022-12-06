#include <bits/stdc++.h>

using namespace std;
int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
    int count =0;
    if(ruleKey=="color"){
        for(int i=0;i<items.size();i++){
            string s = items[i][1];
            if(s==ruleValue){
                count++;
            }
        }
    }
    else if(ruleKey=="type"){
        for(int i=0;i<items.size();i++){
            string s = items[i][0];
            if(s==ruleValue){
                count++;
            }
        }
    }
    else if(ruleKey=="name"){
        for(int i=0;i<items.size();i++){
            string s = items[i][2];
            if(s==ruleValue){
                count++;
            }
        }
    }
    return count;
}
int main()
{
    vector<vector<string> > v;
    v={{"phone","blue","pixel"},{"computer","silver","lenovo"},{"phone","gold","iphone"}};
    string rulekey="color",rulevalue="silver";
    cout<<countMatches(v,rulekey,rulevalue);
    return 0;
    
}
