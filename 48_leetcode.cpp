#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector<vector<int>> ans;
        for(int i=0;i<matrix.size();i++){
            vector<int> temp;
            for(int j=matrix.size()-1;j>=0;j--){
                temp.push_back(matrix[j][i]);
            }
            ans.push_back(temp);
        }
        matrix = ans;
    }
};
int main(){
    Solution a;
    vector<vector<int>> v = {{1,2,3},{4,5,6},{7,8,9}};
    a.rotate(v);
    return 0;
}