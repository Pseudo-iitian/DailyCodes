#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numberOfMatches(int n) {
        int matches=0;
        int sum=0;
        while(n!=1){
            matches=n/2;
            n=n-matches;;
            sum = sum + matches;
        }
        return sum;
    }
};
int main(){
    Solution a;
    int res = a.numberOfMatches(14);
    cout<<res;
    return 0;
}