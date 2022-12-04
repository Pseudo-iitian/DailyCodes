#include<bits/stdc++.h>
using namespace std;
void printSquare(int n) {
    // code here

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif


    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==1 || i==n){
                cout<<"*";
            }
            else if(j==1 || j==n){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
int main(){
    int a = 4;
    printSquare(a);
    return 0;
}