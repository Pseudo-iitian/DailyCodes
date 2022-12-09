#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v;
    v = {9,9,9,9};
    for(int i=v.size()-1;i>=0;i--){
        if(v[i]==9){
            v[i]=0;
        }
        else{
            v[i]++;
            break;   
        }
    }
    vector<int> ans;
    if(v[0]==0){
        ans.push_back(1);
        v.insert(v.begin(),ans.begin(),ans.end());
    }
    for(auto &var: v){
        cout<<var<<" ";
    }
    return 0;
}
