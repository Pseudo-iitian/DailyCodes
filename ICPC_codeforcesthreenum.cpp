#include <bits/stdc++.h>
using namespace std;

int main() {
    int k,s;
    cin>>k>>s;
    int z,count=0;
    for(int i=0;i<=k;i++){
        for(int j=0;j<=k;j++){
            int x=i,y=j,z=s-(x+y);
            if(x+y+z==s && z>=0 && z<=k){
                count++;
            }
        }
    }
    cout<<count;
    return 0;
}