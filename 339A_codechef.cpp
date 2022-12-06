#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s="2";
    for(int i=0;i<s.length();i=i+2){
        for(int j=i+2;j<s.length();j=j+2){
            if(s[i]>s[j]){
                swap(s[i],s[j]);
            }
        }
    }
    cout<<s;
    return 0;
}