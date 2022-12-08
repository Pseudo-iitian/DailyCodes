#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
        double sum = pow(x,n);
        return sum;
    }
};
int main(){
    Solution a;
    int sum = a.myPow(2.0122,3);
    cout<<sum;
    return 0;
}