#include<bits/stdc++.h>
using namespace std;
long long M= 1e9+7;
long long a[100000], c[100000], n, k;
long long qhd()
{
	memset(c,0,sizeof(c));
	c[0]=1;
	for(int i=1;i<=k;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(a[j]<=i) c[i]= (c[i]+ c[i-a[j]])%M;
		}
	}
	return c[k];
}
int main()
{
	int t; cin>> t; while(t--)
	{
		cin>> n>> k;
		for(int i=1;i<=n;i++) cin>> a[i];
		cout<< qhd()<< endl;
	}
}
