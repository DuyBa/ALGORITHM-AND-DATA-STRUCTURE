#include<bits/stdc++.h>
using namespace std;
long long M= 1e9+7;
long long tinh(int n, int k)
{
	int i, j, f[100005]={0};
	f[0]=1;f[1]=1;
	for(int i=2;i<=n;i++)
	{
		for(int j=1;j<=min(i,k);j++)
		f[i]=(f[i]+f[i-j])%M;
	}
	return f[n];
}
int main()
{
	int t, n, k;
	cin>> t; while(t--)
	{
		cin>> n>> k;
		cout<< tinh(n,k)<< endl;
	}
}
