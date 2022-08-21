#include<bits/stdc++.h>
using namespace std;
int cmp(long long a, long long b)
{
	return a>b;
}
int main()
{
	int t; cin>> t; while(t--)
	{
		int n; cin>> n;
		long long a[n], b[n], s=0;
		for(int i=0;i<n;i++) cin>> a[i];
		for(int i=0;i<n;i++) cin>> b[i];
		sort(a,a+n);
		sort(b,b+n,cmp);
		for(int i=0;i<n;i++) s+=a[i]*b[i];
		cout<< s<< endl;
	}
}
