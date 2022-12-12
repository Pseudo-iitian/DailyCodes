#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,q;
    cin>>n>>q;
    vector<long long int> ans={0};
    for(int i=0;i<n;i++){
        long long int a;
        cin>>a;
        ans.push_back(a);
    }

    for(int i=0;i<n;i++){
        ans[i+1]+=ans[i];
    }

    long long int sum;
    for(int i=0;i<q;i++){
        int r,l;
        cin>>r>>l;
        sum = ans[l]-ans[r-1];
        cout<<sum<<endl;
    }

    return 0;
}
