#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    void printTriangle(int n) {
        // code here
        for(int i = 0; i < n-1; i++){
            
            for(int j = 0; j<=i; j++){
                cout << "*";
            }
            
            int m = 0;
            while(m < 2*(n-i-1)){
                cout << " ";
                m++;
            }
            
            for(int k = 0; k<=i; k++){
                cout << "*";
            }
            cout << endl;
        }
        
        for(int i = n-1; i >= 0; i--){
            
            for(int k = 0; k <= i; k++){
                cout << "*";
            }
            
            int m = 0;
            while(m < 2*(n-i-1)){
                cout << " ";
                m++;
            }
            
            for(int j = 0; j <= i; j++){
                cout << "*";
            }
            cout << endl;
        }
    }
};
int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    Solution a;
    a.printTriangle(5);
    return 0;
}