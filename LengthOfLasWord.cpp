<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;

int lengthOfLastWord(string s) {
    s.erase(s.find_last_not_of(" \n\r\t")+1);
    int count=0;
    for(int i=s.length()-1;i>=0;i--){
        if(s[i]!=' '){
            count++;
        }
        else break;
    }
    return count;
}
int main(){
    string s;
    getline(cin,s);
    cout<<lengthOfLastWord(s);
    return 0;
=======
#include<bits/stdc++.h>
using namespace std;

int lengthOfLastWord(string s) {
    s.erase(s.find_last_not_of(" \n\r\t")+1);
    int count=0;
    for(int i=s.length()-1;i>=0;i--){
        if(s[i]!=' '){
            count++;
        }
        else break;
    }
    return count;
}
int main(){
    string s;
    getline(cin,s);
    cout<<lengthOfLastWord(s);
    return 0;
>>>>>>> 0bdcfcb (gitignore added and lengthof word problems of leetcode solved)
}