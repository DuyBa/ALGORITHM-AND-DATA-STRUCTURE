#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin>> t;
	while(t--)
	{
		int n, m;
		long long a[10000000]={};
		cin>> n>> m;
		for(int i=0;i<n;i++) cin>> a[i];
		if(m>=a[n-1]) cout<< n;
		else
		if(a[0]>m) cout<< -1;
		else
		{
			auto idx = lower_bound(a,a+n,m);
	    	if(a[idx-a]>m) cout<< idx-a;
	    	else cout<< idx-a+1;
		}
		cout<< endl;
	}
}
