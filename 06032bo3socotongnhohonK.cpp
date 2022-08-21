#include<bits/stdc++.h>
long long bns(long long a[], long long l, long long n, long long x)
{
	long long r=n;
	while(l<r)
	{
		long long m=(l+r)/2;
		if(x>=a[m]) l=m+1;
		else r=m;
	}
	if(l<n&&a[l]<=x) l++;
	return l;
}
using namespace std;
int main()
{
	int t; cin>> t; while(t--)
	{
		long long n, m, a[100000]={}, dem=0; cin>> n>> m;
		for(int i=0;i<n;i++) cin>> a[i];
		sort(a,a+n);
		for(int i=0;i<n-2;i++) for(int j=i+1;j<n-1;j++)
		{
			long long s= a[i]+a[j];
			long long idx= bns(a,j+1,n,m-s-1);
			dem+=idx-j-1;
		}
		cout<< dem<< endl;
	}
}
