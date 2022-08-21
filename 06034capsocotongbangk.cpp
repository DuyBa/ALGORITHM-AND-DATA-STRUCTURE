#include<bits/stdc++.h>
using namespace std;
int bns1(long long a[], int r, long long x)
{
	int l=0, res=-1;
	while(l<=r)
	{
		int m=(l+r)/2;
		if(a[m]==x)
		{
	    	res=m;
	    	r=m-1;
		}  
		else if(a[m]<x) l= m+1;
		else r= m-1;
	}
	return res;
}

int bns2(long long a[], int r, long long x)
{
	int l=0, res=-1;
	while(l<=r)
	{
		int m=(l+r)/2;
		if(a[m]==x)
		{
	    	res=m;
	    	l=m+1;
		}  
		else if(a[m]<x) l= m+1;
		else r= m-1;
	}
	return res;
}

int main()
{
	int t;
	cin>> t;
	while(t--)
	{
		long long n, m, dem=0;
		cin>> n>> m;
		long long a[100000]={};
		for(int i=0;i<n;i++) cin>> a[i];
		sort(a,a+n);
		for(int i=1;i<n;i++)
		{
			int dau=bns1(a,i-1,m-a[i]);
			if(dau!=-1)
			{
				int cuoi=bns2(a,i-1,m-a[i]);
				if(cuoi==dau) dem++;
				else dem+= cuoi- dau +1;
			}
		}
		cout<< dem<< endl;
	}
}
