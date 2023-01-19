#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;++i){
	        cin>>a[i];
	    }
	    sort(a,a+n);
	    int minposN=INT_MAX,maxneg=INT_MIN,index=0;
	    for(int i=0;i<n;++i){
	    	if(a[i]>=0){
	    		minposN=a[i];
	    		index=i;
	    		break;
	    	}
	    }
	    if(a[0]<0) maxneg=a[index-1];
	    int res,flag;
	    int i=minposN-1;
	    if(i<=0){
	    	cout<<-1<<endl;
	    }
	    for(i;i>0;i--){
	    	flag=1;
	    	if(minposN>i && maxneg<(-1*i)){
	    		res=i;
	    		cout<<res<<endl;
	    		break;
	    	}
	    	else{
	    		flag=0;
	    	}
	    }
	    if(flag==0) cout<<-1<<endl;
	}
	return 0;
}
