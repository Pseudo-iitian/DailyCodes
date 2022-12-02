#include<bits/stdc++.h>
using namespace std;
bool isdiv(int a){
    int n=a;
    while(n!=0){
        int r = n%10;
        if(r==0) return false;
        if(a%r!=0){
            return false;
        }
        n = n/10;  
    }
    return true;
}
vector<int> selfDividingNumbers(int left, int right){
    vector<int> ans;
    for(int i=left;i<=right;i++){
        bool res = isdiv(i);
        if(res){
            ans.push_back(i);
        }
    }
    return ans;
}
int main(){
    int left =1;
    int right = 22;
    vector<int> v = selfDividingNumbers(left,right);
    for(auto &var : v){
        cout<<var<<" ";
    }
    return 0;
}