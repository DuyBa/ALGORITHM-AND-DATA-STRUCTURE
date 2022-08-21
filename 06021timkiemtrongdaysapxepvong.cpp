#include<bits/stdc++.h>
using namespace std;
int m;
int bns(int a[], int l, int r)
{
	int mi=(l+r)/2;
	while(l<=r)
	{
		if(m<a[mi]) r=mi-1;
		else if(m>a[mi]) l=mi+1;
		else return mi;
		mi=(r+l)/2;
	}
	return -1;
}
int main()
{
	int t;
	cin>> t;
	while(t--)
	{
		int n, dc=-1, tim, l, r, mi;
		cin>> n>> m;
		int a[10000000]={};
		for(int i=0;i<n;i++) cin>> a[i];
		for(int i=0;i<n-1;i++)
		{
			if(a[i+1]<a[i]) 
			{
				dc=i;
				break;
			}
		}
		if(dc==-1)
		{
			dc=n-1;
			tim= bns(a,0,dc);
		}
		else 
		{
			tim= bns(a,0,dc);
			if(tim==-1) 
			{
				dc++;
				tim =bns(a,dc,n-1);
			}
		}
		cout<< tim+1<< endl;
	}
}
