#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x=0;
        for(int i=0;i<operations.size();i++){
            if(operations[i]=="--X" || operations[i]=="X--"){
                x--;
            }
            else if(operations[i]=="X++" || operations[i]=="++X"){
                x++;
            }
        }
        return x;
    }
};

int main(){
    Solution a;
    vector<string> s = {"++X","X++","X--"};
    cout<<a.finalValueAfterOperations(s);
    return 0;
}