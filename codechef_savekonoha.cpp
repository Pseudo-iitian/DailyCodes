	#include <bits/stdc++.h>
	using namespace std;


	bool cmp(int a,int b){
		return a>b;
	}
	int main() {
		// your code goes here
		int t,n,z,i,count;
		cin>>t;
		for(int j=0;j<t;j++){
		    cin>>n>>z;
		    count=0;
		    priority_queue<int> pq;
		    for(int i=0;i<n;i++){
		    	int a;
		    	cin>>a;
		    	if(a==0) continue;
		    	pq.push(a);
		    }
		    while(!pq.empty()){
		    	if(z>0){
		    		z = z - pq.top();
		    	}
		    	count++;
		    	int a = pq.top()/2;
		    	pq.pop();
		    	if(a>0) pq.push(a);
		    	if(z<=0) break;
		    }
		    if(z>0) cout<<"Evacuate"<<endl;
    	    else cout<<count<<endl;
		}
		return 0;
	}
