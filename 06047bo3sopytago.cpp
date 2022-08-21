#include<bits/stdc++.h>
using namespace std;
int bns(long long a[], int l, int n, long long x)
{
	int r=n-1;
	while(l<=r)
	{
		int m=(l+r)/2;
		if(a[m]==x) return m;
		else if(a[m]<x) l=m+1;
		else r=m-1;
	}
	return -1;
}

int main()
{
	int t;
	cin>> t;
	while(t--)
	{
		int n;
		cin>> n;
		long long a[10000]={};
		for(int i=0;i<n;i++) 
		{
			cin>> a[i];
			a[i]*=a[i];
		}
		sort(a,a+n);
		int ck=-1;
		for(int i=0;i<n-2;i++)
		{
			for(int j=i+1;j<n-1;j++)
			{
				int l= bns(a, j+1, n, a[i]+a[j]);
				if(l!=-1)
				{
					cout<< "YES"<< endl;
					ck=0;
					break;
				}
			}
			if(ck==0) break;
		}
		if(ck==-1) cout<< "NO"<< endl;
	}
}
