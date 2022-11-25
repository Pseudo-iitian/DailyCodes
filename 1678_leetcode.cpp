#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string interpret(string command) {
        string s;
        for(int i=0;i<command.length();i++){
            if(command[i]=='G'){
                s.push_back('G');
            }
            else if(command[i]=='(' && command[i+1]==')'){
                s.push_back('o');
            }
            else if(command[i]=='(' && command[i+1]=='a'){
                s.push_back('a');
                s.push_back('l');
            }
        }
        return s;
    }
};
int main(){
    Solution s;
    string a = s.interpret("G()(al)");
    cout<<a;
    return 0;
}