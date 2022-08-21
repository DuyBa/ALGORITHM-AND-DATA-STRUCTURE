#include<bits/stdc++.h>
using namespace std;
long long M=1e9+7, c[1004][1004];
long long qhd(long long n, long long m)
{
	memset(c,0,sizeof(c));
	for(long long i=0;i<=n;i++)
	{
		for(long long j=0;j<= min(i,m);j++)
		{
			if(j==0||j==i) c[i][j]=1;
			else c[i][j]=(c[i-1][j-1]%M+ c[i-1][j]%M)%M;
		}
	}
	return c[n][m];
}
int main()
{
	int t; cin>> t;
	while(t--)
	{
		long long n, m;
		cin>> n>> m;
		cout<< qhd(n,m)<< endl;
	}
}

