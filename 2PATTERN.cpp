#include<bits/stdc++.h>
using namespace std;
void printTriangle(int n) {
    // code here

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        for(int j=1;j<=2*(n-i);j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=n;i>=1;i--){
        for(int j=1;j<i;j++){
            cout<<"*";
        }
        for(int j=2*(n-i+1);j>=1;j--){
            cout<<" ";
        }
        for(int j=1;j<i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    int n = 5;
    printTriangle(n);
    return 0;
}