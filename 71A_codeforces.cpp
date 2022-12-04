#include<bits/stdc++.h>
using namespace std;
int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        if(s.length()>10){
            int a = s.length()-2;
            string str = to_string(a);
            s.replace(1,a,str);
            cout<<s<<endl;
        }
        else{
            cout<<s<<endl;
        }
    }
    return 0;
}