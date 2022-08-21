#include<bits/stdc++.h>
using namespace std;
int a[100000], n, m, dem;
vector <int> c[100000];
void out()
{
	for(int i=1;i<=m;i++) c[dem].push_back(a[i]);
	dem++;
}
void bk(int i)
{
	for(int j=a[i-1]+1;j<=n-m+i;j++)
	{
		a[i]=j;
		if(i==m) out();
		else bk(i+1);
	}
}
int main()
{
	int t; cin>> t; while(t--)
	{
		a[100000]={};
		dem=0;
		cin>> n>> m;
		bk(1);	
		for(int i=dem-1;i>=0;i--)
		{
			for(int j=0;j<m;j++) cout<< c[i][j]<< " ";
			c[i].resize(0);
			cout<< endl;
		}
	}
}
