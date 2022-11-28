#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double> ans;
        double kelvin=0,fahrenheit=0;
        kelvin = celsius + 273.15;
        ans.push_back(kelvin);
        fahrenheit = celsius * 1.80 + 32.00;
        ans.push_back(fahrenheit);
        return ans;
    }
};
int main(){
    Solution a;
    vector<double> v = a.convertTemperature(20);
    for(auto &var : v){
        cout<<var<<" ";
    }
    return 0;
}