#include<iostream>
using namespace std;
int bns(int l, int r, int a[], int x)
{
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
		int n, m;
		cin>> n>> m;
		int a[1000000]={};
		for(int i=0;i<n;i++) cin>> a[i];
		int h= bns(0,n-1,a,m);
		if(h==-1) cout<< "NO";
		else cout<< h+1;
		cout<< endl;
	}
}
