#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numberOfCuts(int n) {
        if(n==1){
            return 0;
        }
        if(n%2==0){
            return (n/2);
        }
        else{
            return n;
        }
    }
};
int main(){
    // 4 -> parta and b is cuts required
    Solution a;
    int b = a.numberOfCuts(4);
    cout<<b;
    return 0;
}