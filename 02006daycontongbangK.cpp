#include<bits/stdc++.h>
using namespace std;
int n, a[1000]={}, b[1000]={}, c[10000]={}, m, dem;
int ck()
{
	int tong=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]==1)
		{
			tong+=b[i];
		}
	}
	if(tong==m) return 1;
	else return 0;
}
void out()
{
	int m=0;
	if(ck())
	{
		dem++;
		for(int i=0;i<n;i++)
		{
			if(a[i]==1)
			{
				c[m]=b[i];
				m++;
			}
		}
		sort(c,c+m);
		cout<< "[";
		for(int i=0;i<m-1;i++) cout<< c[i]<< " ";
		cout<< c[m-1]<< "] ";
	}
}
void ql(int i)
{
	for(int j=1;j>=0;j--)
	{
		a[i]=j;
		if(i==n-1) out();
		else ql(i+1);
	}
}
int main()
{
	int t;
	cin>> t;
	while(t--)
	{
		cin>> n>> m;
		dem=0;
		for(int i=0;i<n;i++) cin>> b[i];
		sort(b,b+n);
		ql(0);
		if(dem==0) cout<< -1;
		cout<< endl;
	}
}
