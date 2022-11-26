#include <bits/stdc++.h>
using namespace std;
    
    // 2483. Minimum Penalty for a Shop
    // leetcode biweekly contest problems here
    // https://leetcode.com/contest/biweekly-contest-92/problems/minimum-cuts-to-divide-a-circle/
    // https://leetcode.com/contest/biweekly-contest-92/problems/minimum-penalty-for-a-shop/
    // https://leetcode.com/contest/biweekly-contest-92/problems/difference-between-ones-and-zeros-in-row-and-column/
    // https://leetcode.com/contest/biweekly-contest-92/problems/count-palindromic-subsequences/
    int bestClosingTime(string customers) {
        unordered_map<int,int> m;
        int sum=10000,count;
        int n = customers.length();
        for(int i=0;i<=n;i++){
            if(i>=1){
                if(customers[i-1]=='Y'){
                    customers[i-1]='N';
                }
                else{
                    customers[i-1]='Y';
                }
            }
            count=0;
            for(int j=0;j<customers.length();j++){
                if(customers[j]=='Y'){
                    count++;
                }
            }
            sum=min(sum,count);
            // cout<<count<<endl;
            m[i]=count;
        }
        int res;
        for(int i=0;i<m.size();i++){
            if(m[i]==sum){
                res = i;
                break;
            }
        }
        return res;
    }
int main()
{
    string s = "YYYY";
    int a =  bestClosingTime(s);
    cout<<a;
    return 0;
}
