#include<bits/stdc++.h>
using namespace std;
int a[10000]={}, b[10000]={}, c[10000]={};
int n, m;
int ck()
{
	for(int i=1;i<=m-1;i++) if(c[i+1]<c[i]) return 0;
	return 1;
}
void out()
{
	if(ck())
	{
		for(int i=1;i<=m;i++) cout<< c[i]<< " ";
		cout<< endl;
	}	
}
void bk(int i)
{
	for(int j=a[i-1]+1;j<=n-m+i;j++)
	{
		a[i]=j;
		c[i]=b[a[i]];
		if(i==m) out();
		else bk(i+1);
	}
}
int main()
{
	int t;
	cin>> t;
	while(t--)
	{
		cin>> n>> m;
		b[0]=-999999999;
		for(int i=1;i<=n;i++) cin>> b[i];
		sort(b,b+n+1);
		bk(1);
	}
}
