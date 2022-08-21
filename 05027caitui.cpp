#include<bits/stdc++.h>
using namespace std;
int a[100000], b[100000], f[1000][1000], n, m;
int qhd()
{
	memset(f,0,sizeof(f));
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			f[i][j]= f[i-1][j];
			if(j>=a[i])
			{
				f[i][j]= max(f[i][j],f[i-1][j-a[i]]+b[i]);
			}
		}
	}
	return f[n][m];
}
int main()
{
	int t; cin>> t; while(t--)
	{
		cin>> n>> m;
		for(int i=1;i<=n;i++) cin>> a[i];
		for(int i=1;i<=n;i++) cin>> b[i];
		cout<< qhd()<< endl;
	}
}
