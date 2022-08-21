#include<bits/stdc++.h>
using namespace std;
int n, a[1000]={}, b[1000]={}, c[10000]={};
int ck()
{
	int tong=0;
	for(int i=1;i<=n;i++)
	{
		if(a[i]==1)
		{
			tong+=b[i];
		}
	}
	if(tong<2) return 0;
	for(int i=2;i<=sqrt(tong);i++) if(tong%i==0)return 0;
    return 1;
}
void out()
{
	int m=0;
	if(ck())
	{
		for(int i=1;i<=n;i++)
		{
			if(a[i]==1)
			{
				c[m]=b[i];m++;
			}
		}
		
		for(int i=0;i<m;i++) cout<< c[i]<< " ";
		cout<< endl;
	}
}
void ql(int i)
{
	for(int j=0;j<=1;j++)
	{
		a[i]=j;
		if(i==n) out();
		else ql(i+1);
	}
}
int main()
{
	int t;
	cin>> t;
	while(t--)
	{
		cin>> n;
		for(int i=1;i<=n;i++) cin>> b[i];
		for(int i=1;i<=n-1;i++)
		{
			for(int j=i+1;j<=n;j++)
			if(b[j]>b[i]) swap(b[j],b[i]);
		}
		ql(1);
	}
}
