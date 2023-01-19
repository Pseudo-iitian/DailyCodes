#include <bits/stdc++.h>
using namespace std;

set<int> res;
void f(int i,vector<int> &a,vector<int> arr){
	if(i>=arr.size()){
		// we have to print consequences vector
		sort(a.begin(),a.end());
		int n = a.size()-1;
		res.insert((a[n]-a[n-1]));
		return;
	}
	a.push_back(arr[i]); 
	f(i+1,a,arr); // take this value
	a.pop_back(); // remove this value 
	f(i+1,a,arr); // and go for next value and same happens with thsis

}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> arr;
	    set<int> s;
	    for(int i=0;i<n;++i){
	    	int a;
	    	cin>>a;
	    	arr.push_back(a);
	    }
	    int i=0;
	    vector<int> a;
	    f(i,a,arr);
	    cout<<res.size()<<endl;
	}
	return 0;
}
