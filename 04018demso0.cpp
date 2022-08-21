#include<iostream>
using namespace std;
int bns(int l, int r, int a[])
{
	int h;
	while(l<=r)
	{
		int m=(l+r)/2;
		if(a[m]==0)
		{
			h=m;
			l=m+1;
		} 
		else if(a[m]<0) l=m+1;
		else r=m-1;
	}
	return h;
}
int main()
{
	int t;
	cin>> t;
	while(t--)
	{
		int n;
		cin>> n;
		int a[100000]={};
		for(int i=0;i<n;i++) cin>> a[i];
		if(a[0]==1) cout<< 0;
		else if(a[n-1]==0) cout<< n;
		else 
		{
			cout<< bns(0,n-1,a)+1;
		}
		cout<< endl;
	}
}

