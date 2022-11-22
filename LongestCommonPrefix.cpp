#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<string> str = {"flower","flow","floght"};
    // vector<string> str = {"aac","acab","aa","abba","aa"};

    int n=INT_MAX;
    for(int i=0;i<str.size();i++){
        string s = str[i];
        int a = s.size();
        n = min(n,a);
    }

    int flag;
    vector<char> v;
    for(int j=1;j<str.size();j++){
        if(str[0][0]!=str[j][0]){
            cout<<"sorry";
            break;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=1;j<str.size();j++){
            flag=1;
            if(str[0][i]!=str[j][i]){
                flag=0;
                break;
            }
        }
        if(flag==1){
            v.push_back(str[0][i]);
        }
        else{
            break;
        }
    }
    for(auto val : v){
        cout<<val<<" ";
    }
    return 0;
}