#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> a;
double avgRec(int i)
{
	if (i == n-1)
		return a[i];

	if (i == 0)
		return ((a[i] + avgRec(i+1))/n);

	return (a[i] + avgRec(i+1));
}

int main()
{
	cin>>n;
	for(int i=0;i<n;i++){
		int value;
		cin>>value;
		a.push_back(value);
	}
	cout << fixed<<setprecision(6)<<avgRec(0);
	return 0;
}