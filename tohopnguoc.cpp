#include<bits/stdc++.h>
using namespace std;
int c[100000], n, m, dem;
vector <int> a[100000];
void out()
{
	for(int i=1;i<=m;i++) a[dem].push_back(c[i]);
	dem++;
}
void bk(int i)
{
	for(int j=c[i-1]+1;j<=n-m+i;j++)
	{
		c[i]=j;
		if(i==m) out();
		else bk(i+1);
	}
}
int main()
{
	int t; cin>> t; while(t--)
	{
		dem=0;
		c[100000]={};
		cin>> n>> m;
		bk(1);
		for(int i=dem-1;i>=0;i--)
		{
			for(int j=0;j<=m-1;j++)
			{
				cout<< a[i][j]<< " ";
			}
			a[i].resize(0);
			cout<< endl;
		}
	}
}
